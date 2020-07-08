#include <fstream>
#include "quotes.h"

using namespace std;

int main() {
    ifstream fin("../input.txt");
    list<string> quotes = findQuotes(fin);
    printQuotes(quotes);
    return 0;
}
