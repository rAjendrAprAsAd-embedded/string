#include <stdio.h> 
#include <string.h> 
#include <stdbool.h> 
  
int palindrome(char *p,int a, int b) 
{ 
     
    if (*(p+a) != *(p+b)) 
    return 0; 

    if (a<b) 
    return palindrome(p, a+1, b-1); 
  
    return 1; 
} 
  

int main() 
{ 
    char str[] = "abcdedcba"; 
  int b=strlen(str)-1;
    if (palindrome(str,0,b)) 
          printf("Yes"); 
    else
        printf("No"); 
  
    return 0; 
} 
