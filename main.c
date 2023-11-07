#include "pipex.h"
#include <unistd.h>

int	validate_arguments(int argc, const char *infile, const char *outfile);

int	main(int argc, char *argv[])
{
	const char	*infile;
	const char	*outfile;

	infile = argv[1];
	outfile = argv[4];
	if (!validate_arguments(argc, infile, outfile))
		// returned error message

}

int	validate_arguments(int argc, const char *infile, const char *outfile)
{
	if (argc != 5)
		// argc error message
	if (!access(infile, F_OK))
		// infile file error message
	if (!access(infile, R_OK))
		// infile read permission error message
	if (!access(outfile, F_OK))
		// outfile file error message
	if (!access(outfile, W_OK))
		// outfile write permission error message
	return (1);
}

/*
ft_split with space as c for putting all the space-delimited arguments from the main argv[] at index i into the execve
*/