#include <iostream>
using namespace std;

int main() {
	cout << "Escriba su nombre" << endl;
	 char nombre[20];
	 cin >> nombre ; 
	cout << "Escriba su apellido" << endl;
	 char apellido[20];
	 cin >> apellido;
	cout << "Escriba su edad" << endl;
	 int edad;
	 cin >> edad;
	cout << "Escriba su numero de telefono" << endl;
	 char telefono[12];
	 cin >> telefono;
	cout << endl;
	cout << "Nombre: " << apellido << ", " << nombre << endl;
	cout << "--------------------------------" << endl;
	cout << "Edad: " << edad << " anios. " << endl;
	cout << "Telefono: +52 " << telefono << endl;
	system("pause");
	return 0;
}