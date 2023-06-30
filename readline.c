#include "main.h"

/**
* _readline - reads str input
* @i: return getline function
* return: input
*/
char *_readline(int *i)
{
    char *in = NULL;
    size_t buff = 0;

    *i = getline(&in, &buff, stdin);
    return (in);
}