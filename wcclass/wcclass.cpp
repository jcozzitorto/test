#include <iostream>
#include <string>
#include "wcclass.h"
#include "lcclass.h"
#include "chclass.h"

using namespace std;

int main (int argc, const char *argv[]) {
	WordCount obj1;
	LineCount obj2;
	CharCount obj3;

	std::string s;

	for (int i = 0; i < argc; ++i) {
		obj1.s = std::string(argv[argc - 1]);
		obj2.s = std::string(argv[argc - 1]);
		obj3.s = std::string(argv[argc - 1]);
	}

	obj1.wc();
	obj2.linecount();
	obj3.countch();
}
