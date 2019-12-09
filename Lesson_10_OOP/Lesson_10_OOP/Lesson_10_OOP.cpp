#include <iostream>
using namespace std;

//explicit � mutable
//explicit - ��������� ����������� �������������������� �������������� �����
//mutable - ����� �������� ��������� ���� �������, ���� ���� �� ���������
class Time {
private:
	int hour;
	int min;
	int sec;
public:
	Time() : hour(0), min(0), sec(0) {
	}

	Time(int h, int m, int s) : hour(h), min(m), sec(s) {
	}

	//� ����� ��������� �������������� ������ ������� �������
	explicit Time(int s) {
		hour = s / 3600;
		min = (s - hour * 60) / 60;
		sec = s - hour * 3600 - min * 60;
	}
};

//����� ��� mutable
class Phone {
private:
	int year;
	string model;
	string owner;
	mutable string version;
public:
	void setModel(string m) {
		model = m;
	}

	void setVersion(string v) const {
		version = v;
	}
};

int main() {
	setlocale(0, "");

	//������ Time � ������������� ���������, ����� ��������
	//Time t1(23);

	//������� ������ � explicit
	//Time t2 = 34;

	const Phone p;

	//��� ������� ������, ������� ����� �������� � ������ mutable, � const � �����, ����� ������ ���� ����������
	//p.setModel("Aloha");
	//��� ������ ��� ������
	p.setVersion("1.8");

	system("pause");
	return 0;
}
