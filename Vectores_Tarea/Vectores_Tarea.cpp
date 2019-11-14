#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x, tabla[10];
	int suma, resta, mult, division;

	for (x = 0; x < 10; x++)
	{
		cout << "------------------------------" << endl;
		cout << "Introduce un numero: ";
		cin >> tabla[x];
	}

	suma = tabla[0];
	resta = tabla[0];
	mult = tabla[0];
	division = tabla[0];

	for (x = 1; x < 10; x++)
	{
		suma = suma + tabla[x];
		resta = resta - tabla[x];
		mult = mult * tabla[x];
		division = division / tabla[x];
	}

	cout << "La suma es: " << suma << endl;
	cout << "------------------------------" << endl;
	cout << "La resta es: " << resta << endl;
	cout << "------------------------------" << endl;
	cout << " La multiplicacion es: " << mult << endl;
	cout << "------------------------------" << endl;
	cout << "La division es: " << division << endl;

	system("pause");
	return 0;
}