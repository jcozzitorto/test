#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

class WordCount
{
	public:
		std::ifstream file;
		string sw;
		string word;
		int count;

		void wc() {
			file.open(sw);
		
			std::istream_iterator<std::string> in{ file }, end;

			cout << "Word count = " << std::distance(in, end) << endl;
		}
};
