/*Suppose you have a struct called Person that looks like this:

struct Person {
    std::string name;
    int age;
};
Note: create a Person.h files for this struct. Don't forget to add a Header guardLinks to an external site. to this file.

In a file called function-1-1.cpp, include Person.h and write a function called createPersonArray that takes an integer argument n 
and returns an array of n Person structs. The name and age fields of each struct should be set to "John Doe" and 0, respectively.*/

#include <iostream>
#include "Person.h"
using namespace std; 

Person* createPersonArray(int n) 
{
    //cach 1: define value before put it into array
    Person people;
    people.name = "Jone Doe";
    people.age = 0;

    Person* array = new Person[n];

    //cach 2: put value directly into the array 
    // for (int i = 0; i < n; i++)
    // {
    //     array[i].name = "Jone Doe";
    //     array[i].age = 0;
    // }
    
    for (int i = 0; i < n; i++)
    {
        array[i] = people;
    }
    return array;
}