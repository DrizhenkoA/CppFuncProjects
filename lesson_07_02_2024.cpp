#include <iostream>
using namespace std;
#define random(min,max) (min + rand() % (max - min + 1))
//template <typename T>

void fillArr(int** arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0, k = 1; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			arr[i][j] = k++;
		}
	}
}

void showArr(int** arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void addDoubleArr(int**& arr, int* newarr) {
	//колво рядов в двумерном массиве
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(newarr) / sizeof(newarr[0]);
	//создаем копию массива
	int* newarrcopy = new int[size2];
	for (int i = 0; i < size2; i++) {
		newarrcopy[i] = newarr[i];
	}
	//создаем двумерный массив размером size + 1
	int** buf = new int* [size + 1];
	//копируем все элементы из старого массива в новый
	for (int i = 0; i < size; i++) {
		buf[i] = arr[i];
	}
	//в последнюю ячейку нового массива добавляем сделанную раннее копию(строка 29)
	buf[size] = newarrcopy;
	delete[] arr;
	arr = buf;
}

void addElementIndex(int** &arr, int* newarr, int index) {
	int size = _msize(arr) / sizeof(arr[0]);
	if (index < 0 || index > size - 1) {
		cout << "------------" << endl;
		return;
	}
	int size2 = _msize(newarr) / sizeof(newarr[0]);
	int* newarrcopy2 = new int[size2];
	for (int i = 0; i < size2; i++) {
		newarrcopy2[i] = newarr[i];
	}
	int** buf = new int* [size + 1];
	for (int i = 0; i < index; i++) {
		buf[i] = arr[i];
	}
	buf[index] = newarrcopy2;
	for (int i = index; i < size; i++) {
		buf[i+1] = arr[i];
	}
	delete[] arr;
	arr = buf;

}

int main()
{
	int row = 5;
	int column = 5;
	int** arr = new int* [row];

	for (int i = 0; i < row; i++) {
		arr[i] = new int[column];
	}
	for (int i = 0, k = 0; i < row; i++) {             //заполнение массива
		for (int j = 0; j < column; j++) {
			k++;
			arr[i][j] = k;
		}
	}
	for (int i = 0; i < row; i++) {               //вывод массива
		for (int j = 0; j < column; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << endl;
	fillArr(arr);
	//showArr(arr);

	int* newarr = new int[column] {26,27,28,29,30};
	addDoubleArr(arr, newarr);
	showArr(arr);
	addElementIndex(arr,newarr, 4);
	cout << endl;
	showArr(arr);
}
