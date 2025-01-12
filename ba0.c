#include <stdio.h>

int	ba0(int a, int b)
{
	int add;
	int sub;
	int mlt;
	double div;

	if (a && b)
	{
		add = a + b;
		printf("%d\n", add);
		sub = a - b;
		printf("%d\n", sub);
		mlt = a * b;
		printf("%d\n", mlt);
		div = a / b;
		printf("%f\n", div);
	}
	return (1);
}

int main(void)
{
	printf("%d", ba0(124, 12));
}
