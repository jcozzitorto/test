#include <iostream>
#include <string>
#include <fstream>
#include "WordCount.h"
#include "LineCount.h"

using namespace std;

int main (int argc, char *argv[]) {
	WordCount Word;
	LineCount Line;

	std::string sw;
	std::string sl;
	std::string fileName;

	bool wc = false;
	bool lc = false;

	for (int i = 0; i < argc; ++i) {
		if (std::string(argv[i]) == "-w") {
			wc = true;
		}

		if (std::string(argv[i]) == "-l") {
			lc = true;
		}

		Word.sw = std::string(argv[argc - 1]);	
		Line.sl = std::string(argv[argc - 1]);

		fileName = std::string(argv[argc - 1]);
	}

	if (wc == true) {
		Word.wc();
		cout << fileName << endl;
	}

	else if (lc = true) {
		Line.lc();
		cout << fileName << endl;
	}

}
