#include <iostream>
#include <string>
#include <istream>
#include <fstream>
#include "tokens.h"
#include "lex.h"

using namespace std;

int main (int argc, char *argv[]) {


	*istream in;
	ifstream infile;
	int fileOpen = 0;


	for (int i = 0; i < argc; i++) {
		string arg = string(argv[i]);

		for (int j = 0; j < arg.length(); j++) {
			if (((arg.at(0) == '-') && ((arg.at(1) != 'v') && (arg.at(1) != 's') && (arg.at(1) != 'a')))) {
				cout << "INVALID FLAG " << arg << endl;
				return 0;
			}
		}

		if (arg == "-v") {
			;
		}

		else if (arg == "-sum") {
			;
		}

		else if (arg == "-allids") {
			;
		}


		else if ((arg != "-v") && (arg != "sum") && (arg != "-allids")) {
			fileOpen++;
            infile.open(arg);

            if (fileOpen > 2) {
            cout << "TOO MANY FILE NAMES" << endl;
            return 0;
        }

            if (infile.is_open()) {
				infile.close();
			}
			else {
				cout << "UNABLE TO OPEN " << arg << endl;
				return 0;
			}
		}

		else {
			 cout << "INVALID FLAG" << endl;
			 return 0;
		}



	}
}

