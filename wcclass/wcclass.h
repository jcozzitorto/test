#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

class WordCount
{
	public:
		std::ifstream file;
		string s;
		string word;
		int count;

		void wc() {
			file.open(s);
		
			std::istream_iterator<std::string> in{ file }, end;

			cout << "Word count = " << std::distance(in, end) << endl;
		}
};
