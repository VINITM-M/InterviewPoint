#include<stdio.h>
#include<string.h>

int main(){
    
    char s[] = "This is my way";
    int i=0,j=0;
    char temp[100];
    for(i=0;i<strlen(s);i++){
        for(j=0;i<strlen(s);i++,j++){
            if(s[i] == ' '){
                break;
            }
            temp[j] = s[i];
        }
        while(j>0){
            j--;
            s[i-j-1] = temp[j];
        }
    }
    printf("%s ",s);
}