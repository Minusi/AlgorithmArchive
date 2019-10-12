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
//struct Count
//{
//	int NumZero;
//	int NumOne;
//
//	Count() = default;
//	Count(int Z, int O) : NumZero(Z), NumOne(O){ }
//
//	Count operator+(const Count& rhs)
//	{
//		return Count(NumZero + rhs.NumZero, NumOne + rhs.NumOne);
//	}
//};
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//
//	Count Dp[41];
//	Dp[0] = { 1, 0 };
//	Dp[1] = { 0, 1 };
//	for (int i = 2; i <= 40; ++i)
//	{
//		Dp[i] = Dp[i - 1] + Dp[i - 2];
//	}
//
//	//for (int i = 0; i <= 40; ++i)
//	//{
//	//	cout << Dp[i].NumZero << "\t";
//	//	cout << Dp[i].NumOne << "\n";
//	//}
//	while (T--)
//	{
//		int N;
//		cin >> N;
//
//		cout << Dp[N].NumZero << " " << Dp[N].NumOne << "\n";
//	}
//
//
//
//
//	return 0;
//}