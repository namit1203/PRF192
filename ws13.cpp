#include <stdio.h>
#include <stdio.h>
float a,b,c,d,min,max;
int main(){
    scanf("%f%f%f",&a,&b,&c);
    min=max=a;
    if(b>a){
        max=b;
    }
    if(c>max){
        max=c;
    }
    if(b<min){
        min=b;
    }
    if(c<min){
        min=c;
    }
    printf("%0.2f %0.2f",min,max);
    if (a>b){
        d=a;
        a=b;
        b=d;
    }
    if(b>c){
        d=b;
        b=c;
        c=d;
    }
    if (a>b){
        d=a;
        a=b;
        b=d;
    }
    printf("\n%0.2f %0.2f %0.2f", a ,b ,c);
    return 0;
    
}
