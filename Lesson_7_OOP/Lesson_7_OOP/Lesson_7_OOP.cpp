#include <iostream>
using namespace std;

//Перегрузка бинарных операций
class Time {
private:
	//Поля
	int hour;
	int min;
	int sec;
public:
	//Инициализация
	Time() : hour(0), min(0), sec(0) {
	}

	Time(int h, int m, int s) : hour(h), min(m), sec(s) {
	}

	void showTime() {
		cout << hour << ":" << min << ":" << sec << endl;
	}

	//Оставляем тут только прототип
	Time operator+ (Time t2);

	//Перегрузка логических операций, как прототип
	bool operator> (Time t2);
};

int main() {
	setlocale(0, "");

	Time t1(2, 34, 56);
	Time t2(1, 12, 5);
	Time t3;
	//Следовательно далее создадим конструктор для трёх переменных

	//Для сравнения времён
	if (t1 > t2)
		cout << "t1 > t2" << endl;
	else
		cout << "t2 >= t1" << endl;

	t3 = t2 + t1;

	t3.showTime();

	system("pause");
	return 0;
}

//Перегрузим +
//t3 = t1 + t2
//Объект слева вызывает операцию, а справо это аргумент
//Должны указать имя класса к которому она принадлежит
Time Time::operator+ (Time t2) {
	//Результирующая переменная
	Time time_res;
	//Складываем секунды
	time_res.sec = sec + t2.sec;

	//Проверка, если да то сложение переносим в минуты
	if (time_res.sec >= 60) {

		time_res.sec -= 60;
		time_res.min = 1;
	}

	//Складываем минуты
	//+= так как к этому времени там может быть 1
	time_res.min += min + t2.min;

	//Такая же проверка как сверху
	if (time_res.min >= 60) {

		time_res.min -= 60;
		time_res.hour = 1;
	}

	//Складываем часы
	time_res.hour += hour + t2.hour;

	return time_res;
}

//x:: <- это показывает принадлежность какому классу
bool Time::operator> (Time t2) {
	int sec1 = hour * 3600 + min * 60 + sec;
	int sec2 = t2.hour * 3600 + t2.min * 60 + t2.sec;

	//Проверяет, ответ будет да или нет
	return (sec1 > sec2);
}
