// Escribe un programa que solicite al usuario
// dos n�meros enteros e indique
// si el primer n�mero es mayor (o no) que el segundo

#include <iostream>
using namespace std;

int main() {

	int numero1, numero2;

	cout << "Introduce el primer n�mero entero: ";
	cin >> numero1;

	cout << "Introduce el segundo n�mero entero: ";
	cin >> numero2;

	if (numero1 > numero2)
		cout << "El primer n�mero es mayor que el segundo." << endl;
	else
		cout << "El primer n�mero NO es mayor que el segundo." << endl;

	return 0;
}