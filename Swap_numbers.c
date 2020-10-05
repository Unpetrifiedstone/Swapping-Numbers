#include<stdio.h>
main(){
	int a,b,c,d;
	printf("Enter 2 numbers to be swapped please: ");
    scanf("%d %d", &a, &b);
    printf("Numbers before swap: a=%d, b=%d", a, b);
    c=a*b/a;
    d=a*b/b;
    printf("\n After swap: a=%d, b=%d", c, d);
    return 0;
}
