#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;
scanf("%d ",&n);
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d ",&a[i][j]);
    }
}
int c=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(a[i][j]!=a[j][i]){
            c++;
        }
    }
}
printf("%d ",c);
}