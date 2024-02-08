#include<stdio.h>
int sum(int x){
    if(x>0){
        int a=x%10;
        int s=a+sum(x/10);
        return s;
    }else{
        return 0;
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int n=sum(num);
    printf("%d",n);
    return 0;
}