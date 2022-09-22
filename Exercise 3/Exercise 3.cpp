#include <iostream>
using namespace std;

int main() {
	int i = 0;
	while (i < 10) {
		cout << "Ban da san sang chua? (Y/n)" << endl;
		string ans;
		cin >> ans;
		
		if (ans == "Y") {
			cout << "Ban ten gi?" << endl;
			string name;
			cin >> name;
			
			cout << "Ban sinh ngay nao? (dd mm yyyy)" << endl;
			int date, month, year;
			cin >> date >> month >> year;
			
			int i = 0;
			while (i < 1)
			{
				if ((date < 1) || (date > 31) || (month < 1) || (month > 12) || (year > 2022))
				{
					cout << "Vui long nhap lai (dd mm yyyy):" << endl;
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
			cout << "||\tXin chao ban " << name << "\t\t\t\||" <<endl;
			cout << "||\tBay gio ban " << age << " tuoi phai khong?" << "\t\t\||" << endl;
			cout << "||\tHom nay la thu nam\t\t\t\||" << endl;
			cout << "||\tCon 2 ngay nua la Chu Nhat\t\t\||" << endl;
			cout << "||\tCo len!\t\t\t\t\t\||" << endl;
			cout << "==================================================" << endl;
			break;
		}
		else {
			if (i < 3) {
				cout << "Khong sao! Cu tu tu ma chon" << endl;
			}
			else if (i < 6) {
				cout << "Sao ma cham chap qua vay??" << endl;
			}
			else if (i < 8) {
				cout << "Li qua nha baby!" << endl;
			}
			else if (i < 9) {
				cout << "Le len ma oi!" << endl;
			}
			i++;
			cout << "==================================================" << endl;
		}
		cout << "Sau 10 lan co gang, ban da mat luot!" << endl;
		cout << "Bye! Hen gap lai khi ban da san sang!" << endl;
		break;
	}
}
