#include <iostream>
#include "Header.h"
using namespace std;

int my::GlobalVar = 7;
int other::GlobalVar = 2;
//extern const int GlobalVar = 3; 

//Определяем функцию
int func() {
	return 3;
}

//Определяем метод
void JustClass::JustFunc() {
	cout << "Это просто метод" << endl;
};