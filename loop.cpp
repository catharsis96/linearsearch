// ����� ����� �� 1 �� 1000.
#include <iostream>
#include <clocale>
using namespace std;
int main()
{//superprog
	int i; //������� �����
	int sum = 0; //�������� ����������
	//������ ��������� �������� 1, �������� 1000 � ������ ��� ����� 1
	for(i = 1; i <= 1000; i++)
	{
		sum = sum + i;
	}
	setlocale(LC_ALL, "russian");
	cout << "����� ����� �� 1 �� 1000: " << sum;
	return 0; //
}