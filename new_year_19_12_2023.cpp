#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	//cout << "Злобные гномы заминировали огород Санты \n";
	//system("pause > nul");
	//cout << "Вам необходимо разминировать поле \n";
	//system("pause > nul");
	//cout << "У вас 3 жизни. Удачи! \n";
	//system("pause > nul");

	system("cls");
	const int SIZE = 4;
	char field[SIZE][SIZE] = {};
	char showfield[SIZE][SIZE] = {};
	int countbombs = 4;
	for (int i = 0,k=1; i < SIZE-1; i++) {
		for (int j = 0; j < SIZE; j++) {
			field[i][j] = k+48;
			if (j % 2) k++;
		}
	}
	for (int i = 0; i < SIZE; i++) {
		field[SIZE - 1][i] = '¤';
	}
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			swap(field[i][j], field[rand() % SIZE][rand() % SIZE]);
		}
	}
	//while (countbombs > 0) {
	//	int column = rand() % SIZE;
	//	int raw = rand() % SIZE;
	//	if (field[raw][column] != '¤') {
	//		field[raw][column] = '¤';
	//		countbombs--;
	//	}
	//}
	cout << "  a b c d" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << i + 1 << " ";
		for (int j = 0; j < SIZE; j++) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "  a b c d" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << i+1 << " ";
		for (int j = 0; j < SIZE; j++) {
			showfield[i][j] = '?';
			cout << showfield[i][j] << " ";
		}
		cout << endl;
	}

	char x, y;
	int prevx, prevy;
	int count = SIZE * SIZE;
	int openpare = 0;
	while (count > 0) {
		while (true) {
			system("cls");
			cout << "  a b c d" << endl;
			for (int i = 0; i < SIZE; i++) {
				cout << i + 1 << " ";
				for (int j = 0; j < SIZE; j++) {
					cout << showfield[i][j] << " ";
				}
				cout << endl;
			}

			cout << "Введите букву координаты: ";
			cin >> x;
			if (x < 'a' || x > 'd') {
				cout << "Неккоректная координата" << endl;
				continue;
			}
			cout << "Введите цифру координаты: ";
			cin >> y;
			if (y < '1' || y > '4') {
				cout << "Неккоректная координата" << endl;
				continue;
			}
			if (showfield[y - 49][x - 97] != '?') continue;
			break;
		}
		openpare++;
		showfield[y - 49][x - 97] = field[y - 49][x - 97];
		count--;
		if (openpare > 1) {
			if (showfield[y - 49][x - 97] != (showfield[prevy][prevx])) {
				system("cls");
				cout << "  a b c d" << endl;
				for (int i = 0; i < SIZE; i++) {
					cout << i + 1 << " ";
					for (int j = 0; j < SIZE; j++) {
						cout << showfield[i][j] << " ";
					}
					cout << endl;
				}
				Sleep(2000);
				showfield[y - 49][x - 97] = '?';
				showfield[prevy][prevx] = '?';
				count += 2;
			}
			openpare = 0;
		}
		else {
			prevx = x - 97;
			prevy = y - 49;
		}

	}
}
