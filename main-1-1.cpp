#include <iostream>
#include "vehicle.cpp"

using namespace std;

int main(void){
    int n_cars, n_buses, n_bikes;

    cout << "Number of cars: ";
    cin >> n_cars;

    cout << "Number of buses: ";
    cin >> n_buses;

    cout << "Number of motorbikes: ";
    cin >> n_bikes;

    int numVehicles = n_cars + n_buses + n_bikes;
    Vehicle **vehicles = new Vehicle *[numVehicles];

    int position = 0;

    for (int c = 1; c <= n_cars; c++) {
        vehicles[position++] = new Car(c);
    }

    for (int b = 1; b <= n_buses; b++) {
        vehicles[position++] = new Bus (b);
    }

    for (int m = 1; m <= n_bikes; m++) {
        vehicles[position++] = new Motorbike(m);
    }

    // print result

    for (int i = 0; i < numVehicles; i++) {
        cout << "Parking duration of Vehicle " << i+1 << " : " << vehicles[i]->getParkingDuration() << endl;
    }

     // Free memory 
    for (int i = 0; i < numVehicles; ++i) {
        delete vehicles[i];
    }

    delete[] vehicles;
  
}