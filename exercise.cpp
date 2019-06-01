#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main(void) {     //从0 开始数数！
	string ret;
	bool flag = false;

	for (int i = 0; i < 5; i++) {
		cout << "开始第" << i + 1 << "次相亲" << endl;
		cout << "你喜欢动作片吗？" << endl;
		cin >> ret;

		if (ret != "yes") {
			continue;
		}

		cout << "我中意你，你中意我吗？" << endl;
		cin >> ret;

		if (ret == "yes") {
			flag = true;
			break;
		}
	}

	if (flag) {
		cout << "开启浪漫之旅" << endl;
	}


	/*
	int year;
	int month;
	bool flag;     //表示是否是闰年
	int days;

	cout << "请输入年份：" << endl;
	cin >> year;
	
	cout << "请输入月份：" << endl;
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
		cout << "非法月份" << endl;
		break;
	}

	cout << year << "年" << month << "月" << days << "天" << endl;
	*/
	system("pause");

	return 0;
}