//#include <iostream>
//#include <algorithm>
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
//int DP[2][251];
//int A[251];
//int B[251];
//int Answer = 0;
//void Solve(int N)
//{
//
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	for (int i = 1; i <= N; ++i)
//	{
//		cin >> A[i];
//		cin >> B[i];
//		//A[i] = GenerateSingleTestData<int>(1, 10);
//		//B[i] = GenerateSingleTestData<int>(1, 10);
//		//cout << A[i] << " " << B[i] << "\n";
//	}
//	DP[0][0] = DP[1][0] = 0;
//	Solve(N);
//	
//	//for (int i = 0; i <= 1; ++i)
//	//{
//	//	for (int j = 1; j <= N; ++j)
//	//	{
//	//		cout << DP[i][j] << " ";
//	//	}
//	//	cout << "\n";
//	//}
//	cout << max(DP[0][N], DP[1][N]) << "\n";
//	return 0;
//}