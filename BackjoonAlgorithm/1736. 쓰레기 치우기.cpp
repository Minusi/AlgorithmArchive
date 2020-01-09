//#include <iostream>
//#include <utility>
//#include <vector>
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
//	vector<pair<int,int>> NumRobots[100];
//
//	int Input;
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < M; ++j)
//		{
//			cin >> Input;
//			if (Input == 0)
//				continue;
//
//			/* process */
//#ifdef DEBUG
//			cout << "i,j = " << i << "," << j << "\n";
//#endif // DEBUG
//
//			for (int k = 0; k < 100; ++k)
//			{
//				if (NumRobots[k].empty())
//				{
//#ifdef DEBUG
//					cout << "cret at : " << i << "," << j << "\n";
//#endif // DEBUG
//
//					NumRobots[k].emplace_back(i, j);
//					break;
//				}
//
//				const pair<int, int>& Coord = NumRobots[k].back();
//				if (Coord.first <= i && Coord.second <= j)
//				{
//#ifdef DEBUG
//					cout << "push at : " << i << "," << j << "\n";
//#endif // DEBUG
//
//					NumRobots[k].emplace_back(i, j);
//					break;
//				}
//			}
//		}
//	}
//
//#ifdef DEBUG
//	for (int i = 0; NumRobots[i].empty() == false; ++i)
//	{
//
//		cout << i << " : \n";
//
//		for (const auto& it : NumRobots[i])
//			cout << it.first << "," << it.second << "\n";
//		cout << "\n";
//	}
//#endif // DEBUG
//
//	int Answer = 0;
//	for (int i = 0; NumRobots[i].empty() == false; ++i)
//		Answer++;
//
//	cout << Answer << "\n";
//	
//	return 0;
//}