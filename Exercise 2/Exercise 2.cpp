#include <iostream>
using namespace std;

int main()
{
	cout << "Vui long nhap ten cua ban: " << endl;
	string name;
	cin >> name;

	cout << "Vui long nhap dia chi nha ban: " << endl;
	string addr;
	cin >> addr;

	cout << "Vui long nhap ngay thang nam sinh (dd mm yyyy): " << endl;
	int date, month, year;
	cin >> date >> month >> year;

	int i = 0;
	while (i < 1)
	{
		if ((date < 1) || (date > 31) || (month < 1) || (month > 12) || (year > 2022))
		{
			cout << "Vui long nhap lai (dd mm yyyy): " << endl;
			cin >> date >> month >> year;
		}
		else
		{
			i++;
		}

		if (month = 2)
		{
			if ((date < 1) || (date > 29))
			{
				cout << "Vui long nhap lai (dd mm yyyy): " << endl;
				cin >> date >> month >> year;
			}
		}

		if ((month = 2) || (month = 4) || (month = 6) || (month = 9) || (month = 11))
		{
			if ((date < 1) || (date > 30))
			{
				cout << "Vui long nhap lai (dd mm yyyy): " << endl;
				cin >> date >> month >> year;
			}
		}
	}

	int age;
	if (date > 15 && date <= 31 && month >= 9 && month <= 12)
	{
		age = 2022 - year - 1;
	}
	else
	{
		age = 2022 - year;
	}

	cout << "==================================================" << endl;
	cout << "||\tXin chao: " << name << "\t\t\t\||" << endl;
	cout << "||\tBan o dia chi: " << addr << "\t\||" << endl;
	cout << "||\tBan sinh ngay: " << date << "/" << month << "/" << year << "\t\t\||" << endl;
	cout << "||\tNam nay ban: " << age << " tuoi"
		 << "\t\t\t\||" << endl;
	cout << "==================================================" << endl;
}
