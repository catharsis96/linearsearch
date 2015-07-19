// min_max.cpp: ���������� ����� ����� ��� ����������� ����������.
// ����� ������������ �������� � ���������� ������
 
//library of input-output
#include <iostream>
#include <ctime>
using namespace std;
 
int main(int argc, char* argv[])
{
    srand(time(0));
    const int array_size = 25; // ������ ����������� �������
    int array1[array_size]; // ���������� ����������� �������
    for (int counter = 0; counter < array_size; counter++)
    {
     array1[counter] = rand() % 50 - rand() % 50; // ��������� ������ ���������� ���������� � ��������� �� -49 �� 49 ������������
     cout << array1[counter] << " "; // ������ ��������� ����������� ������� array1
    }
    int min = array1[0]; // ���������� ��� �������� ������������ ��������
    for (int counter = 1; counter < array_size; counter++)
    {
     if ( min > array1[counter] ) // ����� ������������ �������� � ���������� �������
         min = array1[counter];
    }
    cout << "nmin = " << min << endl;
	//
    return 0;
}