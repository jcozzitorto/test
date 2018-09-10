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
		int wordcount = 0;
		int count;

		int wc() {
			file.open(sw);
		
			std::istream_iterator<std::string> in{ file }, end;

			wordcount =  std::distance(in, end);
			return wordcount;
		}
};
