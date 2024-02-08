#include<stdio.h>
#include<math.h>
int power(int a,int b,int m){
    if(b>0){
        int p=pow(a,b);
        int q=p%m;
        return q;
    }else{
        return 0;
    }
}
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int r=power(x,y,z);
    printf("%d",r);
    return 0;
}