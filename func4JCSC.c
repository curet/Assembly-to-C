// author:  Jose C. S. Curet | Analyzing func4 binary bomb | Architecture class CCOM-4086
// This is a convertion from the code originally written in Assembly I translated into C language
#include <stdio.h>

int func4(int a, int b, int c) {
int x = c - b;
int y = x >> 0x1f;
    x += y;
    x >>=1;
    y = b + x;
    if (y <= a){
        
        if(y>=a) return y;
        
        else return func4(a,y+1,c) + y;

    }else{return func4(a,b,y-1) + y;}
}
int main(){

    int a,b,c;

    printf("Enter three values\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", func4(a,b,c));
}