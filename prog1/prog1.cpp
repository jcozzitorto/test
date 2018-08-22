#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <algorithm>
#include <sstream>
#include <ctype.h>

using namespace std;

int main(int argc, char *argv[]){

	std::ifstream file;
	std::string fc;
	std::stringstream buf; 

	string::iterator itr;

	bool quiet = false;
	bool squish = false;
	bool censor = false;
	bool print = false;
	bool length = false;

	bool open = false;

	std::string s;
	std::string word;;
	
	int count = 1;

	for (int i = 1; i < argc-1; ++i) {

		if (std::string(argv[i]) == "-q"){
			quiet = true;
		}

		else if (std::string(argv[i]) == "-s"){
			squish = true;
		}

		else if (std::string(argv[i]) == "-c"){
			censor = true;
		}

		else if (std::string(argv[i]) == "-p"){
			print = true;
		}

		else if (std::string(argv[i]) == "-l"){
			length = true;
		}

		else cout << " INVALID FLAG" << endl;
			
	
	
	}	
	
	s = (argv[argc-1]);

	file.open(s);	

	if (file.is_open()){
	open = true;
	}

	else {
		cout << s << " CANNOT OPEN" << endl;
		return 0;
		}

	if (print == true) {
		while (!file.eof()) 
	{
			file >> word;
			count++;
		}
		
		cout << "Word count = " << count << endl;
	}

	if (length == true) {
		std::for_each(std::istream_iterator<std::string>(file), std::istream_iterator<std::string>(), [&](std::string const &file) {
		cout << file << " " << file.size();
		++count;
 	});
	}

	if (squish == true) {
		buf << file.rdbuf();
		fc = buf.str();
		fc.erase(std::remove(fc.begin(), fc.end(), ' '), fc.end());
		cout << fc << endl;
	} 

/*	if (censor == true) {
		buf << file.rdbuf();
		fc = buf.str();
		
		itr = find(fc.begin(), fc.end(), (('a' <= letter && letter <= 'z') && ('A' <= letter && letter <= 'Z')));
		fc.erase(itr, itr+10);
		cout << fc << endl;
	} */

	if ((squish == true) && (quiet == true)){
		cout << "CONFLICTING FLAGS" << endl;
		return 0;
	}

	if ((censor == true) && (quiet == true)){
		cout << "CONFLICTING FLAGS" << endl;
		return 0;
	}

	return 0;

}
