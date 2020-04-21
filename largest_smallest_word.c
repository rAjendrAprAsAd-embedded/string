#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char string[100], word[20], max[20], min[20], c;
    int i = 0, j = 0, k = 0;
 
    printf("Enter string: ");
    i = 0;
scanf("%[^\n]s",string);
  /*  do
    {
        fflush(stdin);
        c = getchar();
        string[i++] = c;
 
    } while (c != '\n');

    string[i - 1] = '\0';*/

    for (i = 0; i < strlen(string); i++)
    {
        while (i < strlen(string) && string[i]!=' ' && isalnum(string[i]))
        {
            word[j++] = string[i++];
        }
	word[j] = '\0';

        if (j > 0)
        {
           
            if (!k)
            {
                k++;
                strcpy(max, word);
                strcpy(min, word);
            }

            if (strlen(word) > strlen(max))
            {
                strcpy(max, word);
            }
            if (strlen(word) < strlen(min))
            {
                strcpy(min, word);
            }
            j = 0;
        }
    }
    printf("The largest word is '%s' and smallest word is '%s' in '%s'.\n", max, min, string);
 
    return 0;
}
