#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int x, tabla[10];
	int suma, resta, mult, division;
	for (x = 0; x < 10; x++)
	{
		cout << "---------------------------" << endl;
		cout << "| Introduce un numero: ";
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
		division = tabla[x] + tabla[x] / 10;
	}
	cout << "------------------------------------------------" << endl;
	cout << "L a   s u m a   e s: " << suma << endl;
	cout << "------------------------------------------------" << endl;
	cout << "L a   r e s t a   e s: " << resta << endl;
	cout << "------------------------------------------------" << endl;
	cout << " L a   m u l t i p l i c a c i o n   e s: " << mult << endl;
	cout << "------------------------------------------------" << endl;
	cout << "L a   d i v i s i o n   e s: " << division << endl;
	system("pause");
	return 0;
}
