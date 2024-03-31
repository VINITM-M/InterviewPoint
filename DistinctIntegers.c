#include<stdio.h>

int main(){
  int m,n;
  scanf("%d %d",&m,&n);
  int a[1001]={0};
  int j;
  for(int i=0;i<m+n;i++){
    scanf("%d ",&j);
    if(a[j]!=1){
      a[j] = a[j] +1;
    }
    else{
      a[j] = a[j];
    }
  }
  for(int i=0;i<1001;i++){
    if(a[i] == 1){
      printf("%d ",i);
    }
  }
}

/*
sample input and output
4 5 
10 20 10 20 
10 20 30 40 50
10 20 30 40 50
*/