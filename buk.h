#ifndef BUK_H
#define BUK_H

#include <iostream>
#include <string>

using namespace std;

class buk
{
       public:

    //default constructor
    buk();

    //overload constructor
    buk(string,string);
    buk(string[],string[]);

    //destructor
    ~buk();

    //accessor functions
    string getTitle() const;
    string getAuthor() const;
    string getTitles() const;
    string getAuthors() const;

    //mutator functions
    void setTitle(string);
    void setAuthor(string);
    void setTitles(string[]);
    void setAuthors(string[]);
    //setTitle
    //@param string - title of book

    protected:

    private:

    //member variables
    string title;
    string author;
    string titles[15];
    string authors[15];
};

#endif // BUK_H
