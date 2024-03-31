

#include <stdio.h>
#include<string.h>

int main()
{
    char s[] = "abcdabcd";
    int len =strlen(s);
    int a[10001] = {0};
    for(int i=0;i<len;i++){
        a[s[i]]++;
    }
    int mx =1;
    int index = 0;
    while(mx!=0){
        mx=0;
        for(int i=63;i<123;i++){
            if(mx<a[i]){
                mx = a[i];
                index = i;
            }
        }
        a[index] =0;
        for(int i=0;i<mx;i++){
            printf("%c",index);
        }
    }
    
    }
