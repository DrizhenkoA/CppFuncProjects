#include <iostream>
using namespace std;

//cout << &a - просмотр адреса переменной a
//int* pa = &a - создание указателя для a
//cout << *pa - просмотр содержимого указателя
//cout << &pa - просмотр адреса указателя

//int main()
//{
//	int a = 2, b = 4;              //1
//	int* pa = &a;
//	int* pb = &b;
//	if (*pa > *pb) cout << *pa;
//	else {
//		cout << *pb;
//	}
//	cout << endl << endl;
//
//	int q = 2;                         //2
//	int* pq = &q;
//	if (*pa >= 0) cout << "+";
//	else {
//		cout << "-";
//	}
//	cout << endl << endl;
//
//	int c = 14, d = 28;                       //3
//	int* pc = &c;
//	int* pd = &d;
//	cout << *pc << " " << *pd << endl;
//	swap(c, d);
//	cout << *pc << " " << *pd << endl;
//	cout << endl << endl;
//
//	int i = 10, o = 5;                        //4
//	char p;
//	cout << "vvedite znak + - * /" << endl;
//	cin >> p;
//	int* pi = &i;
//	int* po = &o;
//	char* pp = &p;
//	switch (*pp) {
//	case '+':
//		cout << *pi << "+" << *po << "=" << *pi + *po;
//		break;
//	case '-':
//		cout << *pi << "-" << *po << "=" << *pi - *po;
//		break;
//	case '*':
//		cout << *pi << "*" << *po << "=" << *pi * *po;
//		break;
//	case '/':
//		cout << *pi << "/" << *po << "=" << *pi / *po;
//		break;
//	}
//	cout << endl << endl;
//
//	int* ar = new int[5] { 1, 2, 3, 4, 5 };           //5
//	int sum = 0;
//	for (int i = 0; i < 5; i++) {
//		sum += *(ar + i);
//	}
//	cout << sum;
//
//
//}

//void fill(int ar[], int size) {
//	sizeof(ar);
//	for (int i = 0; i < size; i++) {
//		ar[i] = 10 + rand() % 90;
//	}
//	cout << endl;
//}
//
//void show(int* ar, int size) {
//	cout << _msize(ar)/sizeof(ar[0]);
//	for (int i = 0; i < size; i++) {
//		cout << ar[i] << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	srand(time(NULL));
//	const int SIZE = 20;
//	int ar[SIZE];
//	fill(ar, SIZE);
//	show(ar, SIZE);
//	int size2 = 0;
//	for (int i = 0; i < SIZE; i++) {
//		if (ar[i] % 5 == 0) size2++;
//	}
//
//	int* ar2 = new int[];
//	for (int i = 0, k = 0; i < SIZE; i++) {
//		if (ar[i] % 5 == 0) ar2[k++]=ar[i];
//	}
//
//	show(ar2);
//
//}

//void fill(int ar[], int size) {
//	for (int i = 0; i < size; i++) {
//		ar[i] = 10 + rand() % 90;
//	}
//}
//
//void show(int ar[], int size) {
//	for (int i = 0; i < size; i++) {
//		cout << ar[i] << " ";
//	}
//	cout << endl;
//}
//
//float avg(int ar[], int size) {
//	float sum = 0;
//	for (int i = 0; i < size; i++) {
//		sum += ar[i];
//	}
//	return sum / size;
//}
//
//int count(int ar[], int size,float num) {
//	int counter = 0;
//	for (int i = 0; i < size; i++) {
//		if (ar[i] > num) counter++;
//	}
//	return counter;
//}
////void fillar()
//
//int main()
//{
//	srand(time(NULL));
//	const int SIZE = 20;
//	int ar[SIZE];
//	fill(ar, SIZE);
//	show(ar, SIZE);
//	float avgar1 = avg(ar, SIZE);
//	int size2 = count(ar,SIZE,avg(ar,size));
//
//	for (int i = 0; i < SIZE; i++) {
//		if (ar[i] % 5 == 0) size2++;
//	}
//
//	int* ar2 = new int[size2];
//	for (int i = 0, k = 0; i < SIZE; i++) {
//		if (ar[i] % 5 == 0) ar2[k++] = ar[i];
//	}
//	show(ar2);
//
//}

int main()
{
	srand(time(NULL));
	int ar1[5];
	int ar2[5];
	for (int i = 0; i < 5; i++) {
		ar1[i] = 10 + rand() % 99;
		cout << ar1[i] << " | ";
	}
	cout << endl << "------------------------" << endl;

	for (int i = 0; i < 5; i++) {
		ar2[i] = ar1[5-1-i];
		cout << ar2[i] << " | ";
	}
	cout << endl;

}