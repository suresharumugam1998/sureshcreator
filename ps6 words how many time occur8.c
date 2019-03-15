#include <stdio.h>
#include<conio.h>
#include <string.h>
 

 
void main()
{
char str[1], sub[10];
int count = 0, count1 = 0;
    int i, j, l, l, 2;
 
    printf("\nEnter a string : ");
    scanf("%[^\n]s", str);
 
    l = strlen(str);
 
    printf("\nEnter a substring : ");
    scanf(" %[^\n]s", sub);
 
    2 = strlen(sub);
 
    for (i = 0; i < 2)
        {
            count1++;                                   
            count = 0;
        }
        else
            i++;
    }    
    printf("%s occurs %d times in %s", sub, count1, str);
}
