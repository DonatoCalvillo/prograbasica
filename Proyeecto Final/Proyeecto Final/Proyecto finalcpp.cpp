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
void GuardarTxt();
void Manual();
void Buscar();
void BuscarNombre();
void BuscarMatricula();

void main() {
	system("cls");
	locale::global(locale("spanish"));

	cout << "Beinvenido al menu principal." << endl;

	cout << "¿Que desea hacer?" << endl;

	cout << "1. Ir a la lista de alumnos y calificaciones. \n2. Dar de alta alumnos. \n3. Buscar \n4. Guardar el archivo de texto. \n5. Ir al manual del usuario \n6. Salir. " << endl;
	
	cin >> opcion;

	switch (opcion) {

	case 1:
		ListaAlum();
		break;

	case 2:
		AltaAlum();
		break;

	case 3:
		Buscar();
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

	cout << "-------------------------- ALUMNOS --------------------------"  << endl;

	for (int i = 0; i < c; i++)
	{
		cout << endl;

		cout << p[i].apellidoP << " " << p[i].apellidoM << " " << p[i].nombre << " Matricula: " << p[i].matricula << endl;

		cout << "Calle: " << p[i].calle << " " << p[i].numCasa << ", " << p[i].colonia << endl;

		cout << "Correo: " << p[i].correo << " Telefono:" << p[i].telefono  << endl;

		cout << "Calificacion 1: " << p[i].calificacion1 << " Calificacion 2: " << p[i].calificacion2 << " Calificacion 3: " << p[i].calificacion3 << endl << endl;

		cout << "-----------------------------------------------------------" << endl;
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

	cout << "\nMatricula: ";

	cin >> p[c].matricula;

	cin.ignore();

	cout << "\nNombre de la calle: ";

	getline(cin, p[c].calle);

	cout << "\nNumero de casa: ";

	cin >> p[c].numCasa;

	cin.ignore();

	cout << "\nColonia: ";

	getline(cin, p[c].colonia);

	cout << "\nCorreo: ";

	getline(cin, p[c].correo);

	cout << "\nTelefono: ";

	cin >> p[c].telefono;

	cout << "\nCalificacion 1: ";

	cin >> p[c].calificacion1;

	cout << "\nCalificacion 2: ";

	cin >> p[c].calificacion2;

	cout << "\nCalificacion 3: ";

	cin >> p[c].calificacion3;

    c++;

	main();
	

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


void Buscar() {
	system("cls");

	cout << "Se encuentra en el buscador." << endl;

	cout << "Desea buscar por:" << endl;

	cout << "1.Nombre \n2.Matricula" << endl;

	cin >> opcion;

	switch (opcion)
	{
	case 1:

		 BuscarNombre();
		 break;

	case 2:

		BuscarMatricula();
		break;

	default:
		break;
	}
}

void BuscarNombre() {
	system("cls");

	cout << "Escriba el nombre del alumno que desea buscar: ";

	cout << "1. Salir" << endl;

	cin >> opcion;

	if (opcion == 1) {
		main();
	}
}

void BuscarMatricula() {
	system("cls");

	cout << "Escriba la matricula del alumno que desea buscar: ";

	cin >> opcion;

	int i = 0;

	bool encontrado = false;

	while (i < c)
	{
		if (opcion == p[i].matricula) {

			cout << "Lo encontre: " << endl << endl;

			cout << p[i].apellidoP << " " << p[i].apellidoM << " " << p[i].nombre << " Matricula: " << p[i].matricula << endl;

			cout << "Calle: " << p[i].calle << " " << p[i].numCasa << ", " << p[i].colonia << endl;

			cout << "Correo: " << p[i].correo << " Telefono:" << p[i].telefono << endl;

			cout << "Calificacion 1: " << p[i].calificacion1 << " Calificacion 2: " << p[i].calificacion2 << " Calificacion 3: " << p[i].calificacion3 << endl << endl;

			encontrado = true;

			break;

		}
		if (!encontrado) {
			cout << "No había registros con esa matricula." << endl;
		}

		i++;
	}

	

	cout << "1. Salir" << endl;

	cin >> opcion;

	if (opcion == 1) {
		main();
	}
}
