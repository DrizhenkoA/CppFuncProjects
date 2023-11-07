#include <iostream>
using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	for (int i = 0; i < 4; i++) {
//		cout << " " << endl;
//		for (int j = 0; j < 5; j++)
//			cout << "Hi ";
//	}
//
//}

//int main()
//{
//	setlocale(LC_ALL, "rus");
//	char a = '*';
//	int n;
//	cout << "Введите n - ";
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
//	setlocale(LC_ALL, "rus");
//	int a, b;
//	cin >> a >> b;
//	int f = 1;
//	int summ = 0;
//	for (int j = a; j < b; j++) {
//		for (int i = a; i < b; i++) {
//			f *= i;
//		}
//		summ += f;
//	}
//	cout << summ;
//
//}

//int main()
//{
//    int count = 0;
//    int a, b;
//    cin >> a >> b;
//    bool flag;
//    for (int i = a; i <= b; i++) {
//        flag = true;
//        for (int j = 2; j <= sqrt(i); j++) {
//            if (i % j == 0) {
//                flag = false;
//                break;
//            }
//        }
//        if (flag)count++;
//    }
//    cout << count;
//}


//int main() //вводит кол-во студентов и дисциплин, необходимо выставить по каждой дисциплине каждому студенту рандомную оценку от 2 до 5, вывести в таблице
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	int stud, les,count=0;
//	float sum;
//	cout << "Введите кол-во студентов - ";
//	cin >> stud;
//	cout << "Введите кол-во дисциплин - ";
//	cin >> les;
//	cout << "\trus\teng\tmath\tgeom\tphis\n";
//	for (int i = 0; i < stud; i++) {
//		cout << "N " << i + 1 << ":\t";
//		sum = 0;
//		for (int j = 0,k; j < les; j++) {
//			k = 2 + rand() % (5 + 1 - 2);
//			cout << k << "\t";
//			sum += k;
//		}
//		if (sum / les >= 3 && sum / les <= 4) count++;
//		cout << endl;
//	}
//	cout << count;
//}

//int main() //вводит число (мы не знаем скольки значное число) посчитать сумму цифр числа
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	int a,sum=0;
//	cout << "Введите число, неважно сколько знаков - ";
//	cin >> a;
//	for (int i = a; i != 0 ; i/=10) {
//		int abc = i % 10;
//		sum += abc;
//	}
//	cout << "Сумма цифр числа = " << sum << endl;
//
//}

//int main()
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	int indexMin = 0;
//	int min = 10 + rand() % (81);
//	for (int i = 0,k; i < 9; i++) {
//		k = 10 + rand() % (81);
//		cout << k << " ";
//		if (k < min) {
//			min = k;
//			indexMin = i;
//		}
//	}
//	cout << endl <<  min << " index = " << indexMin << endl;
//}

//int main() // создать массив из 10 рандомных чисел, с числами от 10 до 90, вывести значение этого массива + сумму чисел всего массива
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	int array[10],sum=0;
//	for (int i = 0; i < 10; i++) {
//		array[i] = 1 + rand() % (99);
//		cout << array[i] << " ";
//		sum += array[i];
//	}
//	cout << endl;
//	cout << "Сумма - " << sum << endl;
//}

int main() // создать массив из 10 рандомных чисел, с числами от 10 до 90, вывести значение этого массива
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int array[10],a,b,count=0,indexMin=0,indexMax=0;
	float sum = 0;
	cout << "Введите диапазон - ";
	cin >> a >> b;
	int min = b;
	int max = a;
	if (a > b) swap(a, b);
	for (int i = 0; i < 10; i++) {
		array[i] = a + rand() % (b+1-a);
		if (min > array[i]) {
			min = array[i];
			indexMin = i;
		}
		if (max < array[i]) {
			max = array[i];
			indexMax = i;
		}
		cout << array[i] << " ";
		sum += array[i];

	}
	cout << endl;
	cout << "summ = " << sum << endl;
	cout << "crednee arifm = " << sum/10 << endl;
	cout << "min znachenie = " << min << endl;
	cout << "max znachenie = " << max << endl;
	cout << "index min znacheniya = " << indexMin << endl;
	cout << "index max znacheniya = " << indexMax << endl;
}
