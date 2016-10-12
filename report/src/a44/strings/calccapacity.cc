#include "strings.ih"

// Default capacity is 1 so the difference between the doubling point
// and default is 255.
// This number is divisible by 17 resulting in 15 increments
// of 17 before doubling starts at capacity 256.
size_t INCREMENT = 17;
size_t DOUBLING_POINT = 256;

size_t Strings::calcCapacity(size_t size)
{
	if (d_capacity >= DOUBLING_POINT)
	{
		size = ceil(log2(size));
		return 1 << size;
	}
	
	size = ceil((float)size / (float)INCREMENT);
	return size * INCREMENT;
}
