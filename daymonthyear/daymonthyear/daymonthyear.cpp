#include<iostream>
#include<string>
using namespace std;

void main()
{
	int day;
	int month;
	int year;
	int d, m;
	string names[12];
	names[0]="January";
	names[1] = "Febraury";
	names[2] = "March";
	names[3] = "April";
	names[4] = "May";
	names[5] = "June";
	names[6] = "July";
	names[7] = "August";
	names[8] = "Septemper";
	names[9] = "October";
	names[10] = "November";
	names[11] = "Desember";
	
	cout << "Enter The Day" << endl;
	cin >> d ;
	if (d >= 1 && d <= 31)
		day = d;
		else
		{
			cout << d << "Is Not a Valid" << "Value for the day.\n";
			exit(EXIT_FAILURE);
		}

	cout << "Enter The Month" << endl;
	cin >> m;
	if (m >= 1 && m <= 12)
		month=m;
		else
		{
			cout << m << "Is Not a Valid" << "Value for the month.\n";
			exit(EXIT_FAILURE);
		}

	cout << "Enter The Year" << endl;
	cin >> year;

	cout << month << "/" << day << "/" << year << endl;
	cout << names[month-1] << " " << day << "," << year << endl;
	cout << day << " " << names[month-1] << " " << year << endl;
	system("pause");

















	}
































