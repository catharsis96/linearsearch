// min_max.cpp: определяет точку входа для консольного приложения.
// поиск минимального значения в одномерном масиве
 

#include <iostream>
#include <ctime>
using namespace std;
 
int main(int argc, char* argv[])
{
    srand(time(0));
    const int array_size = 25; // размер одномерного массива
    int array1[array_size]; // объявление одномерного массива
    for (int counter = 0; counter < array_size; counter++)
    {
     array1[counter] = rand() % 50 - rand() % 50; // заполняем массив случайными значениями в диапазоне от -49 до 49 включительно
     cout << array1[counter] << " "; // печать элементов одномерного массива array1
    }
    int min = array1[0]; // переменная для хранения минимального значения
    for (int counter = 1; counter < array_size; counter++)
    {
     if ( min > array1[counter] ) // поиск минимального значения в одномерном массиве
         min = array1[counter];
    }
    cout << "nmin = " << min << endl;
	//
    return 0;
}