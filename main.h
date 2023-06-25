#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

int _printf(const char *format, ...);
int print_string(char *x);
int put_char(char x);
int print_int(int x);
int print_in_binary(unsigned int x);


#endif
