#ifndef STRINGS_H
#define STRINGS_H

#include <cstddef>
#include <string>

class Strings
{
	std::string *d_str = new std::string[1];
	size_t d_size = 0;
	
	public:
		Strings(size_t argc, char **argv);
		Strings(char **environ);
		~Strings();
		
		size_t size();
		
		void addString(char *charArray);
		
		std::string at(size_t index);
		std::string const at(size_t index) const;
		
		std::string *rawStrings(size_t amount);
};

#endif
