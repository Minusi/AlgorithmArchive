//#include <iostream>
//#include <cmath>
//#include <cfloat>
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
//	long long X, Y;
//	cin >> X >> Y;
//
//	double Z = Y * 100/ (double)X;
//	double Answer = -1;
//	if (Z < 99)
//	{
//		double IntPart, FracPart = modf(Z, &IntPart);
//		double A = 0;
//		
//		A = (1 - FracPart) > DBL_EPSILON ? 1 - FracPart : 1;
//		Answer = A * X / ((100 - A) * X - 100 * Y) * X;
//		Answer = ceil(Answer);
//	}
//
//
//	cout << (long long)Answer << "\n";
//	return 0;
//}