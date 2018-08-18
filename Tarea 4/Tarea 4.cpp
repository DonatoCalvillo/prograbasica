#include <iostream>
#include <math.h>
using namespace std;

int main() {
 
	//datos requeridos
	cout << "Programa que calcula coordenadas con los datos solicitados." << endl;
	
	cout << "Escriba el radio deseado de la coordenada (x,y): ";
    float radio ;
	cin >> radio ;

	cout << "Escriba el angulo deseado de la coordenada (x,y): ";
	float alfa ;
	cin >> alfa ;

	float x;
	float y;

	//operaciones
	alfa = ((3.141592 / 180.0) * alfa) ;
	x = (radio * cos (alfa));
	y = (radio * sin (alfa));
	
	cout << "La coordenada (x,y) son: ("<< x << ", " << y << ")." << endl;
	system("pause");
}
