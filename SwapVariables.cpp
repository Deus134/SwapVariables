#include <iostream>
using namespace std;

void Swap(int *pVar1,int *pVar2)
{
	int temp = *pVar1;

	*pVar1 = *pVar2;
	*pVar2 = temp;
}

void main()
{
	cout << "this program swap values of variables" << endl;

	int var1, var2;

	cout << "enter first variable: ";
	cin >> var1;

	cout << "enter second variable: ";
	cin >> var2;

	cout << "\na little magic and now variable 1 are varible 2 and vice versa" << endl;
	Swap(&var1, &var2);

	cout << "\nnow first variable = " << var1
		<< "\nnow second variable = " << var2 << endl;
} 