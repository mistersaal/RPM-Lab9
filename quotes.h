#ifndef LAB9_QUOTES_H
#define LAB9_QUOTES_H

#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

void checkSymbol(string &quote, bool &opened, char &symbol, list<string> &quotes);

list<string> findQuotes(ifstream &fin);

void printQuotes(list<string> &quotes);

#endif //LAB9_QUOTES_H
