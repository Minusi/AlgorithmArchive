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
//	int S, K;
//	cin >> S >> K;
//
//	int Avg = S / K;
//	int Remainder = S - (Avg * K);
//	
//	long long Result = 1;
//	int Mul;
//	for (int i = 0; i < K; ++i)
//	{
//		Mul = Avg;
//		if (Remainder > 0)
//		{
//			Mul += 1;
//			Remainder--;
//		}
//
//		Result *= Mul;
//	}
//
//	cout << Result << "\n";
//
//	return 0;
//}