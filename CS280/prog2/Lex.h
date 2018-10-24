#include <iostream>
#include "tokens.h"

Token getNextToken(istream *in, int *linenum) {

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
}
