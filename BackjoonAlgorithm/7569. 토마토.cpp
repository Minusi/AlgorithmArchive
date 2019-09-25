//#include <iostream>
//#include <tuple>
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
//typedef tuple<int, int, int> Dim3;
//int TimePassess(int(&Tomato)[100][100][100], bool(&Visit)[100][100][100], Dim3 Size, queue<Dim3>& TQueue, int NumImmatures)
//{
//	static const Dim3 Dir[6] = { {0,0,1}, {0,1,0}, {0,0,-1}, {0,-1,0}, {1,0,0}, {-1,0,0} };
//	Dim3 Pos;
//
//	int Result = 0;
//	while (TQueue.empty() == false)
//	{
//		Pos = TQueue.front();
//		TQueue.pop();
//
//		int curH, curN, curM;
//		for (int i = 0; i < 6; ++i)
//		{
//			curH = get<0>(Pos) + get<0>(Dir[i]);
//			curN = get<1>(Pos) + get<1>(Dir[i]);
//			curM = get<2>(Pos) + get<2>(Dir[i]);
//			int& CurTomato = Tomato[curH][curN][curM];
//
//			if (curH >= 0 && curH < get<0>(Size) && curN >= 0 && curN < get<1>(Size) && curM >= 0 && curM < get<2>(Size))
//			{
//				if ((CurTomato == 0 && Visit[curH][curN][curM] == false)
//					|| (CurTomato > Tomato[get<0>(Pos)][get<1>(Pos)][get<2>(Pos)] + 1 && Visit[curH][curN][curM] == true))
//				{
//					CurTomato = Tomato[get<0>(Pos)][get<1>(Pos)][get<2>(Pos)] + 1;
//					Visit[curH][curN][curM] = true;
//					TQueue.emplace(curH, curN, curM);
//
//					Result = CurTomato - 1;
//					NumImmatures--;
//#ifdef DEBUG
//					Print3Dimen(Tomato, get<0>(Size), get<1>(Size), get<2>(Size));
//#endif // DEBUG
//				}
//			}
//		}
//	}
//
//
//	if (NumImmatures > 0)
//		return -1;
//	else
//		return Result;
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, M, H;
//	cin >> M >> N >> H;
//
//
//	
//	int Tomato[100][100][100];
//	bool Visit[100][100][100] = { false, };
//	queue<Dim3> TQueue;
//	int NumImmatures = 0;
//	for (int i = 0; i < H; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			for (int k = 0; k < M; k++)
//			{
//				cin >> Tomato[i][j][k];
//				if (Tomato[i][j][k] == 1)
//					TQueue.emplace(i, j, k);
//				else if (Tomato[i][j][k] == 0)
//					NumImmatures++;
//			}
//		}
//	}
//
//	cout << TimePassess(Tomato, Visit, { H, N, M }, TQueue, NumImmatures) << "\n";
//	return 0;
//}