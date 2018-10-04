#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
#include <map>
#include <iterator>

using namespace std;

int main (int argc, char *argv[]) {
	
	ifstream infile;
	ostringstream ss;
	string oneline;
	map<string, int> wordList;
    
	if (argc < 2) {
		cout << "NO PHRASE LENGTH" << endl;
		return 0;
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
		
		while (getword(infile, oneline)) {
			ss << oneline;
			string st = ss.str();

			wordList[st]++;
		}
	
		if (atoi(argv[1]) > 0) {
       			map<string,int>::iterator it;
			for (it = wordList.begin(); it !=  wordList.end(); it++) {
			cout << it -> first << " " << it -> second << endl;
			}
   		 }

		if (!infile.is_open()) {
            	cout << "BAD FILE " << s << endl;
       		}
            
         	else infile.close();
	}

	/*while (cin >> st) {
		wordList[st]++;
	}*/

}


