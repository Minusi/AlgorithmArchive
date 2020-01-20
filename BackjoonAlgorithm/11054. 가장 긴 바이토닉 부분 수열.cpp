//#include <iostream>
//#include <algorithm>
//using namespace std;
//
////#define DEBUG
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
//	int Seq[1001];
//	for (int i = 1; i <= N; ++i)
//		cin >> Seq[i];
//
//	int LIS[1001];	fill(LIS + 1, LIS + N + 1, 1);
//	int LDS[1001];	fill(LDS + 1, LDS + N + 1, 1);
//	int MaxBitonic = 0;
//	for (int i = 1; i <= N; ++i)
//	{
//		int ri = N + 1 - i;
//		int rj;
//		for (int j = i - 1; j >= 1; --j)
//		{
//			rj = N + 1 - j;
//			if (Seq[i] > Seq[j])
//				LIS[i] = max(LIS[i], LIS[j] + 1);
//
//			if (Seq[ri] > Seq[rj])
//				LDS[ri] = max(LDS[ri], LDS[rj] + 1);
//		}
//	}
//	
//	for (int i = 1; i <= N; ++i)
//		MaxBitonic = max(MaxBitonic, LIS[i] + LDS[i] - 1);
//
//
//#ifdef DEBUG
//	for (int i = 1; i <= N; ++i)
//		cout << LIS[i] << " ";
//	cout << "\n";
//	for (int i = 1; i <= N; ++i)
//		cout << LDS[i] << " ";
//	cout << "\n";
//#endif // DEBUG
//
//	cout << MaxBitonic << "\n";
//	return 0;
//}