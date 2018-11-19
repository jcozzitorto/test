#include <iostream>
#include <map>
#include <sstream>
#include "tokens.h"

using namespace std;

Token getNextToken(istream *in, int *linenum) {

	//map<TokenType, string, int> tMap;

	enum State {BEGIN, IDENT, ICONST, SCONST};
	State state = BEGIN;
	string lexeme;
	char ch;

	while (in->get(ch)) {

		if (ch == '\n') {
			(*linenum++);
		}

		switch(state) {
			case BEGIN:
				if(isspace(ch)) {
					continue;
					lexeme = ch;
				}

			case IDENT:
				if (isalpha(ch)) {
					state = IDENT;
				}

			case ICONST:
				if (isdigit(ch)) {
					state = ICONST;
				}

			case SCONST:
				if (ch == '"') {
					state = SCONST;
				}
		}
	}
	return getNextToken(in, linenum);
}
