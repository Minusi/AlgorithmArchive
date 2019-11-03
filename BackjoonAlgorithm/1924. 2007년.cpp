//#include <iostream>
//#include <string>
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
//	int Month, Day;
//	cin >> Month >> Day;
//
//	int Calender[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30,31, 30, 31 };
//	int TotalDay = 0;
//	for (int i = 1; i < Month; ++i)
//		TotalDay += Calender[i];
//	TotalDay += Day;
//
//	string Week[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT "};
//	cout << Week[TotalDay % 7] << "\n";
//	return 0;
//}