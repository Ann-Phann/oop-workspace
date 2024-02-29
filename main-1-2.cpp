#include <iostream>
using namespace std;

double array_mean(int array[], int n);

int main (void) {
    int array_test[] = {2, 4, 6, 8};
    int n = sizeof(array_test) / sizeof(array_test[0]);
    printf("%1.1f\n",array_mean(array_test, n));
}