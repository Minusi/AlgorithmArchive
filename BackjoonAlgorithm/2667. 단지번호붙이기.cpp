//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//#include <queue>
//#include <utility>
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
//int Bfs(bool(&Map)[26][26], bool(&Visit)[26][26], int N, pair<int, int>& Pos);
//
//void Clustering(bool(&Map)[26][26], bool(&Visit)[26][26], int N, vector<int>& Output)
//{
//	int Sum;
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j <= N; ++j)
//		{
//			if (Visit[i][j] == true || Map[i][j] == false)
//				continue;
//
//			pair<int, int> Pos(i, j);
//			Sum = Bfs(Map, Visit, N, Pos);
//			Output.push_back(Sum);
//		}
//	}
//}
//
//int Bfs(bool(&Map)[26][26], bool(&Visit)[26][26], int N, pair<int, int>& Pos)
//{
//	queue<pair<int, int>> Queue;
//	Queue.push(Pos);
//	Visit[Pos.first][Pos.second] = true;
//
//	int Sum = 1;
//	while (Queue.empty() == false)
//	{
//		Pos = Queue.front();
//		Queue.pop();
//		//cout << "x,y : " << Pos.first << "," << Pos.second << "\n";
//		if (Pos.first < N)
//		{
//			if (Map[Pos.first + 1][Pos.second] == true && Visit[Pos.first + 1][Pos.second] == false)
//			{
//				Queue.emplace(Pos.first + 1, Pos.second);
//				Visit[Pos.first + 1][Pos.second] = true;
//				Sum++;
//			}
//		}
//		if (Pos.second < N)
//		{
//			if (Map[Pos.first][Pos.second + 1] == true && Visit[Pos.first][Pos.second + 1] == false)
//			{
//				Queue.emplace(Pos.first, Pos.second + 1);
//				Visit[Pos.first][Pos.second + 1] = true;
//				Sum++;
//			}
//		}
//		if (Pos.first > 0)
//		{
//			if (Map[Pos.first - 1][Pos.second] == true && Visit[Pos.first - 1][Pos.second] == false)
//			{
//				Queue.emplace(Pos.first - 1, Pos.second);
//				Visit[Pos.first - 1][Pos.second] = true;
//				Sum++;
//			}
//		}
//		if (Pos.second > 0)
//		{
//			if (Map[Pos.first][Pos.second - 1] == true && Visit[Pos.first][Pos.second - 1] == false)
//			{
//				Queue.emplace(Pos.first, Pos.second - 1);
//				Visit[Pos.first][Pos.second - 1] = true;
//				Sum++;
//			}
//		}
//	}
//
//	//cout << Sum << "\n";
//	return Sum;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//	cin.ignore();
//	
//	bool Map[26][26];
//	bool Visit[26][26] = { false, };
//	vector<int> Result;
//	string Buffer;
//	for (int i = 1; i <= N; ++i)
//	{
//		getline(cin, Buffer);
//		for (int j = 1; j <= N; ++j)
//		{
//			Map[i][j] = Buffer[j-1] - '0';
//		}
//	}
//
//#ifdef DEBUG
//	for (int i = 1; i <= N; ++i)
//	{
//		for (int j = 1; j < N; j++)
//		{
//			cout << Map[i][j];
//		}
//		cout << "\n";
//	}
//	cout << "\n";
//#endif // DEBUG
//
//	
//	Clustering(Map, Visit, N, Result);
//	sort(Result.begin(), Result.end());
//	
//	cout << Result.size() << "\n";
//	for (const auto& it : Result)
//	{
//		cout << it << "\n";
//	}
//	return 0;
//}