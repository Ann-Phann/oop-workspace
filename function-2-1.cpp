// // base 10 to base 2; string is input

#include <iostream>
#include <string>
using namespace std;

void print_binary_str (std :: string decimal_number)
{
    int num = stoi(decimal_number);
    int *binary = new int[32];
    int i = 0;

    while (num != 0)
    {
        binary[i] = num % 2;
        num = num/2;
        i++;
    }

    for (int i = i-1; i >= 0; i--)
    {
        cout << binary[i];
    }
    cout << endl;
    delete [] binary;


}

// #include <iostream>
// #include <stdexcept> // Include this header for exception handling
// using namespace std;

// void print_binary_str(string decimal_number)
// {
//     try {
//         int num = stoi(decimal_number);
//         int* binary = new int[32]; // This size might not be enough for larger numbers
//         int i = 0;

//         // Dynamically allocate memory for binary array based on the size of the input number
        
//         while (num != 0)
//         {
//             binary[i] = num % 2;
//             num = num / 2;
//             i++;
//         }

//         // Print the binary representation
//         for (int j = i - 1; j >= 0; j--)
//         {
//             cout << binary[j];
//         }
//         cout << endl;

//         // Deallocate memory
//         delete[] binary;
//     }
//     catch (const std::invalid_argument& e) {
//         std::cerr << "Invalid argument: " << e.what() << endl;
//     }
//     catch (const std::out_of_range& e) {
//         std::cerr << "Out of range: " << e.what() << endl;
//     }
// }

// int main()
// {
//     string decimal_number;
//     cout << "Enter a decimal number: ";
//     cin >> decimal_number;
//     print_binary_str(decimal_number);
//     return 0;
// }
