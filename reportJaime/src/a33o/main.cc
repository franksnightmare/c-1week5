#include <iostream>
#include "main.h"
#include "strings/strings.h"

using namespace std;

int main(int argc, char **argv)
{
	Strings strings1(argc, argv);
	Strings strings2(environ);
	
	if (strings2.size() >= 5)
		strings1.addString(strings2.at(4));
	
	for (size_t index = 0; index != strings1.size(); ++index)
	{
		cout << strings1.at(index) << '\n';
	}
}
