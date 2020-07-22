#include<stdio.h>
#include <stdlib.h>
#include <string.h>

char * stringMerge(const char *s1, const char *s2)
{
    size_t n = strlen(s1);

    char *p = (char *)malloc(n + strlen(s2) + 1);

    if (p)
    {
        strcpy(p, s1);
        strcpy(p + n, s2);
    }

    return p;
}