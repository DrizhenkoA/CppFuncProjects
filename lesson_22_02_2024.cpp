#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

//void showArr(string* stringArr, int arrSize) {
//	for (int i = 0; i < arrSize; i++)
//	{
//		cout << stringArr[i] << endl;
//	}
//}
//
//void addArr(string* &arr, string str,int size) {
//	string* buf = new string[size + 1];
//	for (int i = 0; i < size; i++)
//	{
//		buf[i] = arr[i];
//	}
//	buf[size] = str;
//	delete[] arr;
//	arr = buf;
//}
//
//void readFile(string path, string* &arr, int &size) {
//	ifstream in("file.txt");
//	if (in.is_open()) {
//		string str = "";
//		while (getline(in, str))
//		{
//			addArr(arr, str, size++);
//		}
//	}
//	else {
//		cout << "file not found" << endl;
//	}
//	in.close();
//}
//
//int main()
//{
//	setlocale(LC_ALL, "rus");
//	int arrSize = 0;
//	string* stringArr = new string[0];
//	readFile("file.txt",stringArr,arrSize);
//	showArr(stringArr, arrSize);
//}

int main()
{
	ofstream out("hello.txt", ios::app);
	if (out.is_open()) {
		for (int i = 0; i < 5; i++)
		{
		out << "welcome" << endl;
		}
	}
	out.close();



}
