#include <iostream>
using namespace std;
#define random(min,max) (min + rand() % (max - min + 1))
//template <typename T>

//void fillArray(int* arr) {
//    int size = _msize(arr) / sizeof(arr[0]);
//    for (int i = 0; i < size; i++) {
//        arr[i] = random(0, 9);
//    }
//}
//void showArray(int* arr) {
//    int size = _msize(arr) / sizeof(arr[0]);
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//void quickSortRecursive(int* arr, int left, int right) {
//    if (left >= right) return;
//    int wall = left - 1;
//    for (int i = left; i <= right; i++) {
//        if (arr[i] <= arr[right]) {
//            ++wall;
//            if (i > wall) {
//                swap(arr[i], arr[wall]);
//            }
//        }
//    }
//    quickSortRecursive(arr, left, wall - 1);  //left
//    quickSortRecursive(arr, wall + 1, right);  //right
//}
//
//void quickSort(int* arr) {
//    int size = _msize(arr) / sizeof(arr[0]);
//    quickSortRecursive(arr, 0, size - 1);
//}
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//    srand(time(NULL));
//    int* arr = new int[10]{ 3,2,5,0,1,8,7,6,9,4 };
//    //fillArray(arr);
//    showArray(arr);
//    quickSort(arr);
//    showArray(arr);
//}

void fillArr(int** arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0,k=1; i < size; i++) {
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
	showArr(arr);

}