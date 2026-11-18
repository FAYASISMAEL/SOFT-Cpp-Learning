#include<iostream>
using namespace std;

class Car{
    public:
        string brand;
        string model;
        int speed;

        void acceleration(int amount){
            speed + amount;
        }

        void display(){
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Speed: " << speed << endl;
        }

};

int main(){

    Car car1;

    car1.brand = "Maruti Suzuki";
    car1.model = "Swift";
    car1.speed = 40;
    
    Car car2;
    
    car2.brand = "Toyota";
    car2.model = "Land Cruiser";
    car2.speed = 85;
    
    car1.acceleration(60);
    car2.acceleration(100);

    car1.display();
    car2.display();

return 0;
}