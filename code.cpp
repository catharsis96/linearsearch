#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b,res;
	char op;
	cout << "type a->" << endl;
	cin >> a;
	cout << "type b->" << endl;
	cin >> b;
	cout << "type op->" << endl;
	//op - операция (+,-,/,*)
	cin >> op;
	switch(op)
	{
	case '+': res = a+b; cout << "res = " << res << endl; break;
	case '-': res = a-b; cout << "res = " << res << endl; break;
	case '*': res = a*b; cout << "res = " << res << endl; break;
	default : cout << "Unknown oparator" << endl;
	return 0;
	}
}