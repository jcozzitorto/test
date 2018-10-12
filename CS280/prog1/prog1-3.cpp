#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <sstream>
#include <map>
#include <iterator>
#include <vector>

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
    	
    	
	
	if (atoi(argv[1]) > 0) {
		for (int i = 3; i < argc; i++) {
			string s = argv[i];
			infile.open(s);
			
			while (infile >> st) {
				for (int j = 0; j < st.length(); j++) {
					st.at(j) = tolower(st.at(j));
				}
				wordList[st]++;
			}
			
			if (!infile.is_open()) {
            			cout << "BAD FILE " << s << endl;
       			}
            
			else infile.close();	
		}
		
			
		map<string,int>::iterator it;
				
		if (string(argv[2]) == "all") {
			for (it = wordList.begin(); it != wordList.end(); it++) {
			cout << it -> first << " " << it -> second << endl;
			}
		}

		if (string(argv[2]) == "top") {
			map<int, vector<string>>bycount;

			map<string, int>::iterator it2;
			for (it2 = wordList.begin(); it2 != wordList.end(); it2++) {
				bycount[it2 -> second].push_back(it2->first);
			}
			

			map<int, vector<string>>::iterator it3;
				for (it3 = bycount.begin(); it3 != bycount.end(); it3++) {
					int size = it3 -> second.size();
			
					for (int j = 0; j < size; j++) {
						//cout << it3 -> second[j] << " " << it3 -> first << endl;
						;
					}
				}
			
			map<int, vector<string>>::iterator it4;	
				int x = 0;
				int y = 0;
				
				for (it4 = bycount.begin(); it4 != bycount.end(); it4++) {
					int size2 = it4 -> second.size();
						
					for (int l = 0; l < size2; l++) {
						
							x = it4 -> first;
								if (x > y) {
								y = x;
								}	
							}
						}
						cout << it4 -> second[x] << " " << it4 -> first << endl;
				}
		
	
			
		else if (string(argv[2]) == "top") {
			;
		}		

		else if ((string(argv[2]) != "all") && (string(argv[2]) != "top")) {
			cout << "INVALID MODE" << endl;
			return 0;
		}
		
		if (argv[2] == NULL) {
		cout << "NO MODE" << endl;
		return 0;
	}

	if (argv[3] == NULL)  {
		cout << "NO FILES GIVEN" << endl;
        return 0;
	}
	
	if (st.length() < (atoi(argv[1])) || (st.empty())){
					cout << "NO PHRASES" << endl;
					return 0;
				}
			
    		
	}
}


