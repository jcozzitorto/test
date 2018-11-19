#include <iostream>
#include <fstream>

using namespace std;

class LineCount
{
	public:
		std::ifstream file;
		string sl;
		int lineCount = 0;
		string line;

		void lc() {
			file.open(sl);

			while (getline(file, line)) {
				lineCount++;
			}

			cout << "Line count = " << lineCount << endl;
		}
};
