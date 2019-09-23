//#include <iostream>
//#include <algorithm>
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
//int BestBalance = 100000000;		/* 팀 밸런스의 최적값 */
//bool IncludedIndex[20] = { false, };			/* 인덱스 배열에 들어간 수들을 체크하는 플래그 배열 */
//
//
//
///* N C (N/2) 에서 모든 경우의 수를 탐색할 필요 없이, (N-1) C (N/2-1)의 경우의 수만 탐색하면 됨. */
//void TeamBalancing(int(&Array)[20][20], vector<int> Indices, int N)
//{
//	if (Indices.size() > N / 2)
//		return;
//
//
//	/* 팀 능력치 계산 */
//	if (Indices.size() == N / 2)
//	{
//		int PowerStart = 0;						/* 스타트 팀의 능력 */
//		int PowerLink = 0;							/* 링크 팀의 능력 */
//
//		/* 링크 팀 인덱스 수집 */
//		int ExIndices[10];
//		int ExSize = 0;
//		for (int i = 0; i < N; ++i)
//		{
//			if (IncludedIndex[i] == false)
//			{
//				ExIndices[ExSize++] = i;
//			}
//		}
//
//#ifdef DEBUG
//		cout << "***Incides : \n";
//		for (int i = 0; i < Indices.size(); ++i)
//		{
//			cout << Indices[i] << " ";
//		}
//		cout << "\n";
//
//		cout << "***Included : \n";
//		for (int i = 0; i < N; ++i)
//		{
//			cout << IncludedIndex[i] << " ";
//		}
//		cout << "\n";
//
//		cout << "***ExIndices : \n";
//		for (int i = 0; i < ExSize; ++i)
//		{
//			cout << ExIndices[i] << " ";
//		}
//		cout << endl;
//#endif // DEBUG
//
//
//
//		/* 각 팀의 능력치 계산 시작 */
//		for (int i = 0; i < Indices.size(); ++i)
//		{
//			for (int j = 0; j < Indices.size(); ++j)
//			{
//				PowerStart += Array[Indices[i]][Indices[j]];
//				PowerLink += Array[ExIndices[i]][ExIndices[j]];
//			}
//		}
//
//#ifdef DEBUG
//		cout << "Start : " << PowerStart << ", Link : " << PowerLink << endl;
//#endif // DEBUG
//
//
//
//		BestBalance = min(BestBalance, abs(PowerStart - PowerLink));
//		return;
//	}
//
//
//	
//	for (int i = Indices.size() == 0 ? 0 : Indices.back() + 1; i < (Indices.size() == 0 ? 1 : N) ; ++i)
//	{
//		//cout << "index : " << i << "\n";
//		Indices.push_back(i);
//		IncludedIndex[i] = true;
//		TeamBalancing(Array, Indices, N);
//		IncludedIndex[i] = false;
//		Indices.pop_back();
//	}
//}
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
//	int Array[20][20];
//	for (int i = 0; i < N; ++i)
//	{
//		for (int j = 0; j < N; ++j)
//		{
//			cin >> Array[i][j];
//		}
//	}
//
//	vector<int> Indices;
//	Indices.reserve(N / 2);
//	TeamBalancing(Array, Indices, N);
//
//	cout << BestBalance << "\n";
//	return 0;
//}