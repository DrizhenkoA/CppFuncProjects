

#include <iostream>
using namespace std;

//int main()
//{
//    srand(time(NULL));
//    setlocale(LC_ALL, "rus");
//    int array[10];
//    for (int i = 0; i < 10; i++) {
//        array[i] = 1 + rand() % (10);
//        cout << array[i] << " ";
//    }
//    
//}

//int main()
//{
//    srand(time(NULL));
//    setlocale(LC_ALL, "rus");
//    int array[10];
//    for (int i = 0; i < 10; i++) {
//        array[i] = 1 + rand() % (10);
//        cout << array[i] << " ";
//    }
//    int sum = 0;
//    for (int j = 0; j < 10; j++) {
//        if (array[j] < 10) sum += array[j];
//
//    }
//    cout << endl;
//    cout << sum;
//}
    

//int main()
//{
//srand(time(NULL));
//setlocale(LC_ALL, "rus");
//int array[10], min, max, max1=0,min1=0;
//for (int i = 0; i < 10; i++) {
//    array[i] = 1 + rand() % (10);
//    cout << array[i] << " ";
//    max = array[0];
//    min = array[0];
//    for (int j = 1; j < 10; j++) {
//        if (max < array[j]) {
//            max = array[j];
//            max1 = j+1;
//        }
//        if (min > array[j]) {
//            min = array[j];
//            min1 = j+1;
//        }
//    }
//}
//cout << endl;
//cout << "min - " << min << " index - " << min1 << endl;
//cout << "max - " << max << " index - " << max1 << endl;
//}

//int main()
//{
//    srand(time(NULL));
//    setlocale(LC_ALL, "rus");
//    const int SIZE = 10;
//    int array[SIZE];
//    int array2[SIZE] = {};
//    int array3[SIZE] = {};
//    int array4[SIZE] = {};
//    int array5[SIZE] = {};
//    cout << "массив с рандомными числами - " << endl;
//    for (int i = 0; i < SIZE; i++) {
//        array[i] = rand() % 10;
//        cout << array[i] << " ";
//    }
//    cout << endl << "копия массива1 - " << endl;
//    for (int i = 0; i < SIZE; i++) {
//        array2[i] = array[i];
//        cout << array2[i] << " ";
//    }
//    cout << endl << "перевернутый массив - " << endl;
//    for (int i = SIZE-1,k=0; i >= 0; i--,k++) {
//        array3[k] = array[i];
//        cout << array3[k] << " ";
//    }
//    cout << endl << "массив только с нечетными числами - " << endl;
//    for (int i = 0,k=0; i<SIZE; i++) {
//        if (array[i] % 2) {
//            array4[k++] = array[i];
//        }
//    }
//    for (int i = 0; i < SIZE; i++) {
//        cout << array4[i] << " ";
//    }
//    cout << endl << "массив счетчик индексов - " << endl;
//    int counter=0;
//    for (int i = 0; i < SIZE; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            if (array[j] == i) {
//                array5[i]++;
//            }
//        }
//    }
//    for (int i = 0; i < SIZE; i++) {
//        cout << array5[i] << " ";
//    }
//    cout << endl << "перевернутый массив - " << endl;
//    for (int i = 0; i < SIZE/2; i++) {
//        swap(array[i], array[SIZE - 1 - i]);
//    }
//
//}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    const int SIZE = 10;
    int array[SIZE];
    int array2[SIZE] = {};
    int array3[SIZE] = {};
    int array4[SIZE] = {};
    cout << "массив с рандомными числами - " << endl;
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 10;
        cout << array[i] << " ";
    }
    cout << endl << "массив с повтор. числами - " << endl;
    for (int i = 0,k=0; i < SIZE; i++) {
        for (int j = i+1; j < SIZE; j++) {
            if (array[i] == array[j]) array2[k++] = array[i];
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << array2[i] << " ";
    }
    cout << endl << "массив с неповтор числами - " << endl;
    for (int i = 0, k = 0, flag; i < SIZE; i++) {
        for (int j = i + 1; j < i; j++) {
            if (array[i] != array[j]) array4[k++] = array[i];
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << array4[i] << " ";
    }

    cout << endl << "массив с повтор числами, но только 1 раз - " << endl;
    for (int i = 0, k = 0,flag; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            if (array[i] == array[j]) {
                flag = true;
                for (int s = 0; s < k; s++) {
                    if (array3[s] == array[i]) {
                        flag = false;
                    }
                }
                if (flag) array3[k++] = array[i];
            }
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << array3[i] << " ";
    }

}