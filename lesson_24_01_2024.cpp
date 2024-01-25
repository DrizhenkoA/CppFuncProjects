#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;


//const int SIZE = 5;
//const int SIZE2 = 5;
//
//void anus(int ar[SIZE][SIZE2]) {
//	int a = 1;
//	for (int i = 0; i < SIZE; i++) {
//		for (int j = 0; j < SIZE2; j++) {
//			ar[i][j] = a++;
//		}
//	}
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	const int SIZE = 5;
//	const int SIZE2 = 5;
//	int ar[SIZE][SIZE2];
//	anus(ar);
//	cout << "massiv = " << endl;
//	for (int i = 0; i < SIZE; i++) {
//		for (int j = 0; j < SIZE2; j++) {
//			cout << ar[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//}

//void full(int ar[][5], const int SIZE) {
//	int SIZE2 = sizeof(ar[0]) / sizeof(ar[0][0]);
//	for (int i = 0; i < SIZE; i++) {
//		for (int j = 0; j < SIZE2; j++) {
//			ar[i][j] = random(10,99);
//		}
//	}
//}
//
//void show(int ar[][5], const int SIZE) {
//	int SIZE2 = sizeof(ar[0]) / sizeof(ar[0][0]);
//	for (int i = 0; i < SIZE; i++) {
//		for (int j = 0; j < SIZE2; j++) {
//			cout << ar[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	const int SIZE = 5;
//	const int SIZE2 = 5;
//	const int SIZE3 = 10;
//	int ar[SIZE][SIZE2];
//	int ar2[SIZE3];
//	full(ar, SIZE);
//	show(ar,SIZE);
//
//}


int caw(int a,int b, char c, char "+", char "-", char "*", char "/", ) {
	cout << "Введите число a и b - ";
	cin >> a >> b;
	cout << "Выберите действие";
	cin >> c;
	if (c != '+' && c != '-' && c != '*' && c != '/') cout << "Error";
	if (c == '+') {
		cout << a + b;
	}
	return 0;
}
int caw(int a, int b, char c, char "+", char "-", char "*", char "/", ) {
	cout << "Введите число a и b - ";
	cin >> a >> b;
	cout << "Выберите действие";
	cin >> c;
	if (c != '+' && c != '-' && c != '*' && c != '/') cout << "Error";
	if (c == '-') {
		cout << a - b;
	}
	return 0;
}
int caw(int a, int b, char c, char "+", char "-", char "*", char "/", ) {
	cout << "Введите число a и b - ";
	cin >> a >> b;
	cout << "Выберите действие";
	cin >> c;
	if (c != '+' && c != '-' && c != '*' && c != '/') cout << "Error";
	if (c == '*') {
		cout << a * b;
	}
	return 0;
}
int caw(int a, int b, char c, char "+", char "-", char "*", char "/", ) {
	cout << "Введите число a и b - ";
	cin >> a >> b;
	cout << "Выберите действие";
	cin >> c;
	if (c != '+' && c != '-' && c != '*' && c != '/') cout << "Error";
	if (c == '/') {
		cout << a / b;
	}
	return 0;
}


int main()
{
	setlocale(LC_ALL, "rus");
	int a, b;
	char c;
	caw(a, b, c);

}