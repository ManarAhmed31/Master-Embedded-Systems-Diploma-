#include <stdio.h>

int main() {
	char o;
	float a,b,x;


	printf("Enter an operator (+ , - , * , / ): ");
	fflush(stdout);
	scanf("%c", &o);

	printf("Enter two operands : ");
	fflush(stdout);
	scanf("%f %f",&a,&b);
	switch(o)
	{
	case '+':
		x=a+b;
		printf("%f + %f =  %f ",a,b,x);
		break;
	case '-':
		x=a-b;
		printf("%f - %f =  %f",a,b,x);
		break;
	case '*':
		x=a*b;
		printf("%f x %f =  %f",a,b,x);
		break;
	case '/':
		x=a/b;
		printf("%f / %f =  %f",a,b,x);
		break;
	}

	return 0;
}
