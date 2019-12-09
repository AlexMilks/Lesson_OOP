#include <iostream>
using namespace std;

//explicit и mutable
//explicit - исключить вероятность несанкционированного преобразования типов
//mutable - чтобы изменять некоторые поля объекта, даже если он константа
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

	//И чтобы запретить преобразование просто напишем вначале
	explicit Time(int s) {
		hour = s / 3600;
		min = (s - hour * 60) / 60;
		sec = s - hour * 3600 - min * 60;
	}
};

//Класс для mutable
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

	//Объект Time с целочисленным значением, будет работать
	//Time t1(23);

	//Выводит ошибку с explicit
	//Time t2 = 34;

	const Phone p;

	//Это выведет ошибку, поэтому нужно добавить к версии mutable, и const в метод, метод должен быть константой
	//p.setModel("Aloha");
	//Тут теперь нет ошибки
	p.setVersion("1.8");

	system("pause");
	return 0;
}
