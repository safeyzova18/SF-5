#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, sum = 0;
	float arr[100];
	cin >> n;
	if (n > 2) {
		for (int i = 0; i < n * 2; i++)
		{
			cin >> arr[i];
		}
		for (int i = 3; i < n * 2; i += 2)
		{
			cout << sqrt(((arr[i - 3] - arr[i - 1]) *(arr[i - 3] - arr[i - 1])) + ((arr[i - 2] - arr[i]) * (arr[i - 2] - arr[i]))) << " ";
			sum += sqrt(((arr[i - 3] - arr[i - 1]) *(arr[i - 3] - arr[i - 1])) + ((arr[i - 2] - arr[i]) * (arr[i - 2] - arr[i])));
		}
		for (int i = 0; i < 1; i++)
		{
			cout << sqrt(((arr[i] - arr[(n * 2) - 1]) *(arr[i] - arr[(n * 2) - 1])) + ((arr[i + 1] - arr[n * 2]) * (arr[i + 1] - arr[n * 2]))) << endl;
			sum += sqrt(((arr[i] - arr[(n * 2) - 1]) *(arr[i] - arr[(n * 2) - 1])) + ((arr[i + 1] - arr[n * 2]) * (arr[i + 1] - arr[n * 2])));
		}
		cout << sum;
	}
}
