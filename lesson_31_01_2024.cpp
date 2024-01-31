#include <iostream>
using namespace std;

//template <typename T>													//создание динамического массива, можно добавлять элементы
//void showArr(T* arr) {
//	int size = _msize(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//template <typename T>
//void addElement(T* &arr, T num) {
//	int size = _msize(arr) / sizeof(arr[0]);
//	T* arr2 = new T[size + 1];
//	for (int i = 0; i < size; i++) {
//		arr2[i] = arr[i];
//	}
//	arr2[size] = num;
//	delete[] arr;
//	arr = arr2;
//
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	srand(time(NULL));
//	int* arr = new int[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	showArr(arr);
//	addElement(arr, 12);
//	showArr(arr);																			
//}

//template <typename T>											//добавление элемента по индексу
//void showArr(T* arr) {
//	int size = _msize(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//template <typename T>
//void addElementIndex(T*& arr, T index,T num) {
//	int size = _msize(arr) / sizeof(arr[0]);
//	int* buf = new int[size + 1];
//	for (int i = 0; i < index; i++) {
//		buf[i] = arr[i];
//	}
//	buf[index] = num;
//	for (int i = index; i < size; i++) {
//		buf[i + 1] = arr[i];
//	}
//	delete[] arr;
//	arr = buf;
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	srand(time(NULL));
//	int* arr = new int[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	showArr(arr);
//	addElementIndex(arr, 3, 9);
//	showArr(arr);
//}


//template <typename T>											//удаление элемента по индексу
//void showArr(T* arr) {
//	int size = _msize(arr) / sizeof(arr[0]);
//	for (int i = 0; i < size; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//template <typename T>
//void DeleteElementIndex(T*& arr, T index) {
//	int size = _msize(arr) / sizeof(arr[0]);
//	if (index < 0 || index > size - 1) {
//		cout << "u cant delete that element" << endl;
//		return;
//	}
//	else {
//		int* buf = new T[size - 1];
//		for (int i = 0; i < index; i++) {
//			buf[i] = arr[i];
//		}
//		for(int i = index+1; i < size; i++) {
//			buf[i-1] = arr[i];
//		}
//		delete[] arr;
//		arr = buf;
//	}
//
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	srand(time(NULL));
//	int* arr = new int[10]{ 1,2,3,4,5,6,7,8,9,10 };
//	showArr(arr);
//	DeleteElementIndex(arr, 3);
//	showArr(arr);
//}

template <typename T>											//удаление элемента по значению
void showArr(T* arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

template <typename T>
void DeleteElementIndex(T*& arr, T index) {
	int size = _msize(arr) / sizeof(arr[0]);
	if (index < 0 || index > size - 1) {
		cout << "u cant delete that element" << endl;
		return;
	}
	else {
		int* buf = new T[size - 1];
		for (int i = 0; i < index; i++) {
			buf[i] = arr[i];
		}
		for(int i = index+1; i < size; i++) {
			buf[i-1] = arr[i];
		}
		delete[] arr;
		arr = buf;
	}

}

template <typename T>
void DeleteElementValue(T*& arr, T value) {
	int size = _msize(arr) / sizeof(arr[0]);
	T index = -1;
	for(int i = 0; i < size; i++) {
		if (arr[i] == value) {
			index = i;
			break;
		}
	}
	if(index == -1) {
		cout << "вышли за границы" << endl;
		return;
	}
	else {
		DeleteElementIndex(arr, value);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int* arr = new int[10]{ 1,2,3,4,5,6,7,8,9,10 };
	cout << "До - " << endl;
	showArr(arr);
	cout << "После - " << endl;
	DeleteElementValue(arr, 5);
	showArr(arr);
}