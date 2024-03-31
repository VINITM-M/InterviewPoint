
#include <stdio.h>
#include <string.h>
#include<stdlib.h>

char* conacte(char *s1,char *s2){
    int n= strlen(s1);
    int m= strlen(s1);
    int size  = m+n+1;
    char *s = calloc(size,sizeof(char));
    for(int i=0;i<n;i++){
        s[i] = s1[i];
    }
    for(int i=0;i<m;i++){
        s[n+i] = s2[i];
    }
    return s;
    
}

int main()
{
char s1[100],s2[100];
scanf("%s %s",s1,s2);
char *s =  conacte(s1,s2);
free(s);
printf("%s ",s);
}
