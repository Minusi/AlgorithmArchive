//#include <iostream>
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
//bool Solve(int N)
//{
//	if (N < 10)
//		return true;
//
//	int PrevNum = N % 10;
//	N /= 10;
//	int CurrNum = N % 10;
//	int Differential = CurrNum - PrevNum;
//
//	while (N >= 10)
//	{
//		PrevNum = CurrNum;
//		N /= 10;
//		CurrNum = N % 10;
//		if ((CurrNum - PrevNum) != Differential)
//			return false;
//	}
//	
//	return true;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	bool CheckDiff[1001];
//	int N;
//	cin >> N;
//
//	int Count = 0;
//	for (int i = 1; i <= N; ++i)
//	{
//		if (Solve(i))
//			Count++;
//	}
//
//	cout << Count << "\n";
//	
//	return 0;
//}