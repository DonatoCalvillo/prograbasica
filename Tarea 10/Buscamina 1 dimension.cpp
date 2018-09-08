#include <iostream>
#include <time.h>

using namespace std;

int main() {
	char minas[20] = {};

	srand(time(NULL));

	for (int i = 0; i < 20; i++) {
		if (0 == rand() % 5) {
			minas[i] = true;

		}
	}

	for (int i = 0; i < 20; i++) {
		if (minas[i] == true) {
			cout << "[x]";

		}
		else{
		   int m = 0;
		   if (minas[i - 1] == true) {
			   m = m + 1;
		   }
		   if (minas[i + 1] == true) {
			   m = m + 1;
		   }
		   cout << "[" << m << "]";
		}
		
	}


	system("pause > nul");
}