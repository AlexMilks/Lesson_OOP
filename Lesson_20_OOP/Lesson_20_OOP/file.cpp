#include <iostream>
#include "Header.h"
using namespace std;

int my::GlobalVar = 7;
int other::GlobalVar = 2;
//extern const int GlobalVar = 3; 

//���������� �������
int func() {
	return 3;
}

//���������� �����
void JustClass::JustFunc() {
	cout << "��� ������ �����" << endl;
};