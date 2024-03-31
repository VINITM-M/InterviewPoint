

#include <stdio.h>

void rotatearray(int a[],int l);   //Prototype function or else implicit function declaration

void rotateleft(int a[],int l,int times){
    for(int i=0;i<times;i++){
        rotatearray(a,l);
    }
}

void rotatearray(int a[],int l){
    int t = a[0];
    for(int i=0;i<l-1;i++){
        a[i] = a[i+1];
    }
    a[l-1] = t;
}

int main()
{
    int ar[] = {10,20,30,40,50};
    int l =5;
    rotateleft(ar,l,5);
    
    for(int i=0;i<l;i++){
        printf("%d ",ar[i]);
    }
}
