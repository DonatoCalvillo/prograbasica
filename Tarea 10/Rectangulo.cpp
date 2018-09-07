#include <iostream>
using namespace std;

int main() {
	int base;
	int altura;

	cout << "Base:" << endl;
	cin >> base;

	cout << "Altura:" << endl;
	cin >> altura;

	for (int i = 0; i < altura; i++) {
		for (int j = 0; j < base; j++) {
			if ((i == 0) || (j == 0) || (j == base - 1) || (i == altura-1)) {
				cout << "* ";
			}
			else {
					cout << "  ";
				
			}
		}
		cout << endl;
	}

	system("pause > nul");
}