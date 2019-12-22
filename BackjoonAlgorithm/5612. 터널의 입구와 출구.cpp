//#include <iostream>
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
//	int N, M;
//	cin >> N >> M;
//
//	int CarsInTunnel = M;
//	int MaxInTunnel = M;
//	int Input;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Input;	/* 들어온 차 */
//		CarsInTunnel += Input;
//
//		cin >> Input;	/* 나가는 차 */
//		CarsInTunnel -= Input;
//
//		if (CarsInTunnel < 0)
//		{
//			MaxInTunnel = 0;
//			break;
//		}
//
//		MaxInTunnel = max(CarsInTunnel, MaxInTunnel);
//	}
//
//	cout << MaxInTunnel << "\n";
//	return 0;
//}