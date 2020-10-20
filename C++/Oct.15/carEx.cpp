#include <iostream>
#include <string>
class Car{
    public:
        int speed(int maxSpeed);
        int currentSpeed(int distance, int time);
};
int Car::speed(int maxSpeed){
    return maxSpeed;

}
int Car::currentSpeed(int distance, int time){
    return distance/time;

}

int main(){
    Car myObj;
    std::cout << myObj.speed(32135)
}