#include "main.h"

/**
 * _memcpy - function that copies memory area
 *@dest: dest
 *@src: source
 *@n: int
 *
 * Return: char
 */
void *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                dest[i] = src[i];
        }
        return (dest);
}
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr:  pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * using code from previous projects
 * Return: pointer to the newly allocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
        char *ptr1, *p;
        unsigned int i;

        if (ptr != NULL && new_size == 0)
        {
                free(ptr);
                return (NULL);
        }
        if (new_size == old_size)
                return (ptr);
        if (ptr == NULL)
        {
                p = malloc(new_size);
                return (p);
        }
        if (new_size > old_size)
        {
                p = malloc(new_size * sizeof(char));
                ptr1 = ptr;
                for (i = 0; i < old_size; i++)
                        p[i] = ptr1[i];
                free(ptr);
                return (p);
        }
        return (ptr);
}
/*
* _reallocc - reallocation for two ptrs
* @ptr: ptr
* @old_size: size in bytes
* @new_size: new size in bytes
* return: ptr on success or NULL on failure
* using code from prev projects
*/
char **_reallocc(char **ptr, unsigned int old_size, unsigned int new_size)
{
    char **new;
    unsigned int i;

    if (ptr == NULL)
        return (malloc(sizeof(char *) * new_size));

    if (new_size == old_size)
        return (ptr);

    new = malloc(sizeof(char *) * new_size);
        if (new == NULL)
            return (NULL);

        for (i = 0; i < old_size; i++)
            new[i] = ptr[i];

        free(ptr);

        return (new);
}