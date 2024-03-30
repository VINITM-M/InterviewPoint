#include<stdio.h>
#include<string.h>

void swapStrings(char str1[], char str2[]) {
  char temp[strlen(str1) + strlen(str2) + 1]; 

  strcpy(temp, str1);
  strcpy(str1, str2);
  strcpy(str2, temp);
}

int main(){
  char s1[100],s2[100];
  scanf("%s\n%s ",&s1,&s2);
  swapStrings(s1,s2);
  printf("%s\n%s ",s1,s2);
}