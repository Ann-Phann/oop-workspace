#include <iostream>

struct Book{
    std::string title;
    std::string author;
    int year;
    int book_id;
};

int main(void)
{
    Book* b1;
    b1->title = "Book 1";
    std::cout << b1->title << std::endl;
}

//to access the members of a struct/class pointer, you must use the -> operator.
//but even using the pointer is not enough. You must allocate memory for the struct/class before you can use it.

/*for dynamic allocation, create dynamic memory for b1 by using "Book* b1 = new Book;"*/