#include <stdio.h>
#include <math.h>
float a,b,c,S1,p,prmt;
int main(){
    scanf("%f%f%f",&a,&b,&c);
    if((a+b >c) &&(a+c>b) &&(c+b>a)){
        p= (a+b+c)/2;
        S1 = sqrt(p*(p-a)*(p-b)*(p-c));
        prmt=a +b + c;
        printf("\nPerimeter = %0.4f", prmt);
        printf("\nArea = %0.4f",S1);
    }
    else {
        printf("a, b, c are not sides of a triangle.");
    }
    return 0;
}
