//#include <iostream>
//#include <vector>
//#include <cmath>
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
//#define INF 987654321
//int FindSubseq(int(&Sequence)[20], int N, int S, vector<int> &Sum, int Last = -1)
//{
//	int Add = Sum.empty() ? INF : 0;
//	for (const auto& it : Sum)
//		Add += it;
//
//	int Return = 0;
//	if (Add == S)
//	{
//#ifdef DEBUG
//		cout << "Last : " << Last << "\n";
//		for (auto const& it : Sum)
//		{
//			cout << it << " ";
//		}
//		cout << "\n";
//		cout << "*** Res : " << Add << "\n";
//#endif // DEBUG
//		Return++;
//	}
//
//	if (Last > N - 1)
//		return Return;
//
//
//
//	for (int i = Last + 1; i < N; ++i)
//	{
//		Sum.push_back(Sequence[i]);
//		Last = i;
//		Return += FindSubseq(Sequence, N, S, Sum, Last);
//		Sum.pop_back();
//	}
//
//	return Return;
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N, S;
//	cin >> N >> S;
//
//	int Sequence[20];
//	for (int i = 0; i < N; ++i)
//#ifdef DEBUG
//	{
//		Sequence[i] = GenerateSingleTestData<int>(-5, 5);
//		cout << Sequence[i] << " ";
//	}
//	cout << "\n";
//#else
//		cin >> Sequence[i];
//#endif // DEBUG
//
//	vector<int> Sum;
//	Sum.reserve(N);
//	int Value = FindSubseq(Sequence, N, S, Sum);
//	cout << Value << "\n";
//	return 0;
//}