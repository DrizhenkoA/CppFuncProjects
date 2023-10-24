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

//int main()                                              /*сумма всех целых чисел в диапазоне от 10 до 20*/
//{
//	setlocale(LC_ALL, "rus");
//	int sum=0;
//	for (int i = 10; i <= 20; i++) {
//		sum += i;
//	}
//	cout << sum;
//}

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


                                                  /*1. вывести все числа от a до b с шагом 0.5
												    2. вывести все целые числа от a до b в обратном порядке
													3. вывести все числа от а до б кратные 5
													4. игра "кости" с компьютером до 3-х побед*/
//int main()
//{
//	float a, b;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	for (float i = a; i <= b; i+=0.5) {
//		cout << i << " ";
//	}
//}

//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a < b) swap(a, b);
//	for (int i = a; i >= b; i--) {
//		cout << i << " ";
//	}
//}

//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	for (int i = a; i <= b; i++) {
//		if (i %5==0) cout << i << " ";
//	}
//}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int pl1, pl2, pc1, pc2;
	int countWinPlayer=0, countWinPC=0;
	while (true) {
		system("pause");
		system("cls");
		pl1 = 1 + rand() % 6;
		pl2 = 1 + rand() % 6;
		pc1 = 1 + rand() % 6;
		pc2 = 1 + rand() % 6;

		cout << "Вам выпало " << pl1 << " и " << pl2 << endl;
		if (pl1 == pl2) {
			cout << "Дубль: " << endl;
			pl1 *= 2;
			pl2 *= 2;
		}
		cout << "Ход компьютера - " << endl;
		cout << "Компьютеру выпало " << pc1 << " и " << pc2 << endl;
		if (pc1 == pc2) {
			cout << "Дубль: " << endl;
			pc1 *= 2;
			pc2 *= 2;
		}
		if (pl1 + pl2 > pc1 + pc2) {
			cout << "Игрок победил! ";
			countWinPlayer++;
		}
		else if (pl1 + pl2 > pc1 + pc2) {
			cout << "Компьютер победил! ";
			countWinPC++;
		}
		else {
			cout << "Ничья! " << endl;
		}
		cout << "Общий счет: \n"<< "Игрок - " << countWinPlayer << " : " << "Компьютер - " << countWinPC << endl;
		if (countWinPlayer == 3 || countWinPC == 3) break;
	}

}