//#include <iostream>
//#include <cmath>
//#include <string>
//#include <cassert>
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
//	string L, R;
//	cin >> L >> R;
//
//	int LenDiff = L.length() - R.length();
//	string Buf;
//	for (int i = 0; i < abs(LenDiff); ++i)
//		Buf += '0';
//
//	LenDiff >= 0
//		? R = move(Buf + R)
//		: L = move(Buf + L);
//
//	int NumEight = 0;
//	assert(L.length() == R.length());
//	for (int i = 0; i < L.length(); ++i)
//	{
//		if (L[i] != R[i])
//			break;
//
//		if (L[i] == '8')
//			NumEight++;
//	}
//
//	cout << NumEight << "\n";
//
//	return 0;
//}