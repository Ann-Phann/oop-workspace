#include <iostream>
void addOnetoX (int x) {
    x = x + 1;
}

int main(void)
{
    int x = 100;
    addOnetoX(x);
    std:: cout << x << std::endl;
    
}