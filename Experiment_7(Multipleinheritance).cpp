#include<iostream>
using namespace std;
class Vehicle
{
public:
Vehicle(){
cout<<"This is a Vehicle\n";
}
};
class Fourwheeler{
public:
Fourwheeler(){
cout<<"This is a Fourwheeler\n";
}
};
class Car:public Vehicle, public Fourwheeler{
public:
Car(){
cout<<"This Fourwheeler Vehicle is car";
}
};
int main()
{
Car obj;
return 0;
}
