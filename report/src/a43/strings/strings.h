#ifndef STRINGS_H
#define STRINGS_H

#include<iostream>

class Strings
{
	char **d_str;
	size_t d_size = 0;
	size_t d_capacity = 1;
	
	void reserve(size_t size);
	
	public:
		~Strings();
		Strings(size_t argc, char **argv);
		Strings(char **environ);
		
		char **str();
		size_t size();
		size_t capacity();
		
		void setStr(char **str);
		void setSize(size_t size);
		void resize(size_t size);
		
		char *at(size_t index);
		char const *at(size_t index) const;
		
		void addString(std::string newString);
		void addString(char *charArray);
		size_t calcCapacity(size_t size);
};

#endif
