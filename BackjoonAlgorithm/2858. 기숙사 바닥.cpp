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
//	long long R, B;
//	cin >> R >> B;
//
//	long long Bl1, Bw1;
//	long long Bl2, Bw2;
//
//	long long Expression1 = R - 4;
//	long long Expression2 = (long long)sqrt(pow(R - 4, 2) - (16 * B));
//
//	Bl1 = (Expression1 + Expression2) / 4;
//	Bw1 = B / Bl1;
//
//	Bl2 = (Expression1 - Expression2) / 4;
//	Bw2 = B / Bl2;
//
//	long long L, W;
//	if (Bl1 >= Bw1)
//	{
//		L = Bl1 + 2;
//		W = Bw1 + 2;
//	}
//	else
//	{
//		L = Bl2 + 2;
//		W = Bw2 + 2;
//	}
//
//
//	cout << L << " " << W << "\n";
//
//	return 0;
//}