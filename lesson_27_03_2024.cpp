#include <iostream>
#include <string>
#define random(min,max) (min + rand() % (max - min + 1))
using namespace std;
const int SIZE = 5;

const char NUMBERS[] = { '0','1', '2', '3', '4', '5', '7','8','9' };
const string firstName[] = { "Albert","Magdes", "Pashok", "Klyaksa", "Povar","Krisa","Valenok","Glina","Klara","Sapog" };
const string lastName[] = { "Cumshotov","Lopatov", "Ayeshkin", "Kuropatkin", "Debilov","Cacyn","Goluum","Pezdov","Yaisev","Gomunkulov" };

class Client;
class Bank;

class Bank {
private:
    int size;
    int arr;


public:
    string bankName = "Alpha Bank";

};



class Client {
private:
    string firstName;
    string lastName;
    int age;
    long int bankAccount;
    long float balance;
    static int id;

public:
    Client(string firstName, string lastName, int age, long float balance = 0) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->age = age;
    }


    void setName(string firstName) {
        this->firstName = firstName;
    }

    void setLastName(string lastName) {
        this->lastName = lastName;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getFirstName() {
        return firstName;
    }

    string getLastName() {
        return lastName;
    }

    int getAge() {
        return age;
    }

    long int getBankAccount() {
        return bankAccount;
    }

    long int getBalance() {
        return balance;
    }


    void showInfo() {
        cout << "Name: " << this->firstName << " " << this->lastName << endl;
        cout << "Age:  " << this->age << endl;
        cout << "Balance: " << balance  << " $" << endl;
        cout << "Bank account: " << bankAccount << endl;
        //cout << "Id: " << id << endl;

        cout << "\n\n";
    }

    //void setBalance(int index, int balance) {
    //    balance[index] = balance;
    //}

    //~Client() {                //деструктор
    //    delete[] this->balance;
    //}
};


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    Client cl1(firstName[random(0, 9)], lastName[random(0, 9)], NUMBERS[random(0,9)]);

    cl1.showInfo();







}
