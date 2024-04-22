#include <iostream>
#include "TV.h"

int main() {
    // Create a TV object using the default constructor
    TV tv1;

    // Set the screen size of the TV
    tv1.setScreenSize(55.0); // Assuming 55-inch screen size

    // Print the screen size of the TV
    std::cout << "TV 1 screen size: " << tv1.getScreenSize() << " inches" << std::endl;

    // Create another TV object using the parameterized constructor
    TV tv2(500, 65.0); // Power rating: 500, Screen size: 65.0 inches

    // Print the power consumption of the TV
    std::cout << "TV 2 power consumption: " << tv2.getPowerConsumption() << " watts" << std::endl;

    return 0;
}
