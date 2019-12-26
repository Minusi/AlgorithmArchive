//#include <iostream>
//#include <utility>
//#include <algorithm>
//#include <functional>
//#include <queue>
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
//	int M, N, K;
//	cin >> M >> N >> K;
//
//	int GraphPaper[100][100] = { 0 };
//	pair<int, int> LBCrd, RTCrd;
//	for (int i = 0; i < K; ++i)
//	{
//		cin >> LBCrd.second >> LBCrd.first >> RTCrd.second >> RTCrd.first;
//		/* ¸ð´«Á¾ÀÌ ÁÂÇ¥ Á¶Á¤ */
//		RTCrd.first -= 1;
//		RTCrd.second -= 1;
//		
//		for (int r = LBCrd.first; r <= RTCrd.first; ++r)
//			for (int c = LBCrd.second; c <= RTCrd.second; ++c)
//				GraphPaper[r][c] = -1;	/* -1 is block */
//	}
//	
//	int Result[5001] = { 0 };
//	int SectionNo = 0;
//
//	int dr[4] = { 0,1,0,-1 };
//	int dc[4] = { 1,0,-1,0 };
//	for (int i = 0; i < M; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			if (GraphPaper[i][j] != 0)
//				continue;
//			
//
//			queue<pair<int,int>> Queue;
//			Queue.emplace(i, j);
//			SectionNo++;
//			while (Queue.empty() == false)
//			{
//				pair<int, int> Current = Queue.front();
//				Queue.pop();
//				if (GraphPaper[Current.first][Current.second] != 0)
//					continue;
//
//				GraphPaper[Current.first][Current.second] = SectionNo;
//				Result[SectionNo]++;
//				pair<int, int> Next;
//				for (int k = 0; k < 4; ++k)
//				{
//					Next = { Current.first + dr[k], Current.second + dc[k] };
//					if (Next.first < 0 || Next.first >= M || Next.second < 0 || Next.second >= N)
//						continue;
//					
//					if (GraphPaper[Next.first][Next.second] != 0)
//						continue;
//					
//					Queue.emplace(Next);
//				}
//			}
//		}
//	}
//#ifdef DEBUG
//	Print2Dimen(GraphPaper, M, N, false);
//#endif // DEBUG
//
//	
//	cout << SectionNo << "\n";
//	if (SectionNo > 0)
//	{
//		sort(Result + 0, Result + SectionNo + 1, less<int>());
//		for (int i = 0; i < 5001; ++i)
//			if (Result[i] != 0)
//				cout << Result[i] << " ";
//		cout << "\n";
//	}
//
//	return 0;
//}