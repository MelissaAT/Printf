#ifndef STR_FUNC_H
#define STR_FUNC_H

int _strlen(char *s);
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
unsigned int _strspn(char *s, char *accept);

#endif
