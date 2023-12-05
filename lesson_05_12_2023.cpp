#include <iostream>
using namespace std;

//int main()
//{
//	srand(time(NULL));
//	setlocale(LC_ALL,"rus");
//	int studmarks[3][4] = { { 3,4,4,5 },
//		                    { 3,3,3,5 }, 
//	                        { 5,5,5,2 } };
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cout << studmarks[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

//int main()                             //5 stud - 8 marks
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	const int SIZE1 = 5;
//	const int SIZE2 = 8;
//	int studmarks[SIZE1][SIZE2];
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 8; j++) {
//			studmarks[i][j] = 2 + rand() % 4;
//			cout << studmarks[i][j] << " ";
//		}
//		cout << endl;
//	}
//}

//int main()             //красивая табличка  + средний балл
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	const int SIZE1 = 5;
//	const int SIZE2 = 8;
//	int studmarks[SIZE1][SIZE2];
//	float sum = 0;
//	cout << "\tmath" << "\tengl" << "\truss" << "\tlitr" << "\tfizr" << "\tgeog" << "\tphyz" << "\thist" << endl;
//	for (int i = 0; i < SIZE1; i++) {
//		cout << "st " << i + 1 << ":\t";
//		for (int j = 0; j < SIZE2; j++) {
//			studmarks[i][j] = 2 + rand() % 4;
//			cout << studmarks[i][j] << "\t";
//			sum += studmarks[i][j];
//		}
//		cout << endl;
//	}
//	cout << "Средний балл - " << sum / (SIZE1 * SIZE2);
//}


//int main()							//найти студента с наивысшим средним баллом
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	const int SIZE1 = 5;
//	const int SIZE2 = 8;
//	int studmarks[SIZE1][SIZE2];
//	float sum = 0;
//	float sum2 = 0;
//	float max_avg = 0;
//	int ind_max_avg = 0;
//	cout << "\tmath" << "\tengl" << "\truss" << "\tlitr" << "\tfizr" << "\tgeog" << "\tphyz" << "\thist" << endl;
//	for (int i = 0; i < SIZE1; i++) {
//		cout << "st " << i + 1 << ":\t";
//		for (int j = 0; j < SIZE2; j++) {
//			studmarks[i][j] = 2 + rand() % 4;
//			sum += studmarks[i][j];
//			sum2 += studmarks[i][j];
//			cout << studmarks[i][j] << "\t";
//		}
//		cout << "avg" << sum2 / SIZE2;
//		cout << endl;
//		if (max_avg < sum2 / SIZE2) {
//			max_avg = sum2 / SIZE2;
//			ind_max_avg = i;
//		}
//	}
//	cout << "all avg:" << sum / (SIZE1 * SIZE2) << endl;
//	cout << "st:" << ind_max_avg+1 << "max avg " << max_avg;
//}

//int main()							// сумма рандом чисел по столбцам и строкам
//{
//	srand(time(NULL));
//	setlocale(LC_ALL, "rus");
//	const int SIZE1 = 4;
//	const int SIZE2 = 5;
//	int ar[SIZE1][SIZE2];
//	int sum = 0;
//	int sum2 = 0;
//	int sum3 = 0;
//	for (int i = 0; i < SIZE1; i++) {
//		for (int j = 0; j < SIZE2; j++) {
//			ar[i][j] = 1 + rand() % 99;
//			cout << ar[i][j] << "\t";
//			sum += ar[i][j];
//		}
//		cout << "\t | " << sum << " - sum";
//		cout << endl;
//	}
//	for (int i = 0; i < SIZE2; i++) {
//		cout << "----------";
//	}
//	cout << endl;
//	for (int j = 0; j < SIZE2; j++) {
//		for (int i = 0; i < SIZE1; i++) {
//			sum2 += ar[i][j];
//		}
//		cout << sum2 << "\t";
//		sum3 += sum2;
//	}
//	cout << "\t | " << sum3;
//
//}

int main()							//как и предыдущее, но с мин, макс, мин макс сумм, мин макс сумм в столбце
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	const int SIZE1 = 4;
	const int SIZE2 = 5;
	int ar[SIZE1][SIZE2];
	int sum = 0;
	int sum2 = 0;
	int sum3 = 0;

	int min = ar[0][0];
	int max = 0;
	

	for (int i = 0; i < SIZE1; i++) {
		for (int j = 0; j < SIZE2; j++) {
			ar[i][j] = 1 + rand() % 99;
			cout << ar[i][j] << "\t";
			sum += ar[i][j];
		}
		cout << "\t | " << sum << " - sum";
		cout << endl;
	}
	for (int i = 0; i < SIZE2; i++) {
		cout << "----------";
	}
	cout << endl;
	for (int j = 0; j < SIZE2; j++) {
		for (int i = 0; i < SIZE1; i++) {
			sum2 += ar[i][j];
		}
		cout << sum2 << "\t";
		sum3 += sum2;
	}
	cout << "\t | " << sum3 << endl;
	cout << "min:" << min << endl;
	cout << "max:" << max << endl;
}
