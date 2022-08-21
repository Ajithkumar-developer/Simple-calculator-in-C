#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	float n1, n2, n3;
	char op;
	printf("Enter the operation : ");
	scanf("%f %c %f", &n1, &op, &n2);
	switch(op)
	{
		case '/' : n3 = n1/n2;
			break;
		case '*' : n3 = n1*n2;
			break;
		case '-' : n3 = n1-n2;
			break;
		case '+' : n3 = n1+n2;
			break;
		case '^' : n3 = pow(n1,n2);
			break;
		default : goto fail;
			
	}
	printf("\n\n%.2f %c %.2f = %.2f", n1, op, n2, n3);
	goto exit;
	fail:
		printf("Fail...\n");
	exit:
		return 0;
	
}
