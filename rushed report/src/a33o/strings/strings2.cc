#include "strings.ih"

Strings::Strings(char **environ)
:
	d_size(0)
{
	while (*environ != NULL)
	{
		addString(*environ);
	}
}
