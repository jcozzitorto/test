#include <iostream>
#include <fstream>

using namespace std;

class CharCount

{
	public:
		std::ifstream file;
		string s;
		string ln;
		int ch = 0;

		void countch() {
			file.open(s);
			while (getline(file, ln)) {;
				ch += ln.length();
			}
		cout << "Character count = " << ch << endl;
		}
};
