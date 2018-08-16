#include <iostream>
using namespace std;

int main() {
	cout << "Programa que calcula el angulo Alfa de un poligono regular con el numero de lados deseado." << endl;
	
	cout << "Escriba el numero de lados del poligono regular deseado: " ;
	int Lados;
	cin >> Lados ;
	// Formula del angulo
	int Alfa;
	Alfa = (180 * (Lados - 2)) / Lados;

	cout << "El angulo Alfa de tu poligono es: " << Alfa << " grados." << endl;

	system("pause");
}

