//a C program to find reverse of a string using pointers.
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    char *p1,*p2;
    printf("Enter a String\n");      // enter string 
    gets(str1);
    p1=str1+strlen(str1)-1;
    p2=str2;
    while(p1>=str1)
    {
       *p2=*p1;
        p2++;
        p1--;
    }
    *p2='\0';
    printf("Original String: %s\n",str1);        //print user  string original
    printf("Reverse String: %s",str2);           // print user revers string
    return 0;
}
