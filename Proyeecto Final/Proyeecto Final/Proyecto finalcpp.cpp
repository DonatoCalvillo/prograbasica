#include <iostream>
#include <string>
#include <fstream>


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
void Modificar();


void main() {
	system("cls");
	locale::global(locale("spanish"));

	string l;
	
	ifstream archivo("Alumnos.txt");

	

	cout << "Beinvenido al menu principal." << endl;

	cout << "¿Que desea hacer?" << endl;

	cout << "1. Ir a la lista de alumnos y calificaciones. \n2. Dar de alta alumnos. \n3. Buscar. \n4. Guardar el archivo de texto. \n5. Ir al manual del usuario. \n6. Modificar datos. \n7. Salir. " << endl;
	
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

	case 6:
		Modificar();
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

	cin.ignore();

	cout << "Escriba UNICAMENTE el nombre del alumno que desea buscar: ";

	string n;
	
	getline(cin, n);

	bool encontrado = false;

	int i = 0;

	while (i < c)
	{
		if (strcmp(n.c_str(), p[i].nombre.c_str()) == 0) { 

			cout << "Lo encontré: " << endl;

			cout << p[i].apellidoP << " " << p[i].apellidoM << " " << p[i].nombre << " Matricula: " << p[i].matricula << endl;

			cout << "Calle: " << p[i].calle << " " << p[i].numCasa << ", " << p[i].colonia << endl;

			cout << "Correo: " << p[i].correo << " Telefono:" << p[i].telefono << endl;

			cout << "Calificacion 1: " << p[i].calificacion1 << " Calificacion 2: " << p[i].calificacion2 << " Calificacion 3: " << p[i].calificacion3 << endl << endl;
			
			encontrado = true;

			break; 
		}
		i++;
	}

	if (!encontrado) {
		cout << "No había registros con ese nombre" << endl;
	}


	cout << "1. Eliminar Alumno" << endl << "2. Salir";

	cin >> opcion;

	if (opcion == 1) {
		
		system("cls");

		for (i = i; i < c; i++) {
			p[i].apellidoM = p[i + 1].apellidoM;
			p[i].apellidoP = p[i + 1].apellidoP;
			p[i].nombre = p[i + 1].nombre;
			p[i].matricula = p[i + 1].matricula;
			p[i].correo = p[i + 1].correo;
			p[i].telefono = p[i + 1].telefono;
			p[i].calle = p[i + 1].calle;
			p[i].numCasa = p[i + 1].numCasa;
			p[i].calificacion1 = p[i + 1].calificacion1;
			p[i].calificacion2 = p[i + 1].calificacion2;
			p[i].calificacion3 = p[i + 1].calificacion3;
		}

		c--;

		cout << "El alumno ha sido eliminado con exito.";

		system("pause >> nul");

	}
	
	main();
	
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
		

		i++;
	}

	if (!encontrado) {
		cout << "No había registros con esa matricula." << endl;
	}
	
	

	cout << "1. Eliminar Alumno" << endl << "2. Salir";

	cin >> opcion;

	if (opcion == 1) {
		system("cls");

		for (i = i; i < c; i++) {
			p[i].apellidoM = p[i + 1].apellidoM;
			p[i].apellidoP = p[i + 1].apellidoP;
			p[i].nombre = p[i + 1].nombre;
			p[i].matricula = p[i + 1].matricula;
			p[i].correo = p[i + 1].correo;
			p[i].telefono = p[i + 1].telefono;
			p[i].calle = p[i + 1].calle;
			p[i].numCasa = p[i + 1].numCasa;
			p[i].calificacion1 = p[i + 1].calificacion1;
			p[i].calificacion2 = p[i + 1].calificacion2;
			p[i].calificacion3 = p[i + 1].calificacion3;
		}

		c--;

		cout << "El alumno ha sido eliminado con exito.";

		system("pause >> nul");

	}
	
	main();
	
}

void Modificar() {
	
	system("cls");

	bool encontrado = false;

	cout << "Escriba la matricula que desea modificar la informacion: ";

	cin >> opcion;

	for (int j = 0; j < c; j++)
	{
		if (opcion == p[j].matricula)
		{
			encontrado = true;
			int i = 0;

			while (i < c)
			{
				if (p[i].matricula == opcion) {

					cout << "Encontre a: " << endl;

					cout << endl;

					cout << p[i].apellidoP << " " << p[i].apellidoM << " " << p[i].nombre << " Matricula: " << p[i].matricula << endl;

					cout << "Calle: " << p[i].calle << " " << p[i].numCasa << ", " << p[i].colonia << endl;

					cout << "Correo: " << p[i].correo << " Telefono:" << p[i].telefono << endl;

					cout << "Calificacion 1: " << p[i].calificacion1 << " Calificacion 2: " << p[i].calificacion2 << " Calificacion 3: " << p[i].calificacion3 << endl << endl;

					cout << "\n¿Qué deseas modificar?" << endl;

					cout << "1. Nombre \n2. Apellidos \n3. Matricula \n4. Direccion  \n5. Correo \n6. Telefono \n7. Calificaciones " << endl;

					cin >> opcion;


					system("cls");


					switch (opcion)
					{
					case 1:

						cin.ignore();

						cout << "Ingresa el nuevo nombre: ";

						getline(cin, p[i].nombre);

						break;

					case 2:

						cin.ignore();

						cout << "Desea modificar apellido: " << endl;

						cout << "1.Paterno \n2. Materno" << endl;

						cin >> opcion;

						system("cls");

						if (opcion == 1)
						{
							cin.ignore();

							cout << "Ingresa el nuevo apellido paterno: ";

							getline(cin, p[i].apellidoP);


						}
						else
						{
							cin.ignore();

							cout << "Ingresa el nuevo apellido materno: ";

							getline(cin, p[i].apellidoM);
						}

						break;

					case 3:

						cout << "Ingresa la nueva matricula: ";

						cin >> p[i].matricula;

						break;

					case 4:

						cin.ignore();

						cout << "Dato a modificar: " << endl;

						cout << "1.Calle \n2. Numero de casa \n3. Colonia" << endl;

						cin >> opcion;

						system("cls");

						if (opcion == 1) {

							cin.ignore();

							cout << "Ingresar nueva calle: " << endl;

							getline(cin, p[i].calle);

						}
						else if (opcion == 2) {

							cout << "Ingresar nuevo numero de casa: " << endl;

							cin >> p[i].numCasa;

						}
						else {

							cin.ignore();

							cout << "Ingresar nueva colonia: " << endl;

							getline(cin, p[i].colonia);
						}

						break;

					case 5:
						cin.ignore();

						cout << "Ingresa el nuevo correo: ";

						getline(cin, p[i].correo);

						break;

					case 6:

						cin.ignore();

						cout << "Ingresa el nuevo numero de telefono: ";

						getline(cin, p[i].telefono);

						break;

					case 7:

						cout << "Numero de calificacion a modificar: " << endl;

						cin >> opcion;

						system("cls");

						if (opcion == 1)
						{
							cout << "Ingresa la nueva calificacion 1: ";

							cin >> p[i].calificacion1;

						}
						else if (opcion == 2) {
							cout << "Ingresa la nueva calificacion 2: ";

							cin >> p[i].calificacion2;
						}
						else {
							cout << "Ingresa la nueva calificacion 3: ";

							cin >> p[i].calificacion3;
						}



					default:
						break;
					}

				}


				i++;

			}

		}
	}

	if (!encontrado) {
		cout << "No había registros con esa matricula." << endl;
	}

	

	

	cout << "1. Salir" << endl;

	cin >> opcion;

	if (opcion == 1) {
		main();
	}
}

void save() {

	ofstream archivo;
	archivo.open("Alumnos.txt");

	archivo << "Lista de Alumnos: " << endl;
	cout << endl;

	for (int i = 1; i < c; i++) {

		archivo << p[i].matricula << "  " << p[i].apellidoP << " " << p[i].apellidoM << " " << p[i].nombre << "  " <<
			p[i].correo << "  " << p[i].telefono << "  " << p[i].numCasa << " " <<
			p[i].calle << "  " << " " << p[i].colonia << p[i].calificacion1 << "  " << p[i].calificacion2 << "  " <<
			p[i].calificacion3 << "  " << endl;
	}

	archivo.close();

	
}
