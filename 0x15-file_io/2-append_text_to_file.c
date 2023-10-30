#include "main.h"
/**
 * append_text_to_file - function that appand text to the end
 * @filename:file path
 * @text_content: text to be appand to the end of file
 * Return: 1 if success and -1 if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	unsigned int i;
	int file_des;
	ssize_t count = 0, length;
		if (filename == NULL)
			return (-1);
		file_des = open(filename, O_WRONLY | O_APPEND);
		if (file_des == -1)
			return (-1);
		for (i = 0; text_content[i] != '\0'; i++)
		{
			length++;
		}
		if (length)
			count =  write(file_des, text_content, length);
		close(file_des);
		if (count == length)
			return (1);
		else
			return (-1);
}
