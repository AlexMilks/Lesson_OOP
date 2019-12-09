#include <iostream>
using namespace std;

//�������������� �����, �� Time � int � �������, �� ������� ������� ������ "�����"
//�������������: ���� �� ����������������� � ���������������� �� ������ ��������������� ����� ��������� �����
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

	Time(int s) {
		hour = s / 3600;
		min = (s - hour * 60) / 60;
		sec = s - hour * 3600 - min * 60;
	}

	void showTime() {
		cout << hour << ":" << min << ":" << sec << endl;
	}

	//���� ��������������
	operator int() {
		return (hour * 3600 + min * 60 + sec);
	}

};

int main() {
	setlocale(0, "");

	Time t(0, 10, 24);
	Time t2;

	//��� int � Time
	int sec = 75;
	t2 = sec;

	//��� Time � int
	//int sec = t;
	//t1.showTime();

	t2.showTime();

	cout << sec << endl;

	system("pause");
	return 0;
}
