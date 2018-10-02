#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
#include <map>

using namespace std;

int main (int argc, char *argv[]) {
	
	ifstream infile;
	ostringstream ss;
	string oneline;
	map<string, int> wordList;
	string st = ss.str();
    
	if (argc < 2) {
		cout << "NO PHRASE LENGTH" << endl;
		return 0;
	}
	      
	
    if (atoi(argv[1]) > 0) {
        ;
    }
    
    else if (atoi(argv[1]) <= 0) {
        cout << "INVALID PHRASE LENGTH" << endl;
        return 0;
    }
    
    string str = argv[1];
    
    for (int i = 0; i < str.length(); i++) {
        if (!isdigit(str.at(i))) {
           cout << "INVALID PHRASE LENGTH" << endl;
           return 0;
        }
    }

	if (argv[2] == NULL) {
		cout << "NO MODE" << endl;
		return 0;
	}

	if (string(argv[2]) == "all") {
		;
	}

	else if (string(argv[2]) == "top") {
		;
	}
    
    else { cout << "INVALID MODE" << endl;
          return 0;
         }

	if (argv[3] == NULL)  {
		cout << "NO FILES GIVEN" << endl;
	}

	for (int i = 3; i < argc; i++) {
		string s = argv[i];
		infile.open(s);

		if (!infile.is_open()) {
            cout << "BAD FILE " << s << endl;
        }
            
         else infile.close();
	}

	while (getline(infile, oneline)) {
		ss << oneline ;
	}

	while (cin >> st) {
		wordList[st]++;
	}

}


