#include<stdio.h>
int main(){
	int a ,b,temp;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping:");
	printf("first number:%d\n",a);
	printf("second number:%d\n",b);
	return 0;
}
