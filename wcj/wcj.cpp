#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cctype>

using namespace std;


int main (int argc, char *argv[]) {

	bool bytes = false;
	bool ch = false;
	bool lines = false;
	bool words = false;

	std::ifstream infile;
	std::string s;
	std::string word;
	std::string unused;

	int wc;
	int lc = 0;

	for (int i = 1; i < argc - 1; ++i) {

		if ((std::string(argv[i]) == "-c")) {
			bytes = true;
		}

		if ((std::string(argv[i]) == "-m")) {
			ch = true;
		}

		if ((std::string(argv[i]) == "-l")) {
			lines = true;
		}

		if ((std::string(argv[i]) == "-w")) {
			words = true;
		}

	}

	s = (argv[argc - 1]);
 
	infile.open(s);
	
	infile >> word;
	wc = std::count_if(word.begin(), word.end(), std::isspace);
	

	while (std::getline(infile, unused)) {
		++lc;
	}

	if (argc == 0) {
		cout << "NO ARGUMENTS" << endl;
		return 0;
	}
	
	if ((bytes = false) &&  (ch = false) && (lines = false) && (words = false)) {
		cout << wc << " | " << lc << " | " << s;
	}

	if (words = true) {	
		cout << wc << " | " << s << endl;
	}

	if (lines = true) {

		cout << lc << " | " << s << endl;
	}
}
