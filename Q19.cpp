#include <iostream>

struct Book {
    std::string title;
    std::string author;
    int year;
    int book_id;
};

int main(void)
{
    Book b1, b2;
    b1.title = "Book 1";
    b2 = b1;
    std:: cout << b2.title << std::endl;
}

// struct can be copied by value. The default copy constructor copies all members of the struct.
// but aray cannot