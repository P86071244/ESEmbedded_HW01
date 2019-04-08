#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int (*FunPtr[])(int a,int b)={};

int main()
{
 int a, b, result;
 int function;
 printf("Enter function you want\n");
 printf("0: Plus, 1: Minus, 2: Multiply, 3: Divided\n");
 FunPtr[0] = plus;
 FunPtr[1] = minus;
 FunPtr[2] = multiply;
 FunPtr[3] = divided;
 printf("EX: 1 function 1\n");
 scanf("%d %d %d",&a,&function,&b);
     
 if((function >= 0) && (function<=3))
 {
  result=(*FunPtr[function])(a, b);
 }
 printf("a=%d , function=%d , b=%d, result=%d\n",a,function,b,result);
 return 0;
}
