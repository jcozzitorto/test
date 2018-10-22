#include <iostream>
#include <istream>
#include "tokens.h"

class Lex {
    public:
        std::istream &in;

        TokenType tt;
        string lexeme;
        int *linenum;


    private:
        Token getNextToken(std::istream *in, int *linenum) {
            while (!*in->get()) {
                if (isalpha) {
                    tt = IDENT;
                    lexeme = 'a';
                    linenum = 1;
                }
            }
            return Token;
        }


};

