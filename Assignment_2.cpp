#include <iostream>
using namespace std;

//Base class vehicle
class vehicle{
    public:
       void Vehicle(){
          cout<<"I am a vehicle"<<endl;
       }
};

//Derived class TwoWheeler (inherits from vehicle)
class TwoWheeler:public vehicle {
    public:
       void twoWheeler(){
          cout<<"I have a two wheels"<<endl;
       }
};

//Derived class Bike(inherits from TwoWheeler)
class bike:public TwoWheeler{
    public:
       void Bike(){
          cout<<"I am a bike"<<endl;
       }
};

int main(){
    //Create an object of class bike
    bike myBike;
    
    //Calling methods of bike,twoWheeler,and vehicle through bike object 
    myBike.Bike();
    myBike.twoWheeler();
    myBike.Vehicle();
    
    return 0;
}