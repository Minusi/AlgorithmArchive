//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//
//chrono::system_clock::time_point Start;
//chrono::nanoseconds Time;
//#endif
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//	
//	int Array[301][301];
//	for (int i = 1; i <= N; ++i)
//		for (int j = 1; j <= M; ++j)
//			cin >> Array[i][j];
//
//	int K;
//	cin >> K;
//	while (K--)
//	{
//		int i, j, x, y;
//		cin >> i >> j >> x >> y;
//
//		int Sum = 0;
//		for (int a = i; a <= x; ++a)
//			for (int b = j; b <= y; ++b)
//				Sum += Array[a][b];
//
//		cout << Sum << "\n";
//	}
//
//	return 0;
//}