#include <iostream>
#include <fstream>
using namespace std;

class LineCount

{
	public:
		std::ifstream file;
		string sl;
		int lc = 0;
		string line;

	int linecount() {
		file.open(sl);

		while (getline(file, line)) {
			lc++;
		}

		return lc;
	}
};
	
