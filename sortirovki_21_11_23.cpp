#include <iostream>
using namespace std;

//int main()                               //сортировка пузырьком
//{
//	setlocale(LC_ALL, "rus");
//	srand(time(NULL));
//	int array[10];
//	int a = 1, b = 9,n=10;
//	for (int i = 0, k = 0; i < 10; i++) {
//		array[i] = a + rand() % (b + 1 - a);
//		cout << array[i] << " ";
//	}
//
//	for (int i = 0,flag=0; i < n; i++) {
//		flag = true;
//			for (int j = 0; j < n-i-1; j++) {
//				if (array[j] > array[j + 1]) swap(array[j], array[j + 1]);
//				flag = false;
//		}
//			if (flag) break;
//	}
//	cout << endl;
//	for (int i = 0; i < 10; i++) {
//		cout << array[i] << " ";
//	}
//
//}

//int main()                                 //сортировка вставками
//{
//	setlocale(LC_ALL, "rus");
//	srand(time(NULL));
//	int array[10];
//	int array2 = array[10];
//	int a = 1, b = 9, n = 10;
//	for (int i = 0, k = 0; i < 10; i++) {
//		array[i] = a + rand() % (b + 1 - a);
//		cout << array[i] << " ";
//	}
//
//	for (int i = 1; i < n; i++) {
//		for (int j = i; j > 0; j--) {
//			if (array[j] < array2[j - 1]) swap(array[j], array2[j - 1]);
//			else break;
//		}
//	}
//
//	cout << endl;
//	for (int i = 0; i < 10; i++) {
//		cout << array[i] << " ";
//	}
//
//}

int main()                                 // шейкерная сортировка
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int array[10];
	int array2[10];
	int array3[10];
	int a = 1, b = 9, n = 10;
	for (int i = 0, k = 0; i < 10; i++) {
		array[i] = a + rand() % (b + 1 - a);
		cout << array[i] << " ";
	}

	for (int i = 0, k = n - 1, flag = 0; i < k; i++) {
		flag = true;
		for (int j = 1; j < k; j++) {
			if (array[j] > array[j + 1]) swap(array[j], array[j + 1]);
			flag = false;
		}
		if (flag) break;
		k--;

		for (int j = k; j > i; j--) {
			flag = true;
			if (array3[j] < array[j + 1]) swap(array[j], array[j + 1]);
			flag = false;
		}
		if (flag) break;
	}

	cout << endl;

	for (int i = 0; i < 10; i++) {
	cout << array[i] << " ";
}

}
