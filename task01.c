#include <stdio.h>
int main (void)
{
	float sum, step;
	sum=0;
	step=0.5;
	//printf ("SUM=%f, STEP=%f\n", sum, step);
	while (sum<1)
		{
		//printf ("%f, %f + %f =\n", sum, sum, step);
		sum=sum+step;
		step=step/2;
		}
	printf ("SUM=%f, STEP=%f\n", sum, step);
}
