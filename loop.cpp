// сумма чисел от 1 до 1000.
#include <iostream>
#include <clocale>
using namespace std;
int main()
{//superprog
	int i; //счетчик цикла
	int sum = 0; //обнуляем переменную
	//задаем начальное значение 1, конечное 1000 и задаем шаг цикла 1
	for(i = 1; i <= 1000; i++)
	{
		sum = sum + i;
	}
	setlocale(LC_ALL, "russian");
	cout << "Сумма чисел от 1 до 1000: " << sum;
	return 0;
}