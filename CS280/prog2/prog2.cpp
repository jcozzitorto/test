#include <iostream>
#include <string>
#include <istream>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {

	//istream in;
	ifstream infile;
	int fileOpen = 0;


	for (int i = 1; i < argc; i++) {
		string arg = string(argv[i]);

		for (int j = 0; j < arg.length(); j++) {
			char ch;
			ch = arg.at(j);
			if ((arg.at(0) == '-') && ((arg.at(1) != 'v') || (arg.at(1) != 's') || (arg.at(1) != 'a'))) {
				j = arg.length() - 1;
				cout << "INVALID FLAG ";
				exit;
			}

			if ((arg.at(0) == '-') && ((arg.at(1) != 'v') || (arg.at(1) != 's') || (arg.at(1) != 'a'))) {
				cout << ch;
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



		for (int k = 0; k < arg.length(); k++) {
			if (arg.at(0) != '-') {
				if ((arg != "-v") && (arg != "-sum") && (arg != "-allids")) {
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


		}



	}
}
}

