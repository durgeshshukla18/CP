#include<stdio.h>
int factorial(int x){
    if(x>=1){
        int fact=x*factorial(x-1);
        return fact;
    }else{
        return 1;
    }
}
int main(){
    int a;
    scanf("%d",&a);
    int f=factorial(a);
    printf("%d",f);
    return 0;
}
