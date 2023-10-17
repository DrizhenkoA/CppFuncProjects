#include <iostream>
#include <ctime>
using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a=1;
//	while (a <= 20 ) {
//		cout << a << " ";
//		a += 1;
//	}
//	
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a,b;
//	cout << "Введите оценки пока не введете 0 ";
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	int sum = 0;
//	while (a <= b) {
//		sum += a;
//		a += 1;
//	}
//	cout << sum;
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a = 0;
//	while (a <= 20) {
//		cout << a << " ";
//		a += 2;
//	}
//
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	float sum=0;
//	int a;
//	int b = 0;
//	while (true) {
//		cin >> a;
//		if (a == 0) break;
//		sum += a;
//		b += 1;
//	}
//	cout << sum / b;
//
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int a, b;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	while (b % 5) b -= 1;
//	while (b >= a) {
//		cout << b;
//		b -= 5;
//	}
//
//}

    //a = a + 1;
	//a += 1;

	//a++;    //постфиксный инкремент ( увеличивает текущее значение на 1 после вычисления )
	//++a;    //предфиксный инкремент ( увеличивает текущее значение на 1 перед вычислением )

	//a--;    //постфиксный декремент  ( уменьшает текущее значение на 1 после вычисления )
	//--a;    //префиксный декремент  ( уменьшает текущее значение на 1 перед вычисления )

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	//cout << rand();                  //рандомное число в диапазоне от 1 до 100, нужно отгадать до тех пор, пока не отгадаете, если больше
	int a = 1 + rand() % (100);
	int n;
	while (true) {
		cout << "vvedite chislo ";
		cin >> n;
		if (n == a) {
			cout << "yes";
			break;
		}
		else if (n > a) cout << "n > a";
		else cout << "n< a";
	}
}