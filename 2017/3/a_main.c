#include <stdio.h>

unsigned calcdist(unsigned);

int
main(int argc, char **argv)
{
	unsigned in;

	while (scanf("%u", &in) == 1 && printf("%u\n", calcdist(in)) > 0)
		continue;

	if (ferror(stdin) || ferror(stdout)) {
		perror(*argv);
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
