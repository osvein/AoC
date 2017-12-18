#include <math.h>
#include <stdlib.h>

unsigned
calcdist(unsigned in)
{
	if (in > 1) {
		unsigned r, s, off;

		r = (((unsigned)sqrt(in - 1)) + 1) >> 1;
		s = r << 1;
		off = s - 1;
		return abs((in - off * off) % s - r);
	} else {
		return 0;
	}
}
