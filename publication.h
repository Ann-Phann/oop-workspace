#ifndef PUBLICATION_H
#define PUBLICATION_H
#include <iostream>
using namespace std;

class Publication {
protected:
    string title;
    string author;
    int year;

public:
    Publication (string a_title, string an_author, int year_of_pub){
        this->author = an_author;
        this->year = year_of_pub;
        this->title = a_title;
    }

    Publication(){
        title = "no title";
        author = "no author";
        year = 0;
    }

    void print()
    {
        cout << "tilte: "<< this->title <<endl
             << "author: " << this->author <<endl
             << "year: " <<this-> year<<endl;
    }
};
#endif