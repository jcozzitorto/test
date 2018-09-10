#include <iostream>
#include <fstream>

using namespace std;

class CharCount

{
	public:
		std::ifstream file;
		string sc;
		string ln;
		int ch = 0;

		int countch() {
			file.open(sc);
			while (getline(file, ln)) {;
				ch += ln.length();
			}
		return ch;
		}
};
