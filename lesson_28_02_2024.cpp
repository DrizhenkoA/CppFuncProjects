#include <iostream>
#include <string>
using namespace std;

struct Car {
    string number;            //номер
    string color;             //цвет
    string model;             //модель
    int power;                //мощность
};
struct Garage {
    string name = "Garage";          //название
    float price;                 //цена
    int capacity;             //вместимость
    int count=0;                   //текущее кол-во автомобилей
    Car** cars = new Car * [0];         //массив автомобилей
};

void carInfo(Car* car) {
    cout << "Number: " << car->number << endl;
    cout << "Color: " << car->color << endl;
    cout << "Model: " << car->model << endl;
    cout << "Power: " << car->power << endl;
    cout << "--------------------" << endl;
}
Car* createCar(string number, string color, string model, int power) {
    Car* car = new Car;
    car->number = number;
    car->color = color;
    car->model = model;
    car->power = power;
    return car;
}

void garageCar(Garage &gr, Car* car) {
    if (gr.count >= gr.capacity) {
        cout << "Garage is full" << endl;
        return;
    }
    for (int i = 0; i < gr.count; i++) {
        if (gr.cars[i]->number == car->number) {
            cout << "This car is already exist";
            return;
        }
    }
    Car** buf = new Car * [gr.count+1];
    for (int i = 0; i < gr.count; i++) {
        buf[i] = gr.cars[i];
    }
    buf[gr.count] = car;
    delete[] gr.cars;
    gr.cars = buf;
    gr.count++;
}
void showGarageInfo(Garage gar) {
    if (gar.count == 0) {
        cout << "GARAGE IS EMPTY " << endl;
        return;
    }
    cout << "Current cars in garage - " << endl;
    for (int i = 0; i < gar.count; i++) {
        cout << "Car" << i+1 << ":" << endl;
        carInfo(gar.cars[i]);
    }
}
void indexDelete(Garage &gr, string number) {
    int index = -1;
    for (int i = 0; i < gr.count; i++) {
        if (gr.cars[i]->number==number){
            index = i;
            break;
        }
    }
    if (index != -1) {
        Car** buf = new Car *[gr.count - 1];
        for (int i = 0; i < index; i++)
        {
            buf[i] = gr.cars[i];
        }
        for (int i = index+1; i < gr.count; i++) {
            buf[i-1] = gr.cars[i];
        }
        delete[] gr.cars;
        gr.cars = buf;
        gr.count--;
    }
    else {
        cout << "Error" << endl;
    }
}


int main()
{
    setlocale(LC_ALL, "rus");
    Car* cr1 = createCar("A324PT", "white", "Priora", 28);
    Car* cr2 = createCar("P812ITER", "black", "BMW X6", 52);
    Car* cr3 = createCar("NA145T", "yellow", "Daewoo Matiz", 16);
    Car* cr4 = createCar("A234BC", "blue", "VAZ-2101", 19);
 
    Garage gr1;
    gr1.capacity = 3;
    gr1.name = "Garage";
    gr1.price = 500;
    garageCar(gr1, cr1);
    garageCar(gr1, cr2);
    garageCar(gr1, cr3);
    garageCar(gr1, cr4);
    showGarageInfo(gr1);
    indexDelete(gr1, "A324PT");
    //indexDelete(gr1, "P812ITER");
    //indexDelete(gr1, "NA145T");
    //indexDelete(gr1, "A234BC");
    cout << "AFTER DELETE CAR - " << endl;
    showGarageInfo(gr1);



}
