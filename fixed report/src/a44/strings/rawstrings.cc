#include "strings.ih"

string *Strings::rawStrings(size_t amount)
{
	string *ptr = static_cast<string *>(
					operator new(amount * sizeof(std::string)));
	return ptr;
}
