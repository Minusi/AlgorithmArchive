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
//void PreOrder(int(&In)[100000], int(&Index)[100001], int(&Post)[100000], int InStart, int InEnd, int PostStart, int PostEnd)
//{
//	if (InStart > InEnd || PostStart > PostEnd)
//	{
//		return;
//	}
//	//cout << "\nins : " << InStart << ", ine : " << InEnd << ", posts : " << PostStart << ", poste : " << PostEnd << "\n";
//	cout << Post[PostEnd] << " ";
//	PreOrder(In, Index, Post, InStart, Index[Post[PostEnd]] - 1, PostStart, PostStart + Index[Post[PostEnd]] - InStart - 1);
//	PreOrder(In, Index, Post, Index[Post[PostEnd]] + 1, InEnd, PostStart + Index[Post[PostEnd]] - InStart, PostEnd - 1);
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
//	int InOrder[100000];
//	int InOrderIndex[100001];
//	int PostOrder[100000];
//
//	for (int i = 0; i < N; ++i)
//		cin >> InOrder[i];
//	for (int i = 0; i < N; ++i)
//		cin >> PostOrder[i];
//	for (int i = 0; i < N; ++i)
//		InOrderIndex[InOrder[i]] = i;
//
//	PreOrder(InOrder, InOrderIndex, PostOrder, 0, N - 1, 0, N - 1);
//	cout << "\n";
//	return 0;
//}