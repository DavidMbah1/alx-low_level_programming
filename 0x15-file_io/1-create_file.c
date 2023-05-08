#include "main.h"


/**
 * create_file - function creates an array of chars, and initializes
 * @text_content: this is the  is a NULL
 * terminated string to write to the file
 * @filename: this is the name of the file to create
 * Return: 1 on success, -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	int oh, wh, lent = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lent = 0; text_content[lent];)
			lent++;
	}

	oh = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wh = write(oh, text_content, lent);

	if (oh == -1 || wh == -1)
		return (-1);

	close(oh);

	return (1);


}
