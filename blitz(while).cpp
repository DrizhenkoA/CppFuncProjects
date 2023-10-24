#include <iostream>
using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a=0;
//	while (a < 10)
//		cout << ++a << " ";
//
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a, b,c=0;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	while (c >= a) cout << c++ << " ";
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a,sum=0;
//	while (true);
//
//}

int main()
{
	setlocale(LC_ALL, "rus");
	int a, min;
	cin >> a;
	while (a != 0) {
		if (min > a) min = a;
		cin >> a;
	}
	cout << min;
}