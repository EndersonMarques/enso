#include <stdio.h>

int main()
{
	double k,i;
	int n;
	i=1.0;
	n=2;
	scanf("%lf", &k);

	while(k > i)
	{
		i = i + (1.0/n);
		if(i <= k) {
			n++;
		}
		//TESTANDO
		//printf("%d %.4lf %.4lf\n", n, k, i);
	}

	printf("%d\n", n);

}
