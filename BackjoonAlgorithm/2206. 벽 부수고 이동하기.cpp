//#include <iostream>
//#include <queue>
//#include <string>
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
//struct TileInfo
//{
//	TileInfo() = default;
//	TileInfo(int R, int C, int Broken) : Row(R), Col(C), Break(Broken){ }
//	int Row;
//	int Col;
//	bool Break = false;
//};
//
//enum Visit
//{
//	FALSE, WALL_THROUGH, ONLY_ROAD
//};
//void FindShortest(int(&Map)[1001][1001], int(&Visit)[1001][1001], int N, int M)
//{
//	static const int Dirr[4] = { 0, 1, 0, -1 };
//	static const int Dirc[4] = { 1, 0, -1 ,0 };
//
//	queue<TileInfo> Queue;
//	Queue.emplace(1,1,false);
//	Visit[1][1] = ONLY_ROAD;
//
//	TileInfo Current;
//	int Dr;
//	int Dc;
//	while (Queue.empty() == false)
//	{
//		Current = Queue.front();
//		Queue.pop();
//
//		if (Current.Row == N && Current.Col == M)
//			return;
//
//		for (int i = 0; i < 4; ++i)
//		{
//			Dr = Current.Row + Dirr[i];
//			Dc = Current.Col + Dirc[i];
//			if (Dr >= 1 && Dr <= N && Dc >= 1 && Dc <= M)
//			{
//				/* 벽을 뚫지 않음. */
//				if (Current.Break == false)
//				{
//					/* 도로가 연결되어있고 순수 길로만 다닌 트랙의 흔적이 아닌 경우 */
//					if (Visit[Dr][Dc] != ONLY_ROAD && Map[Dr][Dc] != 0)
//					{
//						Queue.emplace(Dr, Dc, Current.Break);
//						Map[Dr][Dc] = Map[Current.Row][Current.Col] + 1;
//						Visit[Dr][Dc] = ONLY_ROAD;
//#ifdef DEBUG
//						cout << "dr : " << Dr << ", dc : " << Dc << ", Break : " << Current.Break << ", Dp : " << Map[Dr][Dc] << "\n";
//						Print2Dimen(Map, N + 1, M + 1, 1, 1);
//#endif // DEBUG
//					}
//					/* 도로가 연결되어 있지 않은 상태이며 누군가 지나간 흔적이 없는 경우 */
//					else if (Visit[Dr][Dc] == FALSE && Map[Dr][Dc] == 0)
//					{
//						Queue.emplace(Dr, Dc, true);
//						Map[Dr][Dc] = Map[Current.Row][Current.Col] + 1;
//						Visit[Dr][Dc] = WALL_THROUGH;
//#ifdef DEBUG
//						cout << "dr : " << Dr << ", dc : " << Dc << ", Break : " << Current.Break << ", Dp : " << Map[Dr][Dc] << "\n";
//						Print2Dimen(Map, N + 1, M + 1, 1, 1);
//#endif // DEBUG
//					}
//				}
//				else
//				{
//					/* 벽을 뚫은 후부터는, 방문하지 않은 도로만 이동할 수 있습니다. */
//					if (Visit[Dr][Dc] == FALSE && Map[Dr][Dc] == 1)
//					{
//						Queue.emplace(Dr, Dc, Current.Break);
//						Map[Dr][Dc] = Map[Current.Row][Current.Col] + 1;
//						Visit[Dr][Dc] = WALL_THROUGH;
//
//#ifdef DEBUG
//						cout << "dr : " << Dr << ", dc : " << Dc << ", Break : " << Current.Break << ", Dp : " << Map[Dr][Dc] << "\n";
//						Print2Dimen(Map, N + 1, M + 1, 1, 1);
//#endif // DEBUG
//					}
//				}
//			}
//		}
//	}
//
//	Map[N][M] = -1;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M;
//	cin >> N >> M;
//	cin.ignore();
//
//	int Map[1001][1001];
//	int Visit[1001][1001] = { FALSE, };
//	string Buffer;
//	for (int i = 1; i <= N; ++i)
//	{
//#ifdef DEBUG
////		Buffer.clear();
////		for (int t = 0; t < M; ++t)
////			Buffer += GenerateSingleTestData<char>('0', '1');
////
////		if (i == 1)
////			Buffer[0] = '0';
////		else if (i == N)
////			Buffer[Buffer.length() - 1] = '0';
//#else
//		getline(cin, Buffer);
//#endif // DEBUG
//
//		for (int j = 1; j <= M; j++)
//		{
//			if (Buffer[j - 1] == '0')
//				Map[i][j] = 1;
//			else if (Buffer[j - 1] == '1')
//				Map[i][j] = 0;
//		}
//	}
//
//#ifdef DEBUG
//	Print2Dimen(Map, N + 1, M + 1, 1, 1);
//#endif // DEBUG
//
//	FindShortest(Map, Visit, N, M);
//	cout << Map[N][M] << "\n";
//	
//	return 0;
//}