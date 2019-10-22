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
//	int T;
//	cin >> T;
//
//	while(T--)
//	{
//		int X, Y;
//		cin >> X >> Y;
//
//		long long i = 1;
//		long long Distance = Y - X;
//		while (i*i <= Distance) 
//			i++; 
//		
//		i--;
//		Distance = ceil((double)(Distance - i * i) / i);
//
//		cout << i + i - 1 + Distance << "\n";
//	}
//
//	return 0;
//}