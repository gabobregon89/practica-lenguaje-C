#include <stdio.h>
#define  n 8
int main()
{
	int t, a[]={1, 8, 2, 3, 3, 5, 2, 10};
	int i, j, ninterc = 0;
	
	for(i = 0; i < n; i++)
		for(j = n-1; j >= i; j--)
		// if (a[j] < a[j+1]) /* orden ascendente */
		if (a[j] > a[j+1]) /* orden desscendente */
	    {
			t = a[j];
			a[j] = a[j+1];
			a[j+1] = t;
			ninterc++; /* Contador de intercambios */
	    }

		for(i = 0;i < n;i++)
			printf("%d %d \n",i,a[i]);
		printf("Numero de intercambios = %d \n",ninterc);
		return 0;
}