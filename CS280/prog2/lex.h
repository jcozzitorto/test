#include <iostream>
#include <istream>
#include "tokens.h"

class Lex {
    public:
        std::istream *in;

        char ch;
        TokenType tt;
        string lexeme;
        int *linenum;


    private:
        Token getNextToken(std::istream *in, int *linenum) {
            while (&in->get(ch)) {
                switch(TokenType) {
                    case IDENT:
                        if (isalpha(ch)) {
                            tt = IDENT;
                            lexeme = ch;
                            linenum = 1;
                        }

                    case ICONST:
                        if (isdigit(ch)) {
                            tt = ICONST;
                            lexeme = ch;
                            linenum = 1;
                        }

                    case SCONST:
                        if (isdigit(ch)) {
                            tt = SCONST;
                            lexeme = ch;
                            linenum = 1;
                        }
                    }
            }
        }


};

