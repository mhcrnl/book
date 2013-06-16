#include <iostream>
#include <string>

#include "buk.h"

using namespace std;

buk::buk()
{

}

buk::buk(string bTitle, string bAuthor)
{
    title = bTitle;
    author = bAuthor;
}

buk::buk(string bTitles[], string bAuthors[])
{
    titles[15] = bTitles[15];
    authors[15] = bAuthors[15];
}

buk::~buk()
{

}

string buk::getTitle() const
{
    return title;
}

string buk::getAuthor() const
{
    return author;
}

string buk::getTitles() const
{
    return titles[15];
}

string buk::getAuthors() const
{
    return authors[15];
}


void buk::setTitle(string bTitle)
{
    title = bTitle;
}

void buk::setAuthor(string bAuthor)
{
    author = bAuthor;
}

void buk::setTitles(string bTitles[])
{
    titles[15] = bTitles[15];
}

void buk::setAuthors(string bAuthors[])
{
    authors[15] = bAuthors[15];
}

