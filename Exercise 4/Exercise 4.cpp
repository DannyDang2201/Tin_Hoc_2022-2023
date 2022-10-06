#include <iostream>
#include <string>
#include <vector>

using namespace std;

string day_of_the_week(string day) {
	int _day = stoi(day.substr(0, 2));
	int month = stoi(day.substr(3, 2));
	int year = stoi(day.substr(6, 4));
	
	vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	vector<string> dates = {"Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay", "Chu Nhat"};
	
	int d = _day;
	for (int i = 0; i < month - 1; i++) {
		d += days[i];
	}
	if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month > 2) {
		d++;
	}
	
	for (int i = 2010; i < year; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
			d += 366;
		}
		else {
			d += 365;
		}
	}
	
	string result = dates[(d % 7 + 3) % 7];
	return result;
}

string leap_year(string day) {
	int year = stoi(day.substr(6, 4));
	string result = "";
	
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		result = "la nam nhuan";
	}
	else {
		result = "khong la nam nhuan";
	}
	
	return result;
}

int main() {
	cout << "Ban muon tiep tuc thu khong? (Y/N) " << endl;
	string ans;
	cin >> ans;
	int i = 0;
	while (i < 1) {
		if (ans != "Y" && ans != "N") {
			cout << "Ban muon tiep tuc thu khong? (Y/N) " << endl;
			cin >> ans;
		}
		if (ans == "Y") {
			cout << "Hay nhap ngay ban muon kiem tra (dd/mm/yyyy): " << endl;
			string date;
			cin >> date;
			cout << "Nam " << date.substr(6, 4) << " " << leap_year(date) << endl;
			cout << "Ngay: " << date << " La thu may trong tuan? " << day_of_the_week(date) << endl;
			cout << "Ban muon tiep tuc thu khong? (Y/N) " << endl;
			cin >> ans;
		}
		if (ans == "N") {
			i++;
		}
	}
}
