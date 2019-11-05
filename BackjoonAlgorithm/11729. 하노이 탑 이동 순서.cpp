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
//void Print(int From, int To)
//{
//	cout << From << " " << To << "\n";
//}
//void SolveHanoi(int N, int From, int By, int To)
//{
//	if (N == 1)
//		Print(From, To);
//	else
//	{
//		SolveHanoi(N - 1, From, To, By);
//		Print(From, To);
//		SolveHanoi(N - 1, By, From, To);
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//	cout << (int)pow(2, N) - 1 << "\n";
//	SolveHanoi(N, 1, 2, 3);
//
//	return 0;
//}