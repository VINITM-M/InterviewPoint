#include <stdio.h>

void roate(int a[],int l);

void right_rotate(int a[],int l,int times){
    for(int i=0;i<times;i++){
        roate(a,l);
    }
}
void roate(int a[],int l){
    int t = a[l-1];
    for(int i=l-2;i>=0;i--){
        a[i+1] = a[i];
    }
    
    a[0] = t;
}

int main()
{
    int ar[] = {10,20,30,40,50};
    int l =5;
    right_rotate(ar,l,5);
    for(int i=0;i<l;i++){
        printf("%d ",ar[i]);
    }
}
