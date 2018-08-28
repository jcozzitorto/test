#include <iostream>
#include <string>
#include "wcclass.h"
#include "lcclass.h"
#include "chclass.h"

using namespace std;

int main (int argc, char *argv[]) {

	WordCount Word;
	LineCount Line;
	CharCount Char;

	std::string sw;
	std::string sl;
	std::string sc;

	bool wc = false;
	bool lc = false;
	bool cc = false;

	for (int i = 0; i < argc; ++i) {
		if ((std::string(argv[i])) == "-m") {
			cc = true;
		}

		if ((std::string(argv[i])) == "-l") {
			lc = true;
		}

		if ((std::string(argv[i])) == "-w") {
			wc = true;
		}

	Word.sw = std::string(argv[argc - 1]);
	Line.sl = std::string(argv[argc - 1]);
	Char.sc = std::string(argv[argc - 1]);
	
	}

	if (wc == true) {
		Word.wc();
		cout << sw << endl;
	}

	else if (lc == true) {
		Line.linecount();
		cout << sl << endl;
	}

	else if (cc == true) {
		Char.countch();
		cout << sc << endl;
	}
}

