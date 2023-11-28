#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int bytes_written;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (bytes_written = 0; text_content[bytes_written]; bytes_written++)
			;

		rwr = write(fd, text_content, bytes_written);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
