#ifndef MAIN_H
#define MAIN_H

int _putchar(char c); 
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _strlen(char *s);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void ch_free_grid(char **grid, unsigned int height);
char **strtow(char *str);

#endif
