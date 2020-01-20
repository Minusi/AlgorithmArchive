//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//#ifdef DEBUG
//#include "Utility.h"
//#endif // DEBUG
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
//	int PowerPole[101] = { 0 };
//	{
//		map<int, int> PowerPoles;
//		pair<int, int> PowerLine;
//		for (int i = 0; i < N; ++i)
//		{
//			cin >> PowerLine.first >> PowerLine.second;
//			PowerPoles.emplace(PowerLine.first, PowerLine.second);
//		}
//
//		int Index = 1;
//		for (const auto& it : PowerPoles)
//		{
//			PowerPole[Index] = it.second;
//			++Index;
//		}
//	}
//
//	int Max = 0;
//	int DP[101];
//	fill(DP + 0, DP + N + 1, 1);
//	for (int i = 1; i <= N; ++i)
//	{
//		if (PowerPole[i] == 0) continue;
//
//		for (int j = i - 1; j >= 1; --j)
//		{
//			if (PowerPole[i] > PowerPole[j] && PowerPole[j] != 0)
//			{
//				DP[i] = max(DP[i], DP[j] + 1);
//				Max = max(Max, DP[i]);
//			}
//		}
//	}
//
//	cout << N - Max << "\n";
//	return 0;
//}