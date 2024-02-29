#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n);

int main()
{
    int test_array[] = {2,4,1,4,2};
    int n = sizeof(test_array) / sizeof(test_array[0]);
    bool result = is_fanarray(test_array, n);
    std::cout << std::boolalpha << result << std::endl;
    return 0;
}