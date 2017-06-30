#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void odd_index(char *s)
    {
        for(int j=0;j<strlen(s);j++)
            {
                if(j%2!=0)
                printf("%c",s[j]);
          }
}
void even_index(char *s)
    {
        for(int j=0;j<strlen(s);j++)
            {
                if(j%2==0)
                printf("%c",s[j]);
          }
}
int main() {
    char str[10000];
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%s",str);
        even_index(str);
        printf(" ");
        odd_index(str);
        printf("\n");

    }
    return 0;
}
