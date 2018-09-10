#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class FileSize
{
	public:
		std::ifstream file;
		std::string sf;
		int size = 0;

		
	
		//std::ifstream::pos_type filesize(const char* file) {
		void fs(){
			file.open(sf);
			std::istream in(file, std::ifstream::ate | std::ifstream::binary);
				size =  in.tellg();
			cout << "File size = " << size << endl;
		}
		
};
