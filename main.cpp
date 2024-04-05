#include <iostream>
#include "publication.h"
#include "book.h"
using namespace std;

int main (void)
{
    // Create a Publication object
    Publication publication1("Introduction to C++", "John Doe", 2022);

    // Print the details of the Publication
    std::cout << "Publication Details:\n";
    publication1.print();
    std::cout << "\n";

    // Create a Book object
    Book book1("Advanced C++ Programming", "Jane Smith", 2023, 1234567890, 350, "Tech Publishing");

    // Print the details of the Book
    std::cout << "Book Details:\n";
    book1.print();
    std::cout << "\n";

//apply the short print
    Book book1("Advanced C++ Programming", "Jane Smith", 2023, 1234567890, 350, "Tech Publishing");

// Call short_print with true to print only basic information
    book1.print(true);
    cout << "\n";

// Call short_print with false to print additional information
    book1.print(false);
    cout << endl;

}

