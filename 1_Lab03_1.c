#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int x,y,z,prize;
    scanf("%d %d %d",&x,&y,&z);
    
    if (x==y && x==z){
        prize=10000+x*1000;
    }
    else if(x==y||y==z){
        prize=1000+100*y;
    }
    else if (z==x){
        prize=1000+100*z;}

    else{
        int max=x;
        if (y>x&&y>z){
            max=y;}
        if (z>x&&z>y){
            max=z;}
        prize=max*100;
    }
    printf("%d",prize);
    return 0;
}