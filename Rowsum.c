
#include <stdio.h>

int main()
{
    int n =5 ,m=6;
    int sum = n;
    int  t =0;
    for(int i=0;i<m;i++){
        int a[100] = {0};
        int ind =0;
        while(sum){
            a[ind] = sum%10;
            sum = sum/10;
            ind++;
        }
        int i = ind-1;
        for(int k=0;k<n;k++){
            printf("%d",a[i]);
            t = t+a[i];
            if(i==0){
                i = ind;
            }
            i--;
        }
            sum = t;
            t =0;
    printf("\n");
    }
    
    
}
