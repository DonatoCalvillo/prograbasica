#include <iostream>
#include <time.h>

using namespace std;

int opcion;
int maquina;



void piedra();
void papel();
void tijera();
void juego();



void main() {
	locale::global(locale("spanish"));
	juego();


	system("pause > nul");
}


void juego() {

	system("cls");

	srand(time(NULL));

	maquina = rand() % 3 + 1;

	cout << "Juego de piedra, papel o tijera." << endl;

	cout << "Que quieres jugar?" << endl;

	cout << "1. Piedra \n2. Papel \n3. Tijera" << endl;

	cin >> opcion;

	cout << endl;

	switch (maquina) {

	case 1:
		cout << "Maquina eligio piedra." << endl;
		break;

	case 2:
		cout << "Maquina eligio papel." << endl;
		break;

	case 3:
		cout << "Maquina eligio tijeras." << endl;
		break;
	}

	

	if (opcion == maquina) {
		cout << "Empate." << endl;
	}
	else {

		switch (opcion) {

		case 1:
			piedra();
			break;

		case 2:
			papel();
			break;

		case 3:
			tijera();
			break;
		}
	}

	cout << endl;

	cout << "Quieres jugar denuevo?" << endl;

	cout << "1. Si \n2. No" << endl;

	cin >> opcion;

	if (opcion == 1) {
		juego();
	}
    
}


void piedra() {

	if (opcion == 1 && maquina == 2) {
		cout << "Papel cubre piedra. \nMaquina gana! " << endl;
	}
	else {
		cout << "Piedra destruye tijeras. \nTu ganas!" << endl;
	}

}

void papel() {

	if (opcion == 2 && maquina == 1){
		cout << "Papel cubre piedra. \nTu ganas! " << endl;
	}
	else {
		cout << "Tijeras rompen papel. \nMaquina gana! " << endl;
	}


}

void tijera() {

	if (opcion == 3 && maquina == 1) {
		cout << "Piedra destruye tijeras. \nMaquina gana!" << endl;
	}
	else {
		cout << "Tijeras rompen papel. \nTu ganas! " << endl;
	}

}


  

