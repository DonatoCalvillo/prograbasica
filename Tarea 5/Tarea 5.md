# Tarea 5

### Preguntas

#### 1.-Error en salida, 
#### 2.-Ningun error, salida: Hola Mundo
#### 3.-Sin salida y error, el caracter escrito ocupa mas espacio del que esta definido 
#### 4.-Error en salida, el caracter ocupa mas espacio del definido, si se le quita el espacio del principio si jala
#### 5.-Ningun error, salida: a = 8 b = 24
#### 6.-Ningun error, salida: 15
#### 7.-Ningun error, salida: a = 6 b = 6
#### 8.-Ningun error, salida: 1
#### 9.-Ningun error, salida: 0
#### 10.-Ningun error, salida: mo

# Programa

 ```
 #include <iostream> 
 #include<stdlib.h>
 #include<time.h>

 using namespace std;

 void main() {
	cout << "Escriba nombre de jugador 1" << endl;
	char jugador1[20];
	cin >> jugador1;
	
	cout << "Escriba nombre de jugador 2" << endl;
	char jugador2[20];
	cin >> jugador2;

	srand(time(NULL));


	int Numero1;
	Numero1 = rand ()  % 6;

	int Numero2;
	Numero2 = rand()  %  6;

	cout << jugador1 << " su numero es: " << Numero1 << endl;
	cout << jugador2 << " su numero es: " << Numero2 << endl;

	if (Numero1 > Numero2) {
		cout << "Felicidades " << jugador1 << " ganaste." << endl;
	}

	else if (Numero2 > Numero1){
		cout << "Felicidades " << jugador2 << " ganaste." << endl;


	}
	else if (Numero2 == Numero1) {
		cout << "Empate." << endl;

	}
	
	
	system("pause");
```
