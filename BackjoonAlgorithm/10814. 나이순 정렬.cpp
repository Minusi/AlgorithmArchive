//#include <iostream>
//#include <algorithm>
//#include <string.h>
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
//#pragma warning(disable:4996)
//struct Member
//{
//	int Age;
//	char* Name;
//
//	Member() : Name(new char[101])
//	{
//	}
//
//	~Member()
//	{
//		if (Name != nullptr)
//			delete Name;
//	}
//
//	Member(const Member& rhs)
//	{
//		Age = rhs.Age;
//		if (Name == nullptr)
//			Name = new char[101];
//		strcpy(Name, rhs.Name);
//	}
//
//	Member& operator=(const Member& rhs)
//	{
//		//cout << "rhs : " << rhs.Age << " " << rhs.Name << endl;
//		if (this != &rhs)
//		{
//			Age = rhs.Age;
//			if (Name == nullptr)
//				Name = new char[101];
//			strcpy(Name, rhs.Name);
//		}
//
//		return *this;
//	}
//
//	bool operator>(const Member& rhs) const
//	{
//		return Age > rhs.Age;
//	}
//
//	bool operator<(const Member& rhs) const
//	{
//		return Age < rhs.Age;
//	}
//
//	bool operator==(const Member& rhs) const
//	{
//		return Age == rhs.Age;
//	}
//};
//
//
//
//void Merge(Member(&Array)[100000], int AStart, int Median, int BEnd)
//{
//	/* 유효성 검사 */
//	if (AStart < 0 || Median < 0 || BEnd < 0 || max(max(AStart, Median), BEnd) != BEnd)
//		return;
//
//	int BStart = Median + 1;
//	Member* Sorted = new Member[BEnd - AStart + 1];
//	
//#ifdef DEBUG
//	//cout << "AS : " << AStart << ", AEND : " << Median << ", BS : " << BStart << ", BEND : " << BEnd << endl;
//#endif // DEBUG
//	int Left = AStart;
//	int Right = BStart;
//	int SIndex = 0;
//	while (Left <= Median && Right <= BEnd)
//	{
//		/* 일반 비교식 */
//		if (Array[Left] > Array[Right])
//		{
//			Sorted[SIndex++] = Array[Right++];
//		}
//		else
//		{
//			Sorted[SIndex++] = Array[Left++];
//		}
//	}
//
//
//
//	/* 몰아넣기 */
//	if (Left > Median)
//	{
//		while (Right <= BEnd)
//			Sorted[SIndex++] = Array[Right++];
//	}
//	if (Right > Median)
//	{
//		while (Left <= Median)
//			Sorted[SIndex++] = Array[Left++];
//	}
//
//
//
//	SIndex = 0;
//	for (int k = AStart; k <= BEnd; ++k)
//	{
//		if(SIndex <= BEnd - AStart + 1)
//			Array[k] = Sorted[SIndex++];
//	}
//
//#ifdef DEBUG
//	//cout << "부분 결과 : " << endl;
//	//for (int i = AStart; i <= BEnd; ++i)
//	//{
//	//	cout << Array[i].Age << " " << Array[i].Name << endl;
//	//}
//	//cout << endl;
//#endif // DEBUG
//}
//
//
//
//void MergeSort(Member(&Array)[100000], int Start, int End)
//{
//	if (Start >= End || Start < 0 || End < 0)	return;
//
//	int Median = (Start + End) / 2;
//	MergeSort(Array, Start, Median);
//	MergeSort(Array, Median + 1, End);
//	Merge(Array, Start, Median, End);
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	
//	Member Members[100000];
//#ifdef DEBUG
//	vector<string> Output;
//	GenerateTestString(N, 100, 100, Output);
//	for (int i = 0; i < N; ++i)
//	{
//		Members[i].Age = GenerateSingleTestData<int>(1, 10);
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		strcpy(Members[i].Name, Output[i].c_str());
//	}
//
//	cout << "시작 배열 : " << endl;
//	for (int i = 0; i < N; ++i)
//	{
//		cout << Members[i].Age << " " << Members[i].Name << "\n";
//	}
//	cout << endl;
//#else
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Members[i].Age;
//		cin >> Members[i].Name;
//	}
//#endif // DEBUG
//
//	MergeSort(Members, 0, N - 1);
//
//	for (int i = 0; i < N; ++i)
//	{
//		cout << Members[i].Age << " " << Members[i].Name << "\n";
//	}
//
//	
//	return 0;
//}