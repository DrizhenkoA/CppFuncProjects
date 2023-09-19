#include <iostream>
#include <iomanip>
using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a;
//	cout << "Введите трехзначное число  \n";
//	cin >> a;
//	cout << a/100 << " " << (a % 100) / 10 << " " << a%10 << "\n";
//	cout << a;
//
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a;
//	cout << "Введите двухзначное число  \n";
//	cin >> a;
//	int d1 = a / 10;
//	int d2 = a % 10;
//	int a2 = d2 * 10 + d1;
//	cout << a2;
//
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a;
//	cin >> a;
//	a = (a % 10) * 10 + (a / 10);
//	cout << a;
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a, b;
//	cin >> a >> b;
//	if (a > b) {
//		cout << a;
//	}
//	else
//	{
//		cout << b;
//	}
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a;
//	cin >> a;
//	if (a > 0) {
//		cout << "+ \n";
//	}
//	else {
//		if (a == 0) {
//			cout << " 0 \n"; }
//		}
//		else {
//			cout << "- \n";
//		}
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a;
//	cin >> a;
//	if (a % 2 == 0) {
//		cout << "Четное \n";
//	}
//	else
//	{
//		cout << "Нечетное \n";
//	}
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a,b;
//	cin >> a >> b;
//	if (a > b) {
//		cout << "a > b";
//	}
//	else if (a == b) {
//		cout << "a = b ";
//	}
//	else
//	{
//		cout << "a < b";
//	}
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	short a, b, c, d;
//	cout << "Введите 4 оценки ";
//	cin >> a >> b >> c >> d;
//	short result = round(float(a + b + c + d) / 4);
//	if (result == 5) cout << "отличник";
//	else if (result == 4) cout << "хорошист";
//	else if (result == 3) cout << "троечник";
//	else cout << "двоечник";
//
//}


int main()
{
	setlocale(LC_ALL, "rus");
	float a,b;
	char c;
	cout << "Введите 2 числа \n";
	cin >> a >> b;
	cout << "Выберите действие \n";
	cin >> c;

	if (c == '+') {
		cout << a << "+" << b << "=" << a + b;
	}
	else if (c == '-') {
		cout << a << "-" << b << "=" << a - b;
	}
	else if (c == '*') {
		cout << a << "*" << b << "=" << a * b;
	}
	else if (c == '/') {
		if (b == 0) cout << "на ноль делить нельзя";
		else
		 cout << a << "/" << b << "=" << a / b;
	}
	
	else {
		cout << "ошибка";
	}
}