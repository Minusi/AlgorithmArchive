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
//int gcd(int Lhs, int Rhs)
//{
//	int Temp, N;
//	if (Lhs < Rhs)
//	{
//		Temp = Lhs;
//		Lhs = Rhs;
//		Rhs = Temp;
//	}
//
//	while (Rhs != 0)
//	{
//		N = Lhs % Rhs;
//		Lhs = Rhs;
//		Rhs = N;
//	}
//
//	return Lhs;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int M, N, X, Y;
//		cin >> M >> N >> X >> Y;
//
//		int GCD = gcd(M, N);
//		int LCM = M * N / GCD;
//
//		int MRange = LCM / M;
//		int NRange = LCM / N;
//		int Answer = -1;
//
//		int j = 0;
//		int MRes, NRes;
//		for (int i = 0; i <= MRange;)
//		{
//			MRes = M * i + X;
//			NRes = N * j + Y;
//			
//			if (MRes == NRes)
//			{
//				Answer = MRes;
//				break;
//			}
//			else if (MRes > NRes)
//				++j;
//			else
//				++i;
//
//			if (i > MRange || j > NRange)
//				break;
//		}
//
//		cout << Answer << "\n";
//	}
//
//	return 0;
//}