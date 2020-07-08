#include "quotes.h"

using namespace std;

void checkSymbol(string &quote, bool &opened, char &symbol, list<string> &quotes) {
    if (opened || symbol == '"') {
        quote += symbol;
    }
    if (symbol == '"') {
        if (opened) {
            quotes.push_back(quote);
            quote = "";
        }
        opened = !opened;
    }
}

list<string> findQuotes(ifstream &fin) {
    char symbol;
    bool opened = false;
    string quote;
    list<string> quotes;
    while (!fin.eof()) {
        symbol = fin.get();
        checkSymbol(quote, opened, symbol, quotes);
    }
    return quotes;
}

void printQuotes(list<string> &quotes) {
    for (string &quote : quotes) {
        cout << quote << endl;
    }
}
