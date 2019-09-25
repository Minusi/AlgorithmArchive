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
///* 재귀 DFS */
//int CheckVirus(bool(&Network)[101][101], bool(&Visit)[101], int N, int Start = 1)
//{
//	int Sum = 1;
//	Visit[Start] = true;
//	//cout << Start << endl;
//	for (int i = 1; i <= N; ++i)
//	{
//		if (Network[Start][i] == true && Visit[i] == false)
//		{
//			Sum += CheckVirus(Network, Visit, N, i);
//		}
//	}
//
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
//
//	int M;
//	cin >> M;
//	
//
//
//	bool Network[101][101] = { false, };
//	bool Visit[101] = { false, };
//	int Src, Dest;
//	for (int i = 1; i <= M; ++i)
//	{
//		cin >> Src >> Dest;
//		Network[Src][Dest] = true;
//		Network[Dest][Src] = true;
//	}
//
//	/* 1번 컴퓨터를 제외하고 바이러스 걸린 컴퓨터의 수 */
//	cout << CheckVirus(Network, Visit, N) - 1<< "\n";
//	return 0;
//}