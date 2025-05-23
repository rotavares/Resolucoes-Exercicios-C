#include <stdio.h>
#define N 10
int main()
{
	float vetor[N];
	float temp;
	for (int i = i; i < N; i++)
	{
		scanf("%f", &vetor[i]);
	}
	for (int i = 0; i < N; i++)
	{
		printf("%.2f ", vetor[i]);
	}
	printf("\n");
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (vetor[j] > vetor[j+1])
			{
				temp = vetor[j];
				vetor[j] = vetor[j+1];
				vetor[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		printf("%.2f ", vetor[i]);
	}
	return 0;
}
