#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {     //��0 ��ʼ������
	string ret;
	bool flag = false;

	for (int i = 0; i < 5; i++) {
		cout << "��ʼ��" << i + 1 << "������" << endl;
		cout << "��ϲ������Ƭ��" << endl;
		cin >> ret;

		if (ret != "yes") {
			continue;
		}

		cout << "�������㣬����������" << endl;
		cin >> ret;

		if (ret == "yes") {
			flag = true;
			break;
		}
	}

	if (flag) {
		cout << "��������֮��" << endl;
	}


	/*
	int year;
	int month;
	bool flag;     //��ʾ�Ƿ�������
	int days;

	cout << "��������ݣ�" << endl;
	cin >> year;
	
	cout << "�������·ݣ�" << endl;
	cin >> month;

	if (year % 400 == 0) {
		flag = true;
	}else if (year % 4 == 0 && year % 100 != 0) {
		flag = true;
	}else {
		flag = false;
	}

	switch (month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		days = 31;
		break;
	case 2:
		days = flag ? 29 : 28;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		cout << "�Ƿ��·�" << endl;
		break;
	}

	cout << year << "��" << month << "��" << days << "��" << endl;
	*/
	system("pause");

	return 0;
}