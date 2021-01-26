#include <stdlib.h>
#include <stdio.h>

int is_palindrome(char *str)
{
    char *ptr=strlwr(str);

    while(*ptr!='\0')
    {
        ptr++;
    }
    
    while(*str!='\0')
    {
        if(*str++!=*--ptr)
        {
            return 0;
        }
    }
    return 1;
    
}

#ifndef RunTests
int main()
{
    char *str = "Deleveled";
    printf("%d", is_palindrome(str));
}
#endif
