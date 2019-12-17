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
//	int H, M;
//	cin >> H >> M;
//	
//	int TotalM =
//		H * 60 + M - 45 >= 0
//		? H * 60 + M - 45
//		: H * 60 + M - 45 + 60 * 24;
//
//	int Hres, Mres;
//	Hres = TotalM / 60;
//	Mres = TotalM % 60;
//
//	cout << Hres << " " << Mres << "\n";
//	return 0;
//}