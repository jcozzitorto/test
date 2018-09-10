#include <iostream>
#include <string>
#include "wcclass.h"
#include "lcclass.h"
#include "chclass.h"
#include "fsclass.h"

using namespace std;

int main (int argc, char *argv[]) {

	WordCount Word;
	LineCount Line;
	CharCount Char;
	FileSize File;

	std::string sw;
	std::string sl;
	std::string sc;
	std::string sf;

	std::string fileName;

	bool wc = false;
	bool lc = false;
	bool cc = false;
	bool scc = false;

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

		if ((std::string(argv[i])) == "-f") {
			scc = true;
		}

	Word.sw = std::string(argv[argc - 1]);
	Line.sl = std::string(argv[argc - 1]);
	Char.sc = std::string(argv[argc - 1]);
	File.sf = std::string(argv[argc - 1]);

	fileName = std::string(argv[argc - 1]);
	
	}

	if (wc == true) {
		Word.wc();
		cout << fileName << endl;
	}

	else if (lc == true) {
		Line.linecount();
		cout << fileName << endl;
	}

	else if (cc == true) {
		Char.countch();
		cout << fileName << endl;
	}

	else if (scc == true) {
		File.fs();
		cout << fileName << endl;
	}

	else if ((wc == false) && (lc == false) && (cc == false)) {
		Word.wc();
		Line.linecount();
		Char.countch();
		cout << fileName << endl;
	}

	return 0;
}

