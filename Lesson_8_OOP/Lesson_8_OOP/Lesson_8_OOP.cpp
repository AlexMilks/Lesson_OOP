#include <iostream>
using namespace std;

int const LIMIT = 10;

//Перегрузка операции индексации массива []
class Array {
private:
	int arr[LIMIT];
public:
	//Конструктор
	Array() {
		for (int i = 0; i < LIMIT; i++)
		{
			arr[i] = 0;
		}
	}

	//Перегрузка []
	int& operator[] (int n) {
		if (n < 0 || n >= LIMIT) {
			cout << "Ошибка индексации" << endl;
			exit(1);
		}
		return arr[n];
	}
};

int main() {
	setlocale(0, "");

	Array a1;

	//Выведем 5-ый элемент
	cout << a1[5] << endl;

	//Хотим сделать, так a[4] = 7
	//Чтобы это сделать добавим &, чтобы он давал нам ссылку, и мы его пезаписывали

	a1[5] = 7;
	cout << a1[5] << endl;

	system("pause");
	return 0;
}