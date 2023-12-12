

#include <iostream>
using namespace std;
//int main()
//{
//	srand(time(NULL));
//	int a = 0;
//	int array2[10][5] = { { } };
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 5; j++) {
//			a = 10 + rand() % 99+1-10;
//			array2[i][j] = a;
//			cout << array2[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "-------------------";      //создание двумерного массива 10х5
//	cout << endl;
//	int array1[50];
//	int count = 0;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (array2[i][j] % 2 == 0); {
//				array1[count++]==array2[i][j];
//			}
//		}
//	}
//	for (int i = 0; i < count; i++) {
//		cout << array1[i] << " ";
//	}
//	cout << " - #2" << endl;
//	cout << "-------------------";      //создание массива, который содержит только четные числа первого массива
//	cout << endl;
//	int summ = 0;
//	int arrsumm[10];
//
//	for (int i = 0,k=0; i < 10; i++) {
//		summ = 0;
//		for (int j = 0; j < 5; j++) {
//			summ += array2[i][j];
//		}
//		arrsumm[k++] = summ;
//		cout << arrsumm[k-1] << " ";
//	}
//	cout << " - #3" << endl;
//	cout << "-------------------";      //сумма элементов по строкам
//	cout << endl;
//	int arrlexa[50];
//	int arifm = 0;
//	int z = 0;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 5; j++) {
//			arifm += array2[i][j];
//		}
//	}
//	arifm = arifm / 50;
//	cout << arifm << " - arifm" << endl;
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (array2[i][j] > arifm) arrlexa[z++] = array2[i][j];
//		}
//	}
//	for (int i = 0; i < z; i++) {
//		cout << arrlexa[i] << " ";
//	}
//	cout << " - #4" << endl;
//	cout << "-------------------";      //среднее арифметич
//	cout << endl;
//
//	int arunik[50];
//	int arresult[50];
//	for (int i = 0, k = 0; i < 10; i++) {
//		for (int j = 0; j < 5; j++) {
//			arunik[k++] = array2[i][j];
//		}
//	}
//
//	for (int i = 0,flag,k=0; i < 50; i++) {
//		flag = true;
//		for (int j = i + 1; j < 50; j++) {
//			if (arunik[j] == arunik[i]) {
//				flag = false;
//				break;
//			}
//		}
//		if (flag) {
//			for (int j = 0; j < i; j++) {
//				if (arunik[j] == arunik[i]) {
//					flag = false;
//					break;
//				}
//			}
//			if (flag) arresult[k++] = arunik[i];
//		}
//	}
//	for (int i = 0; i < 50; i++) {
//		cout << arresult[i] << " ";
//	}
//	cout << " - #5" << endl;
//	cout << "-------------------";      //уникальные значения
//
//}

//int main()
//{
//	srand(time(NULL));
//	int array[3][4] = { {3,7,1,4 }, {5,6,2,3}, {9,5,2,1} };     //замена по координатам
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << array[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "- natural array" << endl;
//	const int COUNT = 5;
//	int cord[COUNT][2];
//	int values[COUNT];
//	for (int i = 0; i < COUNT; i++) {
//		cord[i][0] = rand() % 5;
//		cord[i][1] = rand() % 10;
//		cout << cord[i][0] << ":" << cord[i][1] << endl;
//		values[i] = 1 + rand() % 9;
//	}
//	cout << endl;
//	for (int i = 0; i < COUNT; i++) {
//		cout << values[i] << " ";
//	}
//	for (int i = 0; i < COUNT; i++) {
//		array[cord[i][0]][cord[i][1]] = values[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			cout << cord[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

//int main()
//{
//	srand(time(NULL));
//	int array[3][4] = { {3,7,1,4 }, {5,6,2,3}, {9,5,2,1} };     //массив но числа + след числа
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << array[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << "- natural array" << endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4-1; j++) {
//			array[i][j] += array[i][j+1];
//		}
//		cout << endl;
//	}
//	cout << endl;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << array[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

int main()
{
	srand(time(NULL));
	int array[3][4] = { {3,7,1,4 }, {5,6,2,3}, {9,5,2,1} };     //
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	cout << "- natural array" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4 - 1; j++) {
			array[i][j] += array[i][j + 1];
			array[i][4 - 1] += array[i][0];
		}
		cout << endl;
	}

	cout << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

}
