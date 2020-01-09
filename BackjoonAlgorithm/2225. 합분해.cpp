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
//	int N, K;
//	cin >> N >> K;
//	
//	unsigned int DP[201][201] = { 0 };
//	for (int i = 0; i <= N; ++i)
//		DP[1][i] = 1;
//
//	for (int i = 2; i <= K; ++i)
//	{
//		int Sum = 0;
//		for (int j = 0; j <= N; j++)
//		{
//			Sum = (Sum + DP[i - 1][j]) % 1000000000;
//			DP[i][j] = Sum;
//		}
//	}
//
//	//cout << "success\n";
//	//for (int i = 0; i <= K; ++i)
//	//{
//	//	for (int j = 0; j <= N; ++j)
//	//		cout << DP[i][j] << " ";
//	//	cout << "\n";
//	//}
//
//	cout << DP[K][N] << "\n";
//	
//	return 0;
//}