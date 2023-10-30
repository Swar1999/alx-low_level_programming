#include "main.h"
/**
 * read_textfile - read text file and print it to posix stdout
 * @filename: file path
 * @letters: number of letters to be read and print
 * Return: number of letters to be read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_des;/*file descriptor*/
	ssize_t count;/* to count number of letters*/
	char *buff;/*buffer to store data while using read and write functions*/
		if (!filename || !letters)/*file dose not exists*/
			return (0);
		file_des = open(filename, O_RDONLY);/*open file in read only mode*/
		if (file_des == -1)/*failed to creat*/
			return (0);
		buff = malloc(sizeof(char) * (letters + 1));/*allocate buffer size*/
		if (buff == NULL)/*malloc failed*/
		{
			close(file_des);
			return (0);
		}
		count = read(file_des, buff, letters);
		if (count == -1)/*faild to read*/
		{
			close(file_des);
			free(buff);
			return (0);
		}
		count = write(STDOUT_FILENO, buff, letters);
		if (count == -1)/*Faild to write*/
		{
			close(file_des);
			free(buff);
			return (0);
		}
		close(file_des);/*close the file*/
		free(buff);
		return (count);
}
