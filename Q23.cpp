#include <iostream>

struct Book{
    std::string title;
    std::string author;
    int year;
    int book_id;
};

int main (void)
{
    Book* b1 = new Book[2];
    Book* b2 = new Book[2];

    b1[0].title = "Book 11";
    b1[1].title = "Book 12";

    b2[0].title = "Book 21";
    b2[1].title = "Book 22";

    b2 = b1;

    std:: cout << b2[1].title << std::endl;
}