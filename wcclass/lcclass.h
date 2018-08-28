#include <iostream>
#include <fstream>
using namespace std;

class LineCount

{
	public:
		std::ifstream file;
		string s;
		int lc = 0;
		string line;

	void linecount() {
		file.open(s);

		while (getline(file, line)) {
			lc++;
		}

		cout << "Line count = " << lc << endl;
	}
};
	
