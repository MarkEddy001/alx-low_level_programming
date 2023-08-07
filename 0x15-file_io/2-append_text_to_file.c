#include "main.h"

/**
* append_text_to_file - appends text at end of file
* @filename: name of file
* @text_content: content to append
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, le;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
	for (le = 0; *(text_content + le);)
	le++;
		w = write(file, text_content, le);
		if (w == -1)
		{
		close(file);
		return (-1);
	}
	}
	close(file);
	return (1);
}
