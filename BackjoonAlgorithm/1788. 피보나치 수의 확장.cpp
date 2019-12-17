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
//struct BIdx
//{
//public:
//	BIdx(int InSize) : Size(InSize){ }
//
//	/* ÀÎµ¦½º ¹ÝÈ¯ */
//	int operator()(int ToAccess)
//	{
//		return (Size / 2) + ToAccess;
//	}
//	int Size;
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	int Fibonacci[2000001];
//	BIdx FIdx(2000001);
//
//	Fibonacci[FIdx(0)] = 0;
//	Fibonacci[FIdx(1)] = 1;
//	
//	if (N >= 1)
//		for (int i = 2; i <= N; ++i)
//			Fibonacci[FIdx(i)] = (Fibonacci[FIdx(i - 1)] + Fibonacci[FIdx(i - 2)]) % 1000000000;
//	else
//		for (int i = -1; i >= N; --i)
//			Fibonacci[FIdx(i)] = (Fibonacci[FIdx(i + 2)] - Fibonacci[FIdx(i + 1)]) % 1000000000;
//
//	if (N == 0)
//		cout << 0 << "\n";
//	else if (Fibonacci[FIdx(N)] > 0)
//		cout << 1 << "\n";
//	else
//		cout << -1 << "\n";
//	
//	cout << abs(Fibonacci[FIdx(N)]) << "\n";
//	return 0;
//}