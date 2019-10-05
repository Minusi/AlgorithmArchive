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
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	long long N;
//	cin >> N;
//
//	long long N2 = 0;
//	if (N % 2 == 0)
//		N2 = N / 2;
//	else
//		N2 = (N / 2) + 1;
//
//	long long Answer = 1;
//	for (int i = 0; i < N2; ++i)
//	{
//		Answer *= 2;
//		Answer = Answer % 16769023;
//	}
//	cout << Answer << "\n";
//	return 0;
//}