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
	int max = 0;
	
    
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
		for (int j = 3; j < argc; j++) {
			string s = argv[j];
			infile.open(s);
			
				char ch;
				int nextSpace = 0;
				int z = atoi(argv[1]);
				string line;

				while (getline(infile, line)) {
					
						for (int k = 0; k < line.length(); k++) {
							ch = line.at(k);
							if (isalpha(ch)) {
								ch = tolower(line[k]);
							}
							if (isspace(ch)) {
								nextSpace++;
							}
							ss << ch;
						}
				}
				cout << "spaces" << nextSpace;
				
				int nextSpace2 = 0;
				stringstream ss2;
				char chr;
				
				while (nextSpace2 = z) {
					for (int l = 0; l < str.length(); l++) {
						ch = str.at(l);
						if (isspace(ch)) {
							nextSpace2++;
						}
						ss << ch ;
					}
				}
						
						wordList[ss2.str()]++;
				
				
					
				
				
				
			
			
			
			
			
			
			
			
						
			
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

		else if (string(argv[2]) == "top") {
			map<int, vector<string>>bycount;

			map<string, int>::iterator it2;
			for (it2 = wordList.begin(); it2 != wordList.end(); it2++) {
				bycount[it2 -> second].push_back(it2->first);
			}
			

			map<int, vector<string>>::iterator it3;
				for (it3 = bycount.begin(); it3 != bycount.end(); it3++) {
					int size = it3 -> second.size();
			
					for (int m = 0; m < size; m++) {
						;
					}
				}
			
			map<int, vector<string>>::iterator it4;	
				int x = 0;
				int y = 0;
				
				for (it4 = bycount.begin(); it4 != bycount.end(); it4++) {
					int size2 = it4 -> second.size();
						
					for (int n = 0; n < size2; n++) {
						
							x = it4 -> first;
								if (x > y) {
								y = x;
								}	
								
							}
						}
						max = y;
						
			map<string,int>::iterator itr;
			
			for (itr = wordList.begin(); itr != wordList.end(); itr++) {
				if ((itr -> second) == max) {
					cout << itr -> first << " " << itr -> second << endl;
				}
				else;
			}
				
			}
			
			else if ((string(argv[2]) != "all") && (string(argv[2]) != "top")) {
			cout << "INVALID MODE" << endl;
			return 0;
			
			
			
			
			
		}
		
			

		
		}
		
		if (argc < 3) {
			cout << "NO MODE" << endl;
			return 0;
		}

		if (argc < 4) {
			cout << "NO FILES GIVEN" << endl;
			return 0;
		}
	
		if (st.length() < (atoi(argv[1])) || (st.empty())){
					cout << "NO PHRASES" << endl;
					return 0;
				}
			}
		


