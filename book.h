#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include "publication.h"
using namespace std;

class Book : public Publication {
private:
    int ISBN;
    int pages;
    string publisher;

public:
    Book(string a_title, string an_author,
         int year_of_pub, int isbn,
         int num_pages, string publisher) 
         : Publication(a_title,an_author,year_of_pub)
         {
            this-> ISBN = isbn;
            this->pages = num_pages;
            this->publisher = publisher;
         }

    //default constructor
    //initialize member variable in "book" class
    //, Publication() is a call to the constructor of the base class Publication
    // Book() : ISBN(0), pages(0), publisher("") , Publication(){}

    //another way to initialize data that take all default constructor of publication()
    Book(): Publication()
    {
        ISBN = 0;
        pages = 0;
        publisher = "";
    }

// this is overiding inherited function --> one function in the the child replaces another with the same name and signatire in the parent
    void print ()
    {
        Publication :: print();
        cout << "ISBN:  " <<this->ISBN <<endl
             << "pages: " <<this->pages << endl
             << "publisher: "<<this->publisher <<endl;
    }

// this is overloading inherited functions --> separate functions share the same name with different signature
    void print(bool short_print) {
        if (short_print) {
            Publication :: print();
    
        } else {
            Publication :: print();
            cout << "ISBN:  " <<this->ISBN <<endl
             << "pages: " <<this->pages << endl
             << "publisher: "<<this->publisher <<endl;
        }
    }
};
#endif