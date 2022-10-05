// Escribe un programa que solicite al usuario
// dos números enteros e indique
// si el primer número es mayor (o no) que el segundo

#include <iostream>
using namespace std;

int main() {

	int numero1, numero2;

	cout << "Introduce el primer número entero: ";
	cin >> numero1;

	cout << "Introduce el segundo número entero: ";
	cin >> numero2;

	if (numero1 > numero2)
		cout << "El primer número es mayor que el segundo." << endl;
	else
		cout << "El primer número NO es mayor que el segundo." << endl;

	return 0;
}