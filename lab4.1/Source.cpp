#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	 i = 19;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	k = N;
	while (k <= i)
	{
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
		k++;
	}
	cout << S << endl;
		S = 0;
	k = N;
	do {
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
		k++;
	} while (k <= i);
	cout << S << endl;
	S = 0;
	for (k = N; k <= i; k++)
	{
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
	}
	cout << S << endl;
	S = 0;
	for (k = i; k >= N; k--)
	{
		S += sqrt(sin(k) * sin(k) + cos(N / k) * cos(N / k));
	}
	cout << S << endl;
	return 0;
}