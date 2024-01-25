#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;

//template<typename T>
//
//void buryat(T ar[], const int SIZE) {
//	T sum = 0;
//	for (int i = 0; i < SIZE; i++) {
//		ar[i] = random(1,100);
//		cout << ar[i] << " ";
//	}
//}
//
//int main()
//{	
//	setlocale(LC_ALL, "rus");
//	int const SIZE = 10;
//	int ar1[SIZE] = { 1,2,3,4,5 };
//	double ar2[SIZE] = { 1.1,2.2,3.3,4.4,5.5 };
//	char ar3[SIZE] = { '1','2', '3', '4','5' };
//	int ar4[SIZE];
//	buryat(ar4,SIZE);
//}

int foo() {
	cout << "visvali foo - " << endl;
	foo();
	return 0;
}

int main()
{
	setlocale(LC_ALL, "rus");
	foo();
}