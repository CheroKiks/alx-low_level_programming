#include <stdlib.h>
#include <stdio.h>

/**
 * **strtow - fxn that splits a string into words
 *
 * @str: string to be split
 * Return: pointer to array of strings, or NULL if fail
 */
char **strtow(char *str)
{
	char **a;
	int i, k, n, word_cnt = 0, word_len = 0, curnt_word = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			word_cnt++;
		while (*(str + i) != ' ' && *(str + i))
			i++;
		if (!*(str + i))
			break;
	}
	if (word_cnt == 0)
		return (NULL);
	a = malloc(sizeof(char *) * (word_cnt + 1));
	if (a == NULL)
		return (NULL);
	for (i = 0, k = i; curnt_word < word_cnt; i++, word_len = 0, k = i)
	{
		if (*(str + i) == ' ')
			continue;
		while (*(str + k) != ' ' && *(str + k++))
			word_len++;
		a[curnt_word] = malloc(sizeof(char) * word_len + 1);
		if (!a[curnt_word])
		{
			while (curnt_word-- >= 0)
				free(a[curnt_word]);
			free(a);
			return (NULL);
		}
		for (n = 0; i < k; i++, n++)
			a[curnt_word][n] = *(str + i);
		a[curnt_word++][n] = '\0';
	}
	a[word_cnt] = NULL;
	return (a);
}
