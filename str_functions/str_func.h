#ifndef STR_FUNC_H
#define STR_FUNC_H
int _putchar(char c);
int _strlen(const char *s);
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
int _printf(const char *format);
int _strstr2(char *haystack, char *needle);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
unsigned int _strspn(char *s, char *accept);
void print_all(const char * const format, ...);
#endif
