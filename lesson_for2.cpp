#include <iostream>
using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	char a;
//	int n;
//	cout << "Введите символ - ";
//	cin >> a;
//	cout << "Введите число n -  ";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << " " << endl;
//		for (int j = 0; j < n; j++) {
//			cout << a << " ";
//		}
//	}
//
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	char a;
//	int w,h;
//	cin >> a >> w >> h;
//	for (int i = 0; i < h; i++) {
//		for (int j = 0; j < w; j++) {
//			cout << a << " ";
//		}
//		cout << endl;
//	}
//	
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	char a;
//	int n;
//  cout << "Введите символ и число n - ";
//	cin >> a >> n;
//	for (int i = 0; i < n; i++) {
//		cout << " " << endl;
//			for (int j = 0; j < n; j++) {
//				cout << a << " ";
//			}
//	}
//
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");                                                        // вывод пустого квадрата
//	char a = '*';
//	int n;
//	cout << "Введите число n - ";
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cout << " " << endl;
//		for (int j = 0; j < n; j++) {
//			if (i == 0 || i == n-1 || j == 0 || j == n-1) cout << a << " ";
//			else cout << "  ";
//		}
//	}
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");                                                         // вывод квадрата с крестом посередине
//	char a = '*';
//	int n;
//	cout << "Введите число n - ";
//	cin >> n;
//	if (n % 2 == 0) n++;
//	for (int i = 0; i < n; i++) {
//		cout << a << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < n - 2; i++) {
//		cout << "* ";
//		for (int j = 0; j < n - 2; j++) {
//			if (i == (n - 2) / 2 || j == (n - 2) / 2)
//				cout << "* ";
//			else cout << "  ";
//		}
//		cout << "*" << endl;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << a << " ";
//	}
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");                                                         // вывод заполненного квадрата с крестом посередине
//	char a = '*';
//	int n;
//	cout << "Введите число n - ";
//	cin >> n;
//	if (n % 2 == 0) n++;
//	for (int i = 0; i < n; i++) {
//		cout << a << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < n - 2; i++) {
//		cout << "* ";
//		for (int j = 0; j < n - 2; j++) {
//			if (i == (n - 2) / 2 || j == (n - 2) / 2)
//				cout << "* ";
//			else cout << "  ";
//		}
//		cout << "*" << endl;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << a << " ";
//	}
//}

//int main()                                                         // [1:1] [1:2] [1:3]
//														           
//{
//	setlocale(LC_ALL, "rus");
//	for (int i = 1; i <= 3; i++) {
//		cout << " \n";
//		for (int j = 1; j <= 3; j++) {
//			cout << "[" << i << ":" << j << "]";
//		}
//	}
//}

//int main()                                                         // вывод перевернутого полуквадрата
//																   
//{
//	setlocale(LC_ALL, "rus");
//	char a = '*';
//	int b;
//	cin >> b;
//	for (int i = 1; i <= b; i++) {
//		cout << " " << endl;
//		for (int j = 5; j > i; j--) {
//			cout << a;
//		}
//	}
//}

//int main()                                                         // вывод полуквадрат
//																   
//{
//	setlocale(LC_ALL, "rus");
//	char a = '*';
//	int b;
//	cin >> b;
//	for (int i = 1; i <= b; i++) {
//		cout << " " << endl;
//		for (int j = b; j > i; j--) {
//			cout << a;
//		}
//	}
//}

//int main()                                                         // вывод полуквадрат обратный
//
//{
//	setlocale(LC_ALL, "rus");
//	char a = '*';
//	int size;
//	cin >> size;
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size - i - 1; j++) {
//			cout << " ";
//		}
//		for (int j = 0; j < i+1; j++) {
//			cout << a;
//		}
//		cout << endl;
//	}
//}

//int main()                                                         // вывод полуквадрат обратный x1
//
//{
//	setlocale(LC_ALL, "rus");
//	char a = '*';
//	int size;
//	cin >> size;
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < size - i - 1; j++) {
//			cout << " ";
//		}
//		for (int j = 0; j < i + 1; j++) {
//			cout << a;
//		}
//		cout << endl;
//	}
//
//}

//int main()                                                         // вывод полуквадрат обратный x2
//
//{
//	setlocale(LC_ALL, "rus");
//	char a = '*';
//	int size;
//	cin >> size;
//	for (int i = 0; i < size; i++) {
//		for (int j = 0; j < i + 1; j++) {
//			cout << " ";
//		}
//		for (int j = 0; j < size-i; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//}

int main()                                                         // вывод грусть ;(

{
	setlocale(LC_ALL, "rus");
	char a = '*';
	int size;
	cin >> size;
	for (int i = 0; i <= size/2; i++) {
		for (int j = 0; j < size/2-i; j++) {
			cout << " ";
		}
		for (int j = 0; j < i*2+1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}