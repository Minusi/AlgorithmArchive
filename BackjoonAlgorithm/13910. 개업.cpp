//#include <iostream>
//#include <set>
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
//	int Array[10001] = { 0 };
//	int Woks[100];
//	for (int i = 0; i < M; ++i)
//		cin >> Woks[i];
//
//	set<int> TwoHandedWoks;
//	for (int i = 0; i < M; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			if (i == j)	continue;
//
//			if (0 <= Woks[i] && Woks[i] <= N)
//			{
//				TwoHandedWoks.emplace(Woks[i]);
//				Array[Woks[i]] = 1;
//			}
//			
//			int TwoHanded = Woks[i] + Woks[j];
//			if (0 <= TwoHanded && TwoHanded <= N)
//			{
//				TwoHandedWoks.emplace(Woks[i] + Woks[j]);
//				Array[TwoHanded] = 1;
//			}
//		}
//	}
//#ifdef DEBUG
//	Print(Array, 1, N + 1);
//	for (const auto& it : TwoHandedWoks)
//	{
//		cout << it << " ";
//	}
//	cout << "\n";
//#endif // DEBUG
//
//
//	for (int i = 1; i <= N; ++i)
//	{
//		for (const auto& it : TwoHandedWoks)
//		{
//			if (i - it < 0)
//				continue;
//
//			if (Array[i - it] == 0)
//				continue;
//
//			//cout << "Array[" << i << "] : " << Array[i] << ", i - it : " << i - it << "\n";
//			if (Array[i] != 0)
//				Array[i] = min(Array[i - it] + 1, Array[i]);
//			else
//				Array[i] = Array[i - it] + 1;
//		}
//	}
//#ifdef DEBUG
//	Print(Array, 1, N + 1);
//#endif // DEBUG
//
//	cout << (Array[N] == 0? -1 : Array[N]) << "\n";
//
//	return 0;
//}