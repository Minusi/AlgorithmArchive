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
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//	
//	constexpr int MAX_SQR_NUM = 316;
//
//	/* dp initialization */
//	int DP[100001];
//	for (int i = 0; i <= N; ++i)
//		DP[i] = i;
//	for (int i = 2; i <= MAX_SQR_NUM; ++i)
//		DP[i * i] = 1;
//
//	for (int i = 2; i <= N; ++i)
//	{
//		for (int j = 1; j * j <= i; ++j)
//		{
//			int sqrj = j * j;
//			DP[i] = min(DP[i], DP[sqrj] + DP[i - sqrj]);
//		}
//	}
//
//
//
//#ifdef DEBUG
//	for (int i = 1; i <= N; ++i)
//		cout << DP[i] << " ";
//	cout << "\n";
//#endif // DEBUG
//
//	cout << DP[N] << "\n";
//	return 0;
//}