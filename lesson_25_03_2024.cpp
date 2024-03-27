#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const int SIZE = 5;



class Student {   
private:        
    string name;
    int age;
    int* marks = new int[10];
public:
    Student(string name) {    
        this->name = name;  
    }

    Student(string name, int age) :Student(name)       
    {                                                 
        this->age = age;                                        
    }

    //Student(Student*&) {
    //    this->name = st->name;
    //    this->age = st->age;

    //}

    void setName(string name) {   
        this->name = name;
    }

    void setAge(int age) {     
        this->age = age;
    }


    string getName() { 
        return name;
    }

    int getAge() {      
        return age;
    }

    void showInfo() {
        cout << "Name: " << this->name << "\nAge:  " << this->age << endl << endl;
        cout << "Marks: ";
        for (int i = 0; i < 10; i++) {
            cout << marks[i] << " ";
        }
    }

    void setMark(int index, int mark) {
        marks[index] = mark;

    }
};


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Student st1("Mike", 20);
    for (int i = 0; i < 10; i++)
    {
        st1.setMark(i, random(1, 5));
    }
    st1.showInfo();

    Student st2{ st1 };
    st1.showInfo();
    st1.showInfo();

    st1.setMark(0, 9);
    st1.showInfo();
    st1.showInfo();


}
