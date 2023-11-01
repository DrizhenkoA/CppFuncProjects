#include <iostream>
using namespace std;
//int main()
//{
//	setlocale(LC_ALL, "rus");                         /*выводит 5 раз Hello*/
//	int c = 5; 
//	while (c-- > 0) {
//		cout << "Hello ";
//	}
//	cout << c;
//
//}
//
//int main()                                              /*вводит границы диапазона, вывести все целые числа в этом диапазоне*/
//{                    
//	setlocale(LC_ALL, "rus");
//	int a,b;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	for (int i = a; i <= b; i++) {
//		cout << i << " ";
//	}
//}
//
//int main()                                              /*сумма всех целых чисел в диапазоне от 10 до 20*/
//{
//	setlocale(LC_ALL, "rus");
//	int sum=0;
//	for (int i = 10; i <= 20; i++) {
//		sum += i;
//	}
//	cout << sum;
//}
//
//int main()                                              /*вывести 10 случайных чисел в диапазоне от a до b (вводит пользователь)*/
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	int a, b;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	for (int i = 0; i < 10; i++ ) {
//		cout << a + rand() % (b + 1 - a) << " ";
//	}
//}
//
//int main()                                        /*вывести 10 случайных чисел в диапазоне от a до b (вводит пользователь), вывести наименьшее и наибольшее число*/
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	int a, b;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	int min = b;
//	int max = a;
//	for (int i = 0,w; i < 10; i++) {
//		w = a + rand() % (b + 1 - a);
//		if (w < min) min = w;
//		if (w > max) max = w;
//		cout << w << " ";
//	}
//	cout << "\n";
//	cout << "min - " << min << "\n";
//	cout << "max - " << max << "\n";
//
//}
//
//
//                                                  /*1. вывести все числа от a до b с шагом 0.5
//												    2. вывести все целые числа от a до b в обратном порядке
//													3. вывести все числа от а до б кратные 5
//													4. игра "кости" с компьютером до 3-х побед*/
//int main()
//{
//	float a, b;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	for (float i = a; i <= b; i+=0.5) {
//		cout << i << " ";
//	}
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a < b) swap(a, b);
//	for (int i = a; i >= b; i--) {
//		cout << i << " ";
//	}
//}
//
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	for (int i = a; i <= b; i++) {
//		if (i %5==0) cout << i << " ";
//	}
//}



/*вводит число, проверка является ли число простым (делится только на себя)*/

int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "Введите число ";
	cin >> a;
	bool flag = true;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a % i == 0) {
			flag = false;
			break;
		}
	}
	cout << endl << ((flag) ? "Да, число простое " : "Нет, не простое ");
}