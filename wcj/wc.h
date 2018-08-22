#include <string>

using namespace std;
class WordCount

{

	public:
	int wc;
	std::string word;
	char ch;

	int wordcount();

};

int WordCount::wordcount()
{
	for (std::string::iterator it=word.begin(), it!=word.end(), ++it) {
		if (char(it) == ' ') {
		wc++;
	}
	return wc;
}

int main() {

	WordCount obj1;
	obj1.wordcount();

	return 0;

}
