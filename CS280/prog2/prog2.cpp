#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main (int argc, char *argv[]) {

	ifstream infile;

	for (int i = 0; i < argc; i++) {
		if (string(argv[i]) == "-v") {
			cout << "-v" << endl;
		}

		else if (string(argv[i]) == "-sum") {
			cout << "-sum" << endl;
		}

		else if (string(argv[i]) == "-allids") {
			cout << "-allids" << endl;
		}

		else infile.open(string(argv[i]));
			if (!infile.good()) {
				cout << "BAD FILE" << endl;
			}
	}
}
