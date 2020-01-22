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
//	
//	long long DP[101];
//	for (int i = 1; i <= N; ++i)
//		DP[i] = i;
//
//	for (int i = 7; i <= N; ++i)
//		DP[i] = max({ DP[i - 3] * 2, DP[i - 4] * 3, DP[i - 5] * 4 });
//
//	cout << DP[N] << "\n";
//	return 0;
//}