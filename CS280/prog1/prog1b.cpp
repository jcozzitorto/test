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
	string st;
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
	
	if (atoi(argv[1]) > 0) {
		for (int i = 3; i < argc; i++) {
			string s = argv[i];
			infile.open(s);
			
			while (infile >> st) {
				wordList[st]++;
			}
			
			if (!infile.is_open()) {
            	cout << "BAD FILE " << s << endl;
       		}
            
			else infile.close();
			
			
		}
		
			
       		if (st.length() < (atoi(argv[1])) || (st.empty())){
					cout << "NO PHRASES" << endl;
					return 0;
				}
				map<string,int>::iterator it;
				for (it = wordList.begin(); it != wordList.end(); it++) {
				cout << it -> first << " " << it -> second << endl;
				}			

			
    		
	}
	

}
