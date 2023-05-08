#include "main.h"



/**
 * _strlen - function finds the length of a string
 * @str: this is the pointer to the string
 * Return: length of the string
 */


size_t _strlen(char *str)
{
	size_t dd;

	for (dd = 0; str[dd]; dd++)
		;
	return (dd);
}


/**
 * append_text_to_file - func appends a text at the end of a file.
 * @filename: this is the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fed;
	ssize_t lent;

	if (filename == NULL)
		return (-1);
	fed = open(filename, O_WRONLY | O_APPEND);
	if (fed == -1)
		return (-1);
	if (text_content != NULL)
		lent = write(fed, text_content, _strlen(text_content));
	close(fed);
	if (lent == -1)
		return (-1);
	return (1);


}
