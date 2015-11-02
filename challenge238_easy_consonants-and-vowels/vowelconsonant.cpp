#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>

using namespace std;

int VOWEL[5] = {'A', 'E', 'I', 'O', 'U'};
int CONSONANT[22] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

string problem(string* s);

int main ()
{
	srand (time(NULL));
	string s = "cvcvCvcvcvcVcvcVcvcv";
	cout << problem(&s) << endl;
	return 0;
}

// VERSION 1
string problem(string* s) {
	string out = "";
	int size = s->size();
	for (int i = 0; i < size; ++i)
	{
		int r = rand();
		int a = (*s)[i];
		
		switch(a){
			case 67: // C
				out += char(CONSONANT[r % 22]);
				break;
			case 99: // c
				out += char(CONSONANT[r % 22]+32);
				break;
			case 86: // V
				out += char(VOWEL[r % 5]);
				break;
			case 118: // v
				out += char(VOWEL[r % 5]+32);
				break;
			default: 
				cout << "ERROR, please enter a valid string.";
				return 0;
		}
	}
	//cout << endl << "out: " << out <<endl;
	return out;
}

// VERSION 2
string problem(string* s) {
	string out = "";
	int size = s->size();
	int r, a,  mod, letra = 0;
	for (int i = 0; i < size; ++i)
	{
		r = rand();
		a = (*s)[i];
		letra = 0;
		switch(a){
			case 99: letra += 32;
			case 67: // c
				mod = r % 22;
				letra += CONSONANT[mod];
				break;
			case 118: letra += 32;// V
			case 86: //v
				mod = r % 5;
				letra += VOWEL[mod];
				break;
			default: 
				cout << "ERROR, please enter a valid string.";
				return 0;
		}
		out += char(letra);
	}
	return out;
}