#include <iostream>
#include <string>


using namespace std;

int opcion;
int c=0; // contador

struct persona { 
	string nombre;
	string apellidoP;
	string apellidoM;
	string telefono;
	string correo;
	int matricula;
	int calificacion1;
	int calificacion2;
	int calificacion3;
	string calle;
	string colonia;
	int numCasa;


};

persona p[100];

void ListaAlum();
void AltaAlum();
void AltaCalif();
void GuardarTxt();
void Manual();

void main() {
	system("cls");
	locale::global(locale("spanish"));

	cout << "Beinvenido al menu principal." << endl;

	cout << "¿Que desea hacer?" << endl;

	cout << "1. Ir a la lista de alumnos y calificaciones. \n2. Dar de alta alumnos. \n3. Dar de alta calificaciones. \n4. Guardar el archivo de texto \n5. Ir al manual del usuario. \n6. Salir. " << endl;
	
	cin >> opcion;

	switch (opcion) {

	case 1:
		ListaAlum();
		break;

	case 2:
		AltaAlum();
		break;

	case 3:
		AltaCalif();
		break;

	case 4:
		GuardarTxt();
		break;

	case 5:
		Manual();
		break;

	default:
		break;

	}
  

}

void ListaAlum() {
	system("cls");
	
	cout << "Se encuentra en la lista de alumnos." << endl << endl;

	cout << "------------ ALUMNOS -------------" << endl<< endl;

	for (int i = 0; i < c; i++)
	{
		cout << p[i].apellidoP << " " << p[i].apellidoM << " " << p[i].nombre << endl;
		cout << "----------------------------------" << endl;
	}

	cout << "1. Salir" << endl;
	
	cin >> opcion;

	if (opcion == 1){
		 main();
	}

	
}

void AltaAlum() {

	system("cls");

	cin.ignore();
	
	cout << "Aqui puede	dar de alta a los alumos." << endl; 

	cout << "\nNombre(s): ";

	getline(cin, p[c].nombre);

	cout << "\nApellido paterno: ";

	getline(cin, p[c].apellidoP);

	cout << "\nApellido materno: ";

	getline(cin, p[c].apellidoM);
         
	c++;

	main();
	

}

void AltaCalif() {

	system("cls");
	
	cout << "Aqui puede dar de alta las calificaciones." << endl;

	cout << "1. Salir" << endl;

	cin >> opcion;

	

}

void GuardarTxt() {
	system("cls");
	
	cout << "Aqui puede guardar la informacion en un documento de texto." << endl;

	cout << "1. Salir" << endl;

	cin >> opcion;

	if (opcion == 1) {
	   main();
	}
}

void Manual() {
	system("cls");
	
	cout << "Se encuentra en el manual." << endl;

	cout << "1. Salir" << endl;

	cin >> opcion;

	if (opcion == 1) {
		main();
	}
}