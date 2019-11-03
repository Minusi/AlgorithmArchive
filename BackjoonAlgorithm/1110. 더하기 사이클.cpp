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
//	int N;
//	cin >> N;
//
//	int LDigit, RDigit;
//	if (N < 10)
//		LDigit = 0, RDigit = N;
//	else
//		LDigit = N / 10, RDigit = N % 10;
//
//	int NumCycle = 0;
//	int Result = -1;
//	while (Result != N)
//	{
//		Result = RDigit * 10 + ((LDigit + RDigit) % 10);
//		LDigit = Result / 10, RDigit = Result % 10;
//		NumCycle++;
//	}
//
//	cout << NumCycle << "\n";
//
//	return 0;
//}