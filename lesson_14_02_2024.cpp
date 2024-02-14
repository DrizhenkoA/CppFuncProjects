#include <iostream>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
//template <typename T>

//void show(int** arr) {
//	int size = _msize(arr) / sizeof(arr[0]);
//	int size2;
//	for (int i = 0; i < size; i++) {
//		size2 = _msize(arr[i]) / sizeof(arr[i][0]);
//		for (int j = 0; j < size2; j++) {
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//void indexRowDelete(int**& arr,int row,int column) {
//	//int size = _msize(arr) / sizeof(arr[0]);
//	int size2 = _msize(arr[row]) / sizeof(arr[row][0]);
//	int* buf = new int[size2-1];
//	for (int i = 0; i < column; i++) {
//		buf[i] = arr[row][i];
//	}
//	for (int i = column; i < size2; i++) {
//		buf[i] = arr[row][i+1];
//	}
//	delete[] arr[row];
//	arr[row] = buf;
//
//}
//
//
//int main()                                            //удаление элемента по индексу в массиве по индексу ряда
//{
//	setlocale(LC_ALL, "rus");
//	int row = 3;
//	int column = 3;
//	int** arr = new int* [row];
//
//	for (int i = 0; i < row; i++) {
//		arr[i] = new int[column];
//	}
//	for (int i = 0, k = 0; i < row; i++) {
//		for (int j = 0; j < column; j++) {
//			k++;
//			arr[i][j] = k;
//		}
//	}
//	//for (int i = 0; i < row; i++) {                             //вывод
//	//	for (int j = 0; j < column; j++) {
//	//		cout << arr[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	cout << endl;
//	show(arr);
//	cout << endl;
//	indexRowDelete(arr,1,1);
//	show(arr);
//
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void show(int** arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		int size2 = _msize(arr[i]) / sizeof(arr[i][0]);
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void deleteArrValue(int**& arr, int num) {
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int index1 = -1;
	int index2 = -1;
	

	for (int i = 0, flag = 0; i < size; i++) {
		for (int j = 0; j < size2; j++) {
			if (arr[i][j] == num) {
				index1 = i;
				index2 = j;
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
	}


	if (index1 != -1 && index2 != -1) {
		int* buf = new int[size2 - 1];
		for (int i = 0; i < index2; i++) {
			buf[i] = arr[index1][i];
		}
		for (int i = index2; i < size2; i++) {
			buf[i] = arr[index1][i + 1];
		}
		delete[] arr[index1];
		arr[index1] = buf;
	}

}

int main()                                    //удаление элемента в массиве по значению (функция проходит по массиву, ищет значение и удаляет если есть, иначе - ошибка
{
	setlocale(LC_ALL, "rus");
	int row = 3;
	int column = 3;
	int** arr = new int* [row];

	for (int i = 0; i < row; i++) {
		arr[i] = new int[column];
	}
	for (int i = 0, k = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			k++;
			arr[i][j] = k;
		}
	}
	//for (int i = 0; i < row; i++) {                             //вывод
	//	for (int j = 0; j < column; j++) {
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	cout << endl;
	show(arr);
	cout << endl;
	deleteArrValue(arr, 8);
	deleteArrValue(arr, 7);
	show(arr);

}
