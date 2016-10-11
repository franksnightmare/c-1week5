#include "strings.ih"

Strings::Strings(int argc, char **argv)
:
	d_size(argc)
{
	d_str = new char *[argc];
	for (size_t index = 0; index != d_size; ++index)
	{
		d_str[index] = argv[index];
	}
}
