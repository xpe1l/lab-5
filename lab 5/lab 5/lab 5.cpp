//вказівники і динамічний розподіл пам'яті

#include <iostream>
using namespace std;
int main() {
 
	float *ptrarray = new float[10];
	for (int i = 0; i < 10; i++)
		ptrarray[i] = rand() % 100 + 1;
	for (int i = 0; i < 10; i++)
		cout << ptrarray[i] << " ";
	delete[] ptrarray;

	return 0;
}