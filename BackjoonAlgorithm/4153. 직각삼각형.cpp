//#include <iostream>
//#include <array>
//#include <algorithm>
//#include <iomanip>
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
//	while (true)
//	{
//		array<int,3> Sides;
//		cin >> Sides[0] >> Sides[1] >> Sides[2];
//
//		if (Sides[0] == 0 && Sides[1] == 0 && Sides[2] == 0)
//			break;
//
//		sort(Sides.begin(), Sides.end());
//		
//		int LeftSide = pow(Sides[2], 2);
//		int RightSide = pow(Sides[0], 2) + pow(Sides[1], 2);
//		//cout << fixed << setprecision(10) << LeftSide << ", " << RightSide << "\n";
//		if (LeftSide == RightSide)
//			cout << "right\n";
//		else
//			cout << "wrong\n";
//	}
//
//
//	return 0;
//}