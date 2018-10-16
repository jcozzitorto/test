#include <iostream>
#include <string>
#include <istream>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {

	istream *in;
	ifstream infile;

	for (int i = 0; i < argc; i++) {
		string arg = string(argv[i]);
		
		if (arg == "-v") {
			cout << "-v" << endl;
		}

		else if (arg == "-sum") {
			cout << "-sum" << endl;
		}

		else if (arg == "-allids") {
			cout << "-allids" << endl;
		}
		
		else if ((arg != "-v") && (arg != "sum") && (arg != "-allids")) {
			infile.open(arg);
			infile.close();
		}
		
		else in = &cin;
		
		
	}
}

