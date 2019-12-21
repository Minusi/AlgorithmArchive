//#include <iostream>
//#include <vector>
//#include <algorithm>
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
//	vector<int> VectorX, VectorY;
//	
//
//	int InputX, InputY;
//	for (int i = 0; i < 3; ++i)
//	{
//		cin >> InputX >> InputY;
//		vector<int>::iterator it;
//		if ((it = find(VectorX.begin(), VectorX.end(), InputX)) != VectorX.end())
//			VectorX.erase(it);
//		else
//			VectorX.push_back(InputX);
//
//		if ((it = find(VectorY.begin(), VectorY.end(), InputY)) != VectorY.end())
//			VectorY.erase(it);
//		else
//			VectorY.push_back(InputY);
//	}
//	
//	cout << VectorX[0] << " " << VectorY[0] << "\n";
//	return 0;
//}