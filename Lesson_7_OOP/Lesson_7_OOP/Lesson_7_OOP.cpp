#include <iostream>
using namespace std;

//���������� �������� ��������
class Time {
private:
	//����
	int hour;
	int min;
	int sec;
public:
	//�������������
	Time() : hour(0), min(0), sec(0) {
	}

	Time(int h, int m, int s) : hour(h), min(m), sec(s) {
	}

	void showTime() {
		cout << hour << ":" << min << ":" << sec << endl;
	}

	//��������� ��� ������ ��������
	Time operator+ (Time t2);

	//���������� ���������� ��������, ��� ��������
	bool operator> (Time t2);
};

int main() {
	setlocale(0, "");

	Time t1(2, 34, 56);
	Time t2(1, 12, 5);
	Time t3;
	//������������� ����� �������� ����������� ��� ��� ����������

	//��� ��������� �����
	if (t1 > t2)
		cout << "t1 > t2" << endl;
	else
		cout << "t2 >= t1" << endl;

	t3 = t2 + t1;

	t3.showTime();

	system("pause");
	return 0;
}

//���������� +
//t3 = t1 + t2
//������ ����� �������� ��������, � ������ ��� ��������
//������ ������� ��� ������ � �������� ��� �����������
Time Time::operator+ (Time t2) {
	//�������������� ����������
	Time time_res;
	//���������� �������
	time_res.sec = sec + t2.sec;

	//��������, ���� �� �� �������� ��������� � ������
	if (time_res.sec >= 60) {

		time_res.sec -= 60;
		time_res.min = 1;
	}

	//���������� ������
	//+= ��� ��� � ����� ������� ��� ����� ���� 1
	time_res.min += min + t2.min;

	//����� �� �������� ��� ������
	if (time_res.min >= 60) {

		time_res.min -= 60;
		time_res.hour = 1;
	}

	//���������� ����
	time_res.hour += hour + t2.hour;

	return time_res;
}

//x:: <- ��� ���������� �������������� ������ ������
bool Time::operator> (Time t2) {
	int sec1 = hour * 3600 + min * 60 + sec;
	int sec2 = t2.hour * 3600 + t2.min * 60 + t2.sec;

	//���������, ����� ����� �� ��� ���
	return (sec1 > sec2);
}
