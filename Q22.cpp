#include <iostream>

struct Book {
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
/*
The segmentation fault in your code occurs because the pointer b1 is uninitialized. 
When you declare Book* b1;, it creates a pointer to a Book object, but it does not point 
to a valid memory location. Dereferencing this uninitialized pointer (b1->title = "Book 1";) 
leads to undefined behavior, typically resulting in a segmentation fault.*/