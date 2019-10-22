//#include <iostream>
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
//	int N, M, X, Y, K;
//	cin >> N >> M >> X >> Y >> K;
//
//	int Map[20][20];
//	for (int i = 0; i < N; ++i)
//		for (int j = 0; j < M; ++j)
//			cin >> Map[i][j];
//
//	/* 미정의, 동, 서, 북, 남*/
//	static int dr[5] = { 0, 0, 0, -1, 1 };
//	static int dc[5] = { 0, 1, -1, 0, 0 };
//
//	int Dir;
//	int Cr = X;
//	int Cc = Y;
//
//	/* 동, 서, 북, 남, 상, 하 */
//	int Dice[6] = { 0, 0, 0, 0, 0, 0 };
//	int TempSide;
//	while (K--)
//	{
//		cin >> Dir;
//		//cout << "Cr + dr : " << Cr + dr[Dir] << "\n";
//		//cout << "Cc + dc : " << Cc + dc[Dir] << "\n";
//		if (Cr + dr[Dir] < 0 || Cr + dr[Dir] >= N ||
//			Cc + dc[Dir] < 0 || Cc + dc[Dir] >= M)
//			continue;
//
//		Cr += dr[Dir];
//		Cc += dc[Dir];
//
//		switch (Dir)
//		{
//		case 1:	/* 동쪽 */
//			TempSide = Dice[0];
//			Dice[0] = Dice[4];
//			Dice[4] = Dice[1];
//			Dice[1] = Dice[5];
//			Dice[5] = TempSide;
//			break;
//		case 2:	/* 서쪽 */
//			TempSide = Dice[1];
//			Dice[1] = Dice[4];
//			Dice[4] = Dice[0];
//			Dice[0] = Dice[5];
//			Dice[5] = TempSide;
//			break;
//		case 3:	/* 북쪽 */
//			TempSide = Dice[4];
//			Dice[4] = Dice[3];
//			Dice[3] = Dice[5];
//			Dice[5] = Dice[2];
//			Dice[2] = TempSide;
//			break;
//		case 4:	/* 남쪽 */
//			TempSide = Dice[3];
//			Dice[3] = Dice[4];
//			Dice[4] = Dice[2];
//			Dice[2] = Dice[5];
//			Dice[5] = TempSide;
//			break;
//		}
//
//		if (Map[Cr][Cc] == 0)
//			Map[Cr][Cc] = Dice[5];
//		else
//		{
//			Dice[5] = Map[Cr][Cc];
//			Map[Cr][Cc] = 0;
//		}
//
//		cout << Dice[4] << "\n";
//	}
//
//	return 0;
//}