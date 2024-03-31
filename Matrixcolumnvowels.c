#include<stdio.h>
#include<math.h>

int main()
{
int m,n;
scanf("%d %d",&m,&n);
char a[m][n];
char str[2];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        scanf("%s ",&str);
        a[i][j] = str[0];
    }
}

int c=0;
char s;
int mx =-1;
int co =0;
for(int j=0;j<n;j++){
    c=0
    for(int i=0;i<m;i++){
      s = a[i][j];
      if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'){
        c++;
        }
    }
    if(mx < c){
        mx = c;
        co = j;
    }
}
for(int i=0;i<m;i++){
    printf("%c\n",a[i][co]);
}
}