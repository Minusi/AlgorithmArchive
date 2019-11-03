//#include <iostream>
//#include <cstring>
//#include <cmath>
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
//int Visit(const int N, const int R, const int C)
//{
//	int NP2 = pow(2, N);
//	int Result = 0;
//
//	int rStart = 0;
//	int cStart = 0;
//	int rCurrent;
//	int cCurrent;
//	while (NP2 > 1)
//	{
//		NP2 /= 2;
//		
//		if (R < rStart + NP2)
//			rCurrent = 0;
//		else
//		{
//			rCurrent = 1;
//			rStart += NP2;
//		}
//		
//		if (C < cStart + NP2)
//			cCurrent = 0;
//		else
//		{
//			cCurrent = 1;
//			cStart += NP2;
//		}
//#ifdef DEBUG
//		cout << "NP2 : " << NP2 << ", rCorrent : " << rCurrent << ", cCurrent : " << cCurrent << "\n";
//		cout << "CurRes : " << (NP2 * NP2) * (rCurrent * 2 + cCurrent) << "\n";
//#endif // DEBUG
//		Result += (NP2 * NP2) * (rCurrent * 2 + cCurrent);
//	}
//
//	return Result;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, R, C;
//	cin >> N >> R >> C;
//
//	cout << Visit(N, R, C) << "\n";
//	
//
//	return 0;
//}