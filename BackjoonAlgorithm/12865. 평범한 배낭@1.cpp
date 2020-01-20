//#include <iostream>
//#include <utility>
//#include <algorithm>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <iomanip>
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
//	int N, K;
//	cin >> N >> K;
//
//	pair<int, int> Items[101];
//	for (int i = 1; i <= N; ++i)
//#ifdef DEBUG
//	{
//		Items[i].first = GenerateSingleTestData<int>(1, 10);
//		Items[i].second = GenerateSingleTestData<int>(1, 10);
//		cout << Items[i].first << " " << Items[i].second << "\n";
//	}
//#else
//		cin >> Items[i].first >> Items[i].second;
//#endif // DEBUG
//
//
//	int DP[100001] = { 0 };
//	for (int i = 1; i <= N; ++i)
//		for (int j = K; j >= Items[i].first; --j)
//			DP[j] = max(DP[j], DP[j - Items[i].first] + Items[i].second);
//
//#ifdef DEBUG
//	for (int i = 1; i <= K; ++i)
//	{
//		cout.width(2);
//		cout << DP[i] << " ";
//	}
//#endif // DEBUG
//
//	cout << DP[K] << "\n";
//
//	return 0;
//}