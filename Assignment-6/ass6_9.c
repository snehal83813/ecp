#include <stdio.h>

int compare(char *x, char *y)
{
    while (*x != '\0' || *y != '\0')
    {
        if (*x == *y)
        {
            x++;
            y++;
        }
        // if they are not equal
        else if ((*x == '\0' && *y != '\0') || (*x != '\0' && *y == '\0') ||
                 *x != *y)
        {
            return 0;
        }
    }
    return 1;
}

int lenght(char *a)
{
    char *b;
    for (b = a; *a; a++)
        ;
    return a - b;
}

char *substring(char *main_string, char *substring) {
    while (*main_string != '\0') {
        char *p = main_string;
        char *q = substring;
        while (*p++ == *q++) {
            if (*p == ' ' || *p == '\0')
               if (*q == '\0') {
                   return main_string;
            }
        }
        main_string++;
    }
    return NULL;
}

void replace_string_add(char *s, char *change_what, char *into_what,
                        int shift)
{
    char *i_pointer = into_what;
    char *c_pointer = change_what;
    char *position = substring(s, change_what);
    while (position != NULL)
    {
        char *end = position;
        while (*end != '\0')
        {
            end++;
        }
        while (end > position)
        {
            *(end + shift) = *end;
            end--;
        }
        while (*into_what != '\0')
        {
            *position++ = *into_what++;
        }
        position = substring(s, change_what);
        into_what = i_pointer;
        change_what = c_pointer;
    }
}

void replace_string_remove(char *s, char *change_what, char *into_what,
                           int shift)
{
    char *i_pointer = into_what;
    char *c_pointer = change_what;
    char *position = substring(s, change_what);
    while (position != NULL)
    {
        char *temp = position;
        while (*(temp + shift) != '\0')
        {
            *temp = *(temp + shift);
            temp++;
        }
        *temp = '\0';
        while (*into_what != '\0')
        {
            *position++ = *into_what++;
        }
        position = substring(s, change_what);
        into_what = i_pointer;
        change_what = c_pointer;
    }
}

void replace_string(char *s, char *change_what, char *into_what)
{
    int shift = lenght(into_what) - lenght(change_what);
    if (compare(change_what, into_what) == 0)
    {
        if (shift >= 0)
        {
            replace_string_add(s, change_what, into_what, shift);
        }
        else
        {
            replace_string_remove(s, change_what, into_what, -shift);
        }
    }
}

int main()
{
    char s[] = "Why is ostring in C so hard",
         change_what[] = "string",
         into_what[] = "pointers";
    replace_string(s, change_what, into_what);
    printf("\"%s\"", s);
    return 0;
}

