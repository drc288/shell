#ifndef _HEAD_H_
#define _HEAD_H_
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

#define DELIM " \t\r\n\a"

/* GET ENV */
extern char **environ;

/* FUNCTIONS STR */
int _strlen(char *s);
void print_line(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);


/* ARGC | ARGV | FREE | EXEC | ERROR */
int argc(char *str);
char **argv(char *line, int argument_count);
char *clean_line(char *line);
void free_double_pointer(char **argv, int argc);
void *interactive(char *interactive_str, char *line);
char *create_path_extension(char *cmd, char **argv, int argc);
char *get_route_bin(char *path, char *token);
char *get_path();


#endif
