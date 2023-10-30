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
		if (filename == NULL || letters == 0)/*file dose not exists*/
			return (0);
		file_des = open(filename, O_RDONLY);/*open file in read only mode*/
		if (file_des == -1)/*failed to creat*/
			return (0);
		buff = malloc(sizeof(char) * letters);/*allocate buffer size*/
		if (buff == NULL)/*malloc failed*/
			return (0);
		count = read(file_des, buff, letters);
		if (count == -1)/*faild to read*/
			return (0);
		count = write(STDOUT_FILENO, buff, letters);
		if (count == -1)/*Faild to write*/
			return (0);
		write(1, buff, count);/*write to stander output*/
		free(buff);
		close(file_des);/*close the file*/
		return (count);
}
