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
//	int NumCases[1001];
//	NumCases[1] = 1;
//	NumCases[2] = 3;
//
//	for (int i = 3; i <= N; ++i)
//		NumCases[i] = (NumCases[i - 2] * 2 + NumCases[i - 1]) % 10007;
//	
//	cout << NumCases[N] << "\n";
//
//	return 0;
//}