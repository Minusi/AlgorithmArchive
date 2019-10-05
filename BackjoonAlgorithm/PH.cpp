#include <iostream>
#include <algorithm>
using namespace std;

//#define DEBUG
#ifdef DEBUG
#include <chrono>
#include "Utility.h"

chrono::system_clock::time_point Start;
chrono::nanoseconds Time;
#endif



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	
	int DP[50001];
	
	for (int i = 0; i <= N; ++i)
		DP[i] = i;

	for (int i = 2; i <= N; ++i)
	{
		for (int j = 2; j <= i; ++j)
		{
			if (j * j > i)
				break;

			DP[i] = min(DP[i], DP[i - (j*j)] + 1);
		}
	}

	cout << DP[N] << "\n";

	return 0;
}