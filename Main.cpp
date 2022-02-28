#include "shunting-yard.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>
#include <map>

using namespace std;
 
/** Initalize operatorPrecedence Map. Note that associativity is always left to right. */
void operatorPrecedenceInit(map <const string, const int> &operatorPrecedence) {
    operatorPrecedence.insert(pair<string, int> ("*", 2));
    operatorPrecedence.insert(pair<string, int> ("/", 2));
    operatorPrecedence.insert(pair<string, int> ("%", 2));

    operatorPrecedence.insert(pair<string, int> ("+", 1));
    operatorPrecedence.insert(pair<string, int> ("-", 1));

    operatorPrecedence.insert(pair<string, int> ("(", 0));
    operatorPrecedence.insert(pair<string, int> ("[", 0));
    operatorPrecedence.insert(pair<string, int> ("{", 0));
    
    operatorPrecedence.insert(pair<string, int> (")", -1));
    operatorPrecedence.insert(pair<string, int> ("]", -1));
    operatorPrecedence.insert(pair<string, int> ("}", -1));
}

int main(int argc, char* argv[]) {
    // File Input/Output
    ifstream in(argv[1]);
    ofstream out(argv[2]);

    /** 
     *  Map legal operators that can be used with this algorithm with their respective precedence numbers.
     * 
     *  *, /, % have precedence 2 (highest)
     *  +, - have precedence 1 (lowest)
     *  
     *  Opening (, [, { have precedence 0 which serves as a wild card. 
     *       - They will always be placed in the stack without checking the previous token.
     *       - If the top of the stack is a wild operator, anything can be placed on top.
     * 
     *  Closing ), ], } have precedence -1 which will help us balance the expression.
    */
    map <const string, const int> operatorPrecedence;
    operatorPrecedenceInit(operatorPrecedence);

    // Iterator Object
    map <const string, const int>::iterator itr = operatorPrecedence.begin();
 
}