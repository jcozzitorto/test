#include <iostream>
#include <istream>
#include "tokens.h"

using namespace std;

Token t(TokenType tt, string lexeme, int *linenum) {

    Token tok(TokenType tt, string, int);

    char ch;

    while (tok.get(ch)) {
        switch (tt) {
            case IDENT:
                if (isalpha(ch)) {
                    tt = IDENT;
                    lexeme = ch;
                    *linenum = 1;
                }

            case ICONST:
                if (isdigit(ch)) {
                    tt = ICONST;
                    lexeme = ch;
                    *linenum = 1;
                }

            case SCONST:
                if (isdigit(ch)) {
                    tt = SCONST;
                    lexeme = ch;
                    *linenum = 1;
                }
            }
        return Token(tt, lexeme, *linenum);
    }
}


