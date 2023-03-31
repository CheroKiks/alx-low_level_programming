#include "main.h"

/**
 * cap_string - fxn that capitalizes all words of a string.
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */
char *cap_string(char *s)
{
	int string_count = 0;

	while (s[string_count])
	{
		while (!(s[string_count] >= 'a' && s[string_count] <= 'z'))

			string_count++;
		if (s[string_count - 1] == ' ' ||
		s[string_count - 1] == '\t' ||
		s[string_count - 1] == '\n' ||
		s[string_count - 1] == ',' ||
		s[string_count - 1] == ';' ||
		s[string_count - 1] == ',' ||
		s[string_count - 1] == ',' ||
		s[string_count - 1] == '!' ||
		s[string_count - 1] == '?' ||
		s[string_count - 1] == '"' ||
		s[string_count - 1] == '(' ||
		s[string_count - 1] == ')' ||
		s[string_count - 1] == '{' ||
		s[string_count - 1] == '}' ||
		string_count == 0)
			s[string_count] -= 32;
		string_count++;
	}
	return (s);
}
