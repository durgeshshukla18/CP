#include<stdio.h>
int print(int x){
    if(x>0){
        printf("%d ",x);
        }
     int p=printf("%d,%d",x,print(x-1));
     return p;
    }
int main(){
    int n;
    scanf("%d",&n);
    int a= print(n);
    printf("%d",a);
    return 0;
}
