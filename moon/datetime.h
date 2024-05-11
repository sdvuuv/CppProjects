#include <iostream>
using namespace std;

class Datetime {
public:
	int day, month, year, hour, minute, second;
	double julian_date;
	Datetime();
	Datetime(int _day, int _month, int _year);
	Datetime(int _day, int _month, int _year, int _hour, int _minute, int _second);
	Datetime(string date);

	friend ostream& operator<<(ostream& out, const Datetime& date);
	friend istream& operator>>(istream& in, Datetime& date);

	int& operator -(const Datetime& date) const;
	int& operator +(const Datetime& date) const;

	Datetime& operator -(const int& _day) const;
	Datetime& operator +(const int& _day) const;

	bool operator <(const Datetime& date) const;
	bool operator >(const Datetime& date) const;
	bool operator <=(const Datetime& date) const;
	bool operator >=(const Datetime& date) const;
	bool operator ==(const Datetime& date) const;
	bool operator !=(const Datetime& date) const;

	int Calculate_day_of_week() const;

	int Calculate_day_of_year() const;

	bool check_leap_year() const;

	double Julian_days() const;

	bool isDateValid();
};

Datetime convert_date(double julian);