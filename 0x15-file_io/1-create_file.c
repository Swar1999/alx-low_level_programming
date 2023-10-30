#include "main.h"
/**
 * create_file - file that creats a file
 * @filename: file path
 * @text_content: string to be written in file
 * Return:1 if success or -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int file_des;
	unsigned int i;
	ssize_t count = 0, length = 0;
		if (filename == NULL)
			return (-1);
		file_des = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
		if (file_des == -1)
			return (-1);
		for (i = 0; text_content[i] != '\0'; i++)
		{
			length++;
		}
		if (length)
			count = write(file_des, text_content, length);
		close(file_des);
		if (count == length)
			return (1);/*success*/
		else
			return (-1);/*faild*/
}
