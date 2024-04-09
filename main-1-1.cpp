#include <iostream>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include "Motorbike.h"
#include "Bus.h"
#include<unistd.h> 

using namespace std;

int main(){
    int vec_num;
    cout << "How many vehicles you want to add?" << endl;
    cin >> vec_num;
    string ans[vec_num];
    int ans_ID;

    Vehicle *v1[vec_num];

    for (int i = 0; i < vec_num; i++)
    {
        ans_ID = 0;
        cout << "What's type of vehicle you want to add to the parking lot? " <<endl;
        cin >> ans[i];
        cout << "Please enter ID of your vehicle: " <<endl;
        cin >> ans_ID;
        if (ans[i] == "Car")
        {
            v1[i] = new Car(ans_ID);
        }
        else if (ans[i] == "Bus")
        {
            v1[i] = new Bus(ans_ID);
        }
        else if (ans[i] == "Motorbike")
        {
            v1[i] = new Motorbike(ans_ID);
        }
    }

    for(int i=0; i<vec_num; i++){
        cout << ans[i] << " parking duration: " << v1[i]->getParkingDuration() << endl;
    }
    return 0;
}