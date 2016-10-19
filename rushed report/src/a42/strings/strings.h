#ifndef STRINGS_H
#define STRINGS_H

#include<iostream>

class Strings
{
	char *d_str;
	size_t d_size = 0;
	
	void addCapacity(size_t increment);
	
	public:
		Strings(size_t argc, char **argv);
		Strings(char **environ);
		~Strings();
		
		size_t size();
		char *str();
		char *at(size_t index);
		char const *at(size_t index) const;
		
		void addString(std::string newString);
		void addString(char *charArray);
		void setSize(size_t size);
		void setStr(char *str);
};

#endif