#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include "buk.h"

using namespace std;


void fillVector(vector<buk>& newBVec);//user input into vector
void insertTitles(vector<buk>& newBVec);//what's hardcoded into vector
double randPrice(double low, double high);//retrieves a random double for price
int myrandom (int i);//random to pair with shufflee() to get random strings
void clear();//frees console clutter


int main()
{
    srand((unsigned)time(NULL));
    buk book;
    vector<buk> bVec;//vector to store all books
    vector<buk>::iterator it;
    cout << "Hello world! Today is a great day for reading!" << endl;
    insertTitles(bVec);
    fillVector(bVec);
    random_shuffle ( bVec.begin(), bVec.end() ); //to randomize the string
    random_shuffle ( bVec.begin(), bVec.end(), myrandom);

    cout << "There are "<< bVec.size() << " titles in the database" << "\n";
    cout << "You should read: " << bVec.at(0).getTitle() << "\n";
    cout << "Author: " << bVec.at(0).getAuthor() << "\n";
    cout << "retail price: $" << randPrice(5.00,15.99) << "\n" << "\n";
    cout << "You should read: " << bVec.at(1).getTitle() << "\n";
    cout << "Author: " << bVec.at(1).getAuthor() << "\n";
    cout << "retail price: $" << randPrice(5.00,15.99) << "\n" << "\n";
    cout << "You should read: " << bVec.at(2).getTitle() << "\n";
    cout << "Author: " << bVec.at(2).getAuthor() << "\n";
    cout << "retail price: $" << randPrice(5.00,15.99) << "\n" << "\n";

    return 0;
}

void insertTitles(vector<buk>& newBVec)
{

 string bTitles[15] = {"The Bell Jar","1984","Clockwork Orange","On the Road",
      "The Great Gatsby","Wuthering Heights", "Handmaiden's Tale", "Jane Eyre","Wide Sargasso Sea"
      ,"Animal Farm","The Picture of Dorian Gray","The Hitchhiker's Guide to the Galaxy"
      ,"The Adventures of Tom Sawyer", "Lolita","Mrs.Dalloway"};

      string bAuthors[15] ={"Sylvia Plath","George Orwell","Anthony Burgess"," Jack Kerouac","F. Scott Fitzgerald"
      ,"Ellis Bell","Margaret Atwood","Currer Bell","Jean Rhys","George Orwell","Oscar Wilde","Adam Douglas"
      ,"Mark Twain","Vladimir Nabokov","Virgnina Wolf"};

for(int i = 0; i < 15; i++)
{
    buk newBooks(bTitles[i],bAuthors[i]);
    newBVec.push_back(newBooks);
}
cout << "Pulled titles and authors from database" << "\n";

}
void fillVector(vector<buk>& newBVec) //adds user input to vector
{

    string bTitle, bAuthor;
    for (int i = 0; i < 10; i++)
    {
      cout << "Please enter a book title: ";
      getline(cin, bTitle);
      cout << "Please enter author name: ";
      getline(cin, bAuthor);
      cout << "\n";

      buk newBook(bTitle,bAuthor);
      newBVec.push_back(newBook); //adds to vector
      cout << "\n";
    }
      clear();
      cout << "Titles sucessfully saved";
      cout << "\n";
}

double randPrice(double low, double high)
{//randomizes price
    double num1;
    double range=(high-low);
    double num = rand() * range / RAND_MAX + low ;
    num1 = floor(100*num + 0.5) / 100;
    return(num1);
}

int myrandom (int i)
{
    return rand()%i; //to randomize string
}

void clear()
{ //free up clutter
    int a = 1;
    int b = 100;
    do
    {
        printf("\n");
        a++;
    }
    while( a < b );
}
