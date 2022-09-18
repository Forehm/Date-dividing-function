#include <iostream>
#include <string>

using namespace std;


string DateDivide(int number)
{
	int count = number;
	int year = count / 365;
	count = count % 365;
	int month = count / 30;
	count = count % 30;
	int week = count / 7;
	count = count % 7;
	int day = count;
	string str_year = to_string(year);
	string str_month = to_string(month);
	string str_week = to_string(week);
	string str_day = to_string(day);
	return str_year + " years, " + str_month + " month, " + str_week + " weeks, " + str_day + " days ";
}



int main()
{
	return 0;
}

