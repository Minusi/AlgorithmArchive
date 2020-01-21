//#include <iostream>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	constexpr int Mod = 1000000000;
//	
//	int N;
//	cin >> N;
//
//	int DP[101][10][1 << 10] = { 0 };
//	for (int i = 1; i <= 9; ++i)
//		DP[1][i][1 << i] = 1;
//
//	for (int i = 2; i <= N; ++i)
//	{
//		for (int j = 0; j <= 9; ++j)
//		{
//			for (int k = 0; k <= 1023; ++k)
//			{
//				if (j > 0)	DP[i][j][k | (1 << j)] = (DP[i][j][k | (1 << j)] + DP[i - 1][j - 1][k]) % Mod;
//				if (j < 9)	DP[i][j][k | (1 << j)] = (DP[i][j][k | (1 << j)] + DP[i - 1][j + 1][k]) % Mod;
//			}
//		}
//	}
//
//	int Answer = 0;
//	for (int i = 0; i <= 9; ++i)
//		Answer = (Answer + DP[N][i][1023]) % Mod;
//
//	cout << Answer << "\n";
//	return 0;
//}