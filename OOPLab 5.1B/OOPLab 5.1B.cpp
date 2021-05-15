#include <iostream>
#include <Windows.h>
#include "Rational.h"

using namespace std;
int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	try 
	{
		Rational a(17, 2, 33, 4);

		++a;
		cout << a;
		cout << endl;
		--a;
		cout << a;
		a++;
		cout << a;
		a--;
		cout << a;
		cout << endl;
		cout << a.operator string();
	}
	catch (exception* a) {
		cout << a->what();
	}
	Rational b(17, 2, 33, 4);
	cin >> b;
	cout << b;
	cout << endl;
	cout << b.operator string();
	b.Dodavannya();
	cout << endl;
	b.Mnojennya();
	cout << endl;
	b.Vidnimannya();
	cout << endl;
	b.Value();
	return 0;
}