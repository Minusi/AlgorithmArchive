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
//	int N;
//	cin >> N;
//
//	long double SolveA = (1 + sqrt(1 - ((double)(1 - N) / 3) * 4)) / 2;
//	//double SolveB = (3 - sqrt(9 - 12 * (1 - N))) / 6;
//	
//	int Solve = SolveA;
//	if (SolveA - floor(SolveA) > 0)
//		Solve++;
//
//	cout << Solve << "\n";
//	return 0;
//}