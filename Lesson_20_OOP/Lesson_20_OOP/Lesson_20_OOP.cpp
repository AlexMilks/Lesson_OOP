#include <iostream>
#include "Header.h"
using namespace std;
using namespace my;

//������������� ���������
//������� �������������:
//	1) �������� ���������� �������
//        ���� ������� ������� stl, ������� �������� ��������� ������� �������, � ������� ������ � �������
//	2) ��������� ��������� �� �����
//����� ����������� ���������� �����, ����������� GlobalVar ���������� ��� ����
//����� ������ ��� ������ � ���� ����� � main �������� � int extert
//��� ������� � ��� ��� ��� �� � ���������� � ��������� ����� ����������� ���, � ����� ������ ����������� ��������� � file.cpp
//������ ���� �� ������� �����, ���������� ���������� ���� � ������ �� �������� ������, ����� �������� ����� static ����� � int
//��� �������, ����� �� ����� ��� ������ ������ ���������������� �����
//static - ����� ��������� �������� � �������, ���� ���������� �����������, ���� �� ���������� ���� ���������
//		   � ������� ��� ���� ������������� ���� �������� ������ - ��� �����, ������� ��������� �� ������� ������� �� ����������(�������� �����)
//         ������ �� ������ ������������ ������� ���������

//��� ���� ����� ���������� � ������ ����� �������, ������ ����� ��� �����������, � � main ��������� ��������
//���� �� �������, ����� func(), ���� ������ ������ ����� main, �� ������ ���, ������ ����� � int static, � ����� ����������� ����� �������� ����

//��������� ����� ������ �����, ��� ���� ���������
//���� �� �������, ����� ��� ���� ����� � ����� ������, ����� ���������� � ����� extern const int, � � main ������ = 3

//������
//����������� ������� ������ ���� � ������ �����, ��� �� ����� ��� ������������
//JustClass::JustFunc() - ����������� ������
//���������� ��� �� ����� ����� ����������
//� ��� �� ����� ������ ������ �����, ��� �� ������ ������� ���� ������������ ���������� �����

//������������ ����
//������� �������� ������������� �� �������� ������� ����� � ��� �� ���������� � ������ �����
//	������������ ����� �������� � ���� ���������� ���������� � �������, � ��� �� ����� ��������� ����������� �������
//	������ ��� �� ����� ����������� ������ ������ �� ����������, � ������� �� ��������� ���������� ��� �������
//� ���� �������� ��� ����������, ������� � ��� ���� � ���������
//���������� extern int GlobalVar;
//� � file.cpp ����� ��������� ������ ����������� �������, ������� ��� ���������
//����������� ������ ���������� � ������������ ����
//� ��������� �������� �������
//��� � ����� � ������������ ���� ��������� ����� � ������(��������), � ������ .�pp, ������� �� main ����� ��� ����������� � ������
//������ ��� ����� ���������� ������������ ����, ����� ��� �����, ���������� ��� #include "Header.h"

//������������ ���
//����� ��� ����, ����� ��� �� ���������� ���������� � ����������� �������
//�������� � ������ ���������� � ��� ������� add(), �� ��� ��� ����, �� � ���� � ������� ���������� ��� �������
//	� ������ ������������ ��� ����������� ��� ������� ��� my::add()
//�������� ��� ������������ ��� ��� ���������� GlobalVar
//�������� ��� � ��������� �����
//����� ���������� � GlobalVar, ������ ��� ����� �������� ::
//int my::GlobalVar = 7; � ������ ����� �� ���������� ������ ���
//�������� ��� ���� ������������ ���
//��� ���� ����� �� ������ ���� �������(���� ����� ����������), ��� my::
//�� ����� �������� using namespace my;

//�������������: ���� ������ std;, �� ����� ����� ����� ������ ��� ����/����� ��� � ����� std::


//static int GlobalVar;
//extern const int GlobalVar; 

//����� ��������, � ����������� � ������ �����

//static int func();



int main() {
	setlocale(0, "");

	//GlobalVar = 4;
	cout << my::GlobalVar << endl;
	cout << other::GlobalVar << endl;

	//� ���� ������������� ���, ���� ��� �������� � ������ ��� std;
	cout << GlobalVar << endl;

	cout << func() << endl;

	//������

	JustClass JustObj;

	JustObj.JustFunc();

	system("pause");
	return 0;
}

//int func() {
//	return 1;
//}