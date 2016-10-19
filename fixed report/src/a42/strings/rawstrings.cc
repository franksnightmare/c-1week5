#include "strings.ih"

string *Strings::rawStrings(size_t amount)
{
	string *str = new string[amount];
	return str;
}
