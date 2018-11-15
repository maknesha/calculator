#include <stdio.h>
int main() { double a, b; char op; printf("Enter: "); scanf("%lf %c %lf", &a, &op, &b); printf("Result: %.2f\n", op=='+'?a+b:op=='-'?a-b:op=='*'?a*b:op=='/'?a/b:0); return 0; }

