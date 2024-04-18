#include "datetime.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

vector<int> dates{};

Date::Date(int day, int month, int year)
{
    curYear = year;
    JDate = DateToJD(day, month, year);
}

Date::Date(string date)
{
    curYear = dates[2];
    JDate = DateToJD(dates[0], dates[1], dates[2]);
}

Date::Date(int day, string month, int year)
{
    map<string, int> strMonth{
        {"Jan", 1},
        {"Feb", 2},
        {"Mar", 3},
        {"Apr", 4},
        {"May", 5},
        {"Jun", 6},
        {"Jul", 7},
        {"Agu", 8},
        {"Sep", 9},
        {"Oct", 10},
        {"Nov", 11},
        {"Dec", 12}};
    JDate = DateToJD(day, strMonth[month], year);
    curYear = year;
}

Date::~Date()
{
    JDate = 0;
    dates.clear();
}

double Date::DateToJD(int day, int month, int year)
{
    checkDate(day, month, year);

    double gregorianAdjustment = 1;
    if (year < 1582)
        gregorianAdjustment = 0;
    if (year <= 1582 && month < 10)
        gregorianAdjustment = 0;
    if (year <= 1582 && month == 10 && day < 5)
        gregorianAdjustment = 0;
    double JDate = -1 * (int)(7 * ((int)((month + 9) / 12) + year) / 4);

    int sign = 1;
    if ((month - 9) < 0)
        sign = -1;
    int absDiff = month - 9;
    if (absDiff < 0)
        absDiff *= -1;
    double j1 = (int)(year + sign * (int)(absDiff / 7));
    j1 = -1 * (int)((::floor(j1 / 100) + 1) * 3 / 4);
    JDate = JDate + (int)(275 * month / 9) + day + (gregorianAdjustment * j1);
    JDate = JDate + 1721027 + 2 * gregorianAdjustment + 367 * year - 0.5;

    return JDate;
}

void Date::JDToDate(double JDate)
{
    double z = ::floor(JDate + 0.5);
    double w = ::floor((z - 1867216.25) / 36524.25);
    double x = ::floor(w / 4);
    double a = z + 1 + w - x;
    double b = a + 1524;
    double c = ::floor((b - 122.1) / 365.25);
    double d = ::floor(365.25 * c);
    double e = ::floor((b - d) / 30.6001);

    double day = ::floor(b - d - ::floor(30.6001 * e));
    double month = e < 14 ? e - 1 : e - 13;
    double year = month > 2 ? c - 4716 : c - 4715;

    dates.clear();
    dates.push_back(static_cast<int>(day));
    dates.push_back(static_cast<int>(month));
    dates.push_back(static_cast<int>(year));
}

string Date::weekDay()
{
    string daysOfweek[]{"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    return daysOfweek[static_cast<int>(JDate + 0.5) % 7];
}

void Date::calculateEasterDate()
{
    int year = curYear;
    int a = year % 19;
    int b = year / 100;
    int c = year % 100;
    int d = b / 4;
    int e = b % 4;
    int f = (b + 8) / 25;
    int g = (b - f + 1) / 3;
    int h = (19 * a + b - d - g + 15) % 30;
    int i = c / 4;
    int k = c % 4;
    int l = (32 + 2 * e + 2 * i - h - k) % 7;
    int m = (a + 11 * h + 22 * l) / 451;
    int month = (h + l - 7 * m + 114) / 31;
    int day = ((h + l - 7 * m + 114) % 31) + 1;

    // Католическая пасха считается

    cout << "Дата Пасхи для текущего года: " << day << "." << month << "." << year << endl;
}

void Date::checkDate(int day, int month, int year)
{
    if (month > 12 || month < 1)
        throw DateException("Error: month error");

    if (day < 1)
        throw DateException("Error: day error");

    int daysInMonth = 0;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        daysInMonth = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        daysInMonth = 30;
        break;
    case 2:
        daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        break;
    default:
        throw DateException("Error: month error");
    }

    if (day > daysInMonth)
        throw DateException("Error: invalid days count");
}

double Date::operator-(const Date &other)
{
    return this->JDate < other.JDate ? other.JDate - this->JDate : this->JDate - other.JDate;
}

ostream &operator<<(ostream &os, const Date &date)
{
    Date temp = date;
    temp.JDToDate(date.JDate);

    os << dates[0] << "." << dates[1] << "." << dates[2];
    return os;
}