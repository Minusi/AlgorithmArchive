//#include <iostream>
//#include <tuple>
//#include <algorithm>
//#include <functional>
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
//	tuple<int, int, int, int> Nations[1001];
//
//	int N, K;
//#ifdef DEBUG
//	N = GenerateSingleTestData<int>(10, 15);
//	K = GenerateSingleTestData<int>(1, 10);
//	cout << N << " " << K << "\n";
//#else
//	cin >> N >> K;
//#endif // DEBUG
//
//
//	int Nation, Gold, Silver, Bronze;
//	for (int i = 1; i <= N; ++i)
//	{
//#ifdef DEBUG
//		Nation = i;
//		Gold = GenerateSingleTestData<int>(0, 5);
//		Silver = GenerateSingleTestData<int>(0, 5);
//		Bronze = GenerateSingleTestData<int>(0, 5);
//		cout << Nation << " " << Gold << " " << Silver << " " << Bronze << "\n";
//#else
//		cin >> Nation >> Gold >> Silver >> Bronze;
//#endif // DEBUG
//		get<0>(Nations[Nation]) = Gold;
//		get<1>(Nations[Nation]) = Silver;
//		get<2>(Nations[Nation]) = Bronze;
//		get<3>(Nations[Nation]) = Nation;
//	}
//	sort(Nations + 1, Nations + N + 1, greater<tuple<int,int,int,int>>());
//
//#ifdef DEBUG
//	cout << "\n";
//	for (int i = 1; i <= N; ++i)
//	{
//		cout << get<3>(Nations[i]) << " " << get<0>(Nations[i]) << " " << get<1>(Nations[i]) << " "<<  get<2>(Nations[i]) << "\n";
//	}
//#endif // DEBUG
//
//	
//	tuple<int, int, int, int> Prev(-1,-1,-1,-1);
//	int Grade = 0;
//	int AccumulateSum = 0;
//	for (int i = 1; i <= N; ++i)
//	{
//		if (get<0>(Nations[i]) != get<0>(Prev) ||
//			get<1>(Nations[i]) != get<1>(Prev) ||
//			get<2>(Nations[i]) != get<2>(Prev))
//		{
//			Grade += 1 + AccumulateSum;
//			AccumulateSum = 0;
//		}
//		else
//		{
//			AccumulateSum++;
//		}
//
//		
//		if (get<3>(Nations[i]) == K)
//		{
//			cout << Grade << "\n";
//			break;
//		}
//
//		Prev = Nations[i];
//	}
//
//	return 0;
//}