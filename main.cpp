#include<set>
#include <iostream>
#include <string>
#include <fstream>

#include <map>
#include <list>
using namespace std;


int main(int argc, const char * argv[])
{
	string input;
	map<string, int> wordmap;
	ifstream inStream;
	inStream.open("input.txt");
	//cout << "Enter input of Words " << endl;
	while(inStream >> input)
	{
		++wordmap[input];

	}

	 for (auto p = wordmap.begin(); p!= wordmap.end(); p++)
	    {
	        cout << (*p).first << ": ";
	        cout << p->second << endl;
	    }

	return 0;
}
