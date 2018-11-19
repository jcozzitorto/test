#include <iostream>
#include <fstream>

using namespace std;

class CharCount
{
	public:
		std::ifstream file;
		string sc;
		string line;
		int charCount = 0;

		void ch() {
			file.open(sc);
			while (getline(file, ln)) {;
				ch += line.length()
