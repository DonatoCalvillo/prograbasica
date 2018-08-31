#include <iostream>

using namespace std;

//YA ME SALIO EL PROGRAMA ERAN UNOS ERRORES QUE TENIA CON EL CIN 

int opcion;


void calle();
void garage();
void cocina();
void patio();
void estancia();
void sala();
void subir();
void comedor();
void baño();
void recamara();


void main() {
	locale::global(locale("spanish"));
	
	cout << "Bienvenidos al recorrido por mi casa." << endl;

	calle();

	cout << "Fin del recorrido por la casa." << endl;

	system("pause > nul");
}

void calle() {
	cout << "Estas enfrente de la casa." << endl;

	cout << "¿Quieres entrar a la casa?" << endl;

	cout << "1. Si \n2. No" << endl;

	cin >> opcion;

	if (opcion == 1) {
		garage();
	}
}

void garage() {
	cout << "Estas en el garage de la casa." << endl;

	cout << "¿Quieres entrar a la estancia?" << endl;

	cout << "1. Si \n2. No" << endl;

	cin >> opcion;

	if (opcion == 1) {
		estancia();
	}
}

void estancia() {
	
	cout << "Estas en la estancia." << endl;

	cout << "¿A donde quieres ir?" << endl;

	cout << "1. Sala \n2. Cocina \n3. Subir escaleras \n4. Quedarte ahi." << endl;

	cin >> opcion;

	switch (opcion) {
	
	case 1:
		sala();
		break;

	case 2:
		cocina();
		break;

	case 3:
		subir();
		break;

	case 4:
		main();
		break;
	}

}

void sala() {
	cout << "Estas en la sala." << endl;

	cout << "¿A donde quieres ir?" << endl;

	cout << "1. Estancia \n2. Quedarte ahi." << endl;

	cin >> opcion;

	if (opcion == 1) {
		estancia();
	}

}

void cocina() {
	cout << "Estas en la cocina." << endl;

	cout << "¿A donde quieres ir?" << endl;

	cout << "1. Estancia \n2. Patio. \n3. Comedor \n4. Quedarte ahi." << endl;

	cin >> opcion;

	switch (opcion) {

	case 1:
		estancia();
		break;

	case 2:
		patio();
		break;

	case 3:
		comedor();
		break;

	case 4:
		main();
		break;
	}
}

void patio() {
	cout << "Estas en el patio." << endl;

	cout << "¿A donde quieres ir?" << endl;

	cout << "1. Cocina \n2. Quedarte ahi." << endl;

	cin >> opcion;

	if (opcion == 1) {
		cocina();
	}

}

void subir() {
	cout << "Estas en el segundo piso." << endl;

	cout << "¿A donde quieres ir?" << endl;

	cout << "1. Baño \n2. Recamara \n3. Bajar" << endl;

	cin >> opcion;

	switch (opcion) {

	case 1:
		baño();
		break;

	case 2:
		recamara();
		break;

	case 3:
		estancia();
		break;
	}

}

void comedor() {
	cout << "Estas en la sala." << endl;

	cout << "¿A donde quieres ir?" << endl;

	cout << "1. Estancia \n2. Quedarte ahi." << endl;

	cin >> opcion;

	if (opcion == 1) {
		estancia();
	}
}


void baño() {
	cout << "Estas en en el baño." << endl;

	cout << "¿Que quieres hacer?" << endl;

	cout << "1. Salir \n2. Quedarte ahi." << endl;

	cin >> opcion;

	if (opcion == 1) {
		subir();
	}
}


void recamara() {
	cout << "Estas en la recamara." << endl;

	cout << "¿Que quieres hacer?" << endl;

	cout << "1. Salir del cuarto \n2. Quedarte ahi." << endl;

	cin >> opcion;

	if (opcion == 1) {
		subir();
	}
}