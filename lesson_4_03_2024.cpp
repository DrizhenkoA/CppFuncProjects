#include <iostream>
#include <string>
#include <ctime>
#define random(min, max) (min + rand() % (max - min + 1))
using namespace std;

void showArr(int* arr) {
	int size = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void fillArr(int* arr) {
    int size = _msize(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        arr[i] = random(1, 100);
    }
}

void addElement(int*& arr, int num) {
    int size = _msize(arr) / sizeof(arr[0]);
    int* buf = new int[size + 1];
    for (int i = 0; i < size; i++){
        buf[i] = arr[i];
    }
    buf[size] = num;
    delete[] arr;
    arr = buf;
}

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    //int a, b, c;                                                      //1
    //cin >> a >> b >> c;
    //if (a > b && a > c) {
    //    cout << a << " - biggest";
    //}
    //if (b > a && b > c) {
    //    cout << b << " - biggest";
    //}
    //else {
    //    cout << c << " - biggest";
    //}

    //int diap1, diap2;                                      //2
    //int sum=0;
    //int a = 0;
    //cin >> diap1 >> diap2;
    //for (int i = diap1; i < diap2; i++)
    //{
    //    a++;
    //    sum += i;
    //}
    //cout << "srednee - " << a << endl;
    //cout << "summa - " << sum << endl;
     
    //int a;                                                  //3
    //cout << "vvedite god" << endl;
    //cin >> a;
    //if ((a % 4) == 0 || (a % 400) == 0) {
    //    cout << "YES" << endl;
    //}
    //else {
    //    cout << "NO";
    //}


    //int N;                                                  //4,5
    //cout << "input array size " << endl;
    //cin >> N;
    //int* arr = new int[N];
    //for (int i = 0; i < N; i++){
    //    arr[i] = random(1, 100);
    //}
    //cout << endl << "arr - " << endl;
    //fillArr(arr);
    //showArr(arr);
    ////cout << endl;
    ////int max = arr[0];
    ////for (int i = 1; i < N; i++){
    ////    if (arr[i] > max) {
    ////        max = arr[i];
    ////    }
    ////}
    ////cout << "max number from array - " << endl << max << endl;

    //addElement(arr, 3);
    //cout << endl;
    //showArr(arr);


    string str;
    cout << "input string" << endl;
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }


}