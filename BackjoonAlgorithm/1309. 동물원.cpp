#include <iostream>
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

	long long N;
	cin >> N;

	int Dp[100001][3];
	Dp[1][0] = Dp[1][1] = Dp[1][2] = 1;
	for (int i = 2; i <= N; ++i)
	{
		Dp[i][0] = (Dp[i - 1][0] + Dp[i - 1][1] + Dp[i - 1][2])% 9901;
		Dp[i][1] = (Dp[i - 1][0] + Dp[i - 1][2]) % 9901;
		Dp[i][2] = (Dp[i - 1][0] + Dp[i - 1][1]) % 9901;
	}

	cout << (Dp[N][0] + Dp[N][1] + Dp[N][2]) % 9901 << "\n";

	return 0;
}