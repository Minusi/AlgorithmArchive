//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
//
//
//
//// DP[i][j] : i초에서 이동을 j번 했을 때 먹을 수 있는 최대 자두 개수
//// if j == 짝수, 자두는 1번 나무에 있음
//// if j == 홀수, 자두는 2번 나무에 있음
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T, W;
//	cin >> T >> W;
//	
//	int DP[1001][31] = { 0 };
//
//	int Input;
//	for (int i = 1; i <= T; ++i)
//	{
//		cin >> Input;
//		for (int j = 0; j <= min(i,W) ; ++j)
//		{
//			if ((j % 2 == 0 && Input == 1)
//				|| (j % 2 == 1 && Input == 2))
//			{
//				if(j == i)	DP[i][j] = DP[i - 1][j - 1] + 1;
//				else		DP[i][j] = DP[i - 1][j] + 1;
//			}
//			else
//			{
//				if (j == 0)	DP[i][j] = DP[i - 1][j];
//				else		DP[i][j] = max(DP[i - 1][j - 1] + 1, DP[i - 1][j]);
//			}
//		}
//	}
//
//	//for (int i = 1; i <= T; ++i)
//	//{
//	//	for (int j = 0; j <= W; ++j)
//	//		cout << DP[i][j] << " ";
//	//	cout << "\n";
//	//}
//
//	cout << DP[T][W] << "\n";
//
//	return 0;
//}