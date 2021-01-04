#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, max = 0;
	scanf("%d", &n);

	float *arr = new float[n]();
	float avg = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%f", &arr[i]);
		if (arr[i] > max) max = arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr[i] / max * 100;
		avg += arr[i];
	}
	printf("%.7f", avg / n);

	return 0;
}
