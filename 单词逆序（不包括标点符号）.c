#include <stdio.h>
#include <string.h>

void restr(char *start, char *end)
{
    char c, *p, *q;
    p = start;
    q = end;

    unsigned int half;
    half = (q - p) / 2;

    while (p <= start + half)
    {
        c = *p;
        *p = *q;
        *q = c;

        p++;
        q--;
    }
}

int main(void)
{

    char a[20], *p, *start, *end;
    int b = 0;

    gets(a);
    p = start = end = a;

    while (*p)
    {
        if (*p == ' ' || *(p + 1) == '\0')
        {
            if(*(p + 1) == '\0')
                end++;
            restr(start, end);
            b = 0;
        }
        else
        {
            if (b == 0)
                start = p;
            end = p;
            b = 1;
        }
        p++;
    }

    printf("%s\n", a);

    return 0;
}
