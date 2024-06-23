#include <iostream>

struct Book {
    std::string title;
    std::string author;
    int year;
    int* book_id = new int;
};

int main(void)
{
    Book b1, b2;
    *b1.book_id = 100;
    b2 = b1;
    std::cout << *b2.book_id << std::endl;

    *b1.book_id = 500;
    std::cout << *b2.book_id << std::endl;
}
//shallow copy