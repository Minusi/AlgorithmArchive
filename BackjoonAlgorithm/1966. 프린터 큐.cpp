//#include <iostream>
//#include <algorithm>
//#include <functional>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//#endif
//
//
//
//
//struct Document
//{
//public:
//	int Priority;
//	int Name;
//
//	Document() = default;
//	Document(int P, int N) : Priority(P), Name(N)
//	{
//	}
//public:
//	bool operator>(const Document& Rhs) const
//	{
//		return Priority > Rhs.Priority;
//	}
//
//	bool operator<(const Document& Rhs) const
//	{
//		return Priority < Rhs.Priority;
//	}
//
//	//bool operator>=(Document& Rhs) const
//	//{
//	//	return Priority >= Rhs.Priority;
//	//}
//
//	//bool operator<=(const Document& Rhs) const
//	//{
//	//	return Priority <= Rhs.Priority;
//	//}
//};
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int T;
//	cin >> T;
//	for (int tc = 1; tc <= T; ++tc)
//	{
//		/* 문서 수 */
//		int N;
//		cin >> N;
//
//		/* 문서 위치 */
//		int M;
//		cin >> M;
//
//		/* 문서 입력 */
//#define MAX 150
//		Document Docs[MAX];
//		int Front = 0;
//		int Back = 0;
//
//		int Priorities[100];
//		int PriorIndex = 0;
//
//		int TempPriority;
//		for (int i = 0; i < N; ++i)
//		{
//			cin >> TempPriority;
//			Docs[i].Name = i;
//			Docs[i].Priority = TempPriority;
//			Priorities[i] = TempPriority;
//		}
//		Back = N - 1;
//
//		sort(Priorities, Priorities + N, greater<int>());
//
//		int Count = 1;
//		while (PriorIndex < N)
//		{
//			if (Docs[Front].Priority >= Priorities[PriorIndex])
//			{
//				if (Docs[Front].Name == M)
//				{
//					cout << Count << "\n";
//					break;
//				}
//
//				if (Front == MAX - 1)
//					Front = 0;
//				else
//					Front++;
//				PriorIndex++;
//				Count++;
//			}
//			else
//			{
//				if (Back == MAX - 1)
//					Back = 0;
//				else
//					Back++;
//
//				Docs[Back].Name = Docs[Front].Name;
//				Docs[Back].Priority = Docs[Front].Priority;
//
//				if (Front == MAX - 1)
//					Front = 0;
//				else
//					Front++;
//			}
//
//#ifdef DEBUG
//			cout << "Front : " << Front << ", Back : " << Back << "\n";
//#endif // DEBUG
//		}
//	}
//
//
//
//	return 0;
//}