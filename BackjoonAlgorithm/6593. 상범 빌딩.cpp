//#include <iostream>
//#include <string>
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
//void Print(int(&Array)[30][30][30], int l, int r, int c)
//{
//#ifdef DEBUG
//	for (int i = 0; i < l; ++i)
//	{
//		for (int j = 0; j < r; ++j)
//		{
//			for (int k = 0; k < c; ++k)
//			{
//				cout << Array[i][j][k] << "\t";
//			}
//			cout << "\n";
//		}
//		cout << "\n";
//	}
//	cout << "\n";
//#endif // DEBUG
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	struct triple
//	{
//		int l, r, c;
//		triple() = default;
//		triple(int Inl, int Inr, int Inc) : l(Inl), r(Inr), c(Inc){}
//	};
//	int L, R, C;
//
//	while (true)
//	{
//		cin >> L >> R >> C;
//		if (L == 0 && R == 0 && C == 0)
//			break;
//
//		int Building[30][30][30] = { 0 };
//		triple Start, End;
//		string Buffer;
//		for (int l = 0; l < L; ++l)
//		{
//			for (int r = 0; r < R; ++r)
//			{
//				cin >> Buffer;
//				for (int c = 0; c < C; ++c)
//				{
//					if (Buffer[c] == 'S')
//						Start = { l,r,c };
//					else if (Buffer[c] == 'E')
//						End = { l,r,c };
//					else if (Buffer[c] == '#')
//						Building[l][r][c] = -1;
//				}
//			}
//		}
//		
//
//		const int dl[6] = { 0,0,0,0,1,-1 };
//		const int dr[6] = { 0,1,0,-1,0,0 };
//		const int dc[6] = { 1,0,-1,0,0,0 };
//		
//		queue<triple> Queue;
//		Queue.emplace(Start.l, Start.r, Start.c);
//		while (Queue.empty() == false && Building[End.l][End.r][End.c] == 0)
//		{
//			triple Current = Queue.front();
//			Queue.pop();
//
//			for (int i = 0; i < 6; ++i)
//			{
//				triple Next = { Current.l + dl[i], Current.r + dr[i], Current.c + dc[i] };
//				if (Next.l < 0 || Next.l >= L || Next.r < 0 || Next.r >= R || Next.c < 0 || Next.c >= C)
//					continue;
//
//				if (Building[Next.l][Next.r][Next.c] != 0)
//					continue;
//
//				Building[Next.l][Next.r][Next.c] = Building[Current.l][Current.r][Current.c] + 1;
//				Queue.emplace(Next.l, Next.r, Next.c);
//			}
//		}
//
//		Print(Building, L, R, C);
//
//		if (Building[End.l][End.r][End.c] == 0)
//			cout << "Trapped!\n";
//		else
//			cout << "Escaped in " << Building[End.l][End.r][End.c] << " minute(s).\n";
//	}
//
//	return 0;
//}