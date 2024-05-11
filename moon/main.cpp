#include <iostream>
#include "datetime.h"
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

struct row
{
    Datetime data;
    double El;
};

void make_hms(Datetime &_date, char (&_HMS)[7])
{
    _date.hour = (_HMS[0] - 48) * 10 + (_HMS[1] - 48);
    _date.minute = (_HMS[2] - 48) * 10 + (_HMS[3] - 48);
    _date.second = (_HMS[4] - 48) * 10 + (_HMS[5] - 48);
}

void make_row(istringstream &isstr, string &current_date, row &result)
{
    char HMS[7];
    result.data = Datetime(current_date);
    isstr >> HMS >> result.El >> result.El >> result.El;

    make_hms(result.data, HMS);
}

void calculate(string path, Datetime full_date)
{
    ifstream file(path);
    if (!file.is_open())
    {
        cerr << "Error occurred while file reading";
    }

    char line[100];

    char curr_date[9];
    string curre_date;

    row last_row;
    row my_row;

    bool is_found_date = false;
    double max_El = -9999;
    Datetime date;

    file.getline(line, 100);
    file.getline(line, 100);

    cout << "Date: " << full_date << endl;

    istringstream iss(line);
    iss >> curr_date;
    curre_date = curr_date;
    make_row(iss, curre_date, last_row);

    while (true)
    {
        file.getline(line, 100);
        istringstream iss(line);
        iss >> curr_date;
        curre_date = curr_date;
        if (!is_found_date and ((10 * (curr_date[4] - 48) + (curr_date[5] - 48)) != full_date.month or
                                (10 * (curr_date[6] - 48) + (curr_date[7] - 48)) != full_date.day))
        {
            continue;
        }
        try
        {
            make_row(iss, curre_date, my_row);
        }
        catch (...)
        {
            break;
        }
        is_found_date = true;

        if (last_row.El < 0 and my_row.El >= 0)
        {
            cout << "Moonrise:" << my_row.data << endl;
        }
        else if (last_row.El > 0 and my_row.El <= 0)
        {
            cout << "Moonset:" << my_row.data << endl;
        }
        if (max_El < my_row.El)
        {
            date = my_row.data;
            max_El = my_row.El;
        }
        last_row = my_row;

        if (is_found_date and ((10 * (curr_date[6] - 48) + (curr_date[7] - 48)) != full_date.day or
                               (10 * (curr_date[4] - 48) + (curr_date[5] - 48)) != full_date.month))
        {
            break;
        }
    }
    cout << "lunar transit: " << date;
    file.close();
}
int main()
{
    // У меня линукс, на винде может быть другой путь к файлам
    string path = "../moon_data/moon";

    Datetime full_date(9, 3, 1998);

    path += to_string(full_date.year) + ".dat";

    calculate(path, full_date);
}