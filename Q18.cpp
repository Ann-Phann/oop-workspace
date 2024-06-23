#include <iostream>

struct Book {
    std::string title;
    std::string author;

    int publicationYear;
    std::string ISBN;
    double price;
};

int main(void)
{
    Book myBook;
    myBook.title = "The Great Gatsby";
    myBook.author = "F. Scott Fitzgerald";
    myBook.publicationYear = 1925;
    myBook.ISBN = "978-0-7432-7356-5";
    myBook.price = 9.99;

    std::cout << "Title: " << myBook.title << std::endl;
}