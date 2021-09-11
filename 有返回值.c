#include<stdio.h>

int max(int num_1, int num_2);

int main(void)
{
	int a = 100;
	int b = 200;
	int r;

	r = max(a, b);
	printf("the max is %d", r);
	return 0;
}

int max(int num_1, int num_2)
{
	int result;
	if (num_1 > num_2)
	{
		result = num_1;
	}
	else {
		result = num_2;
	}
	return result;
}
