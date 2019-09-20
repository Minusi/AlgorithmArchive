//#include <iostream>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>	
//#include "Utility.h"
//#endif // DEBUG
//
//
//
//struct Point
//{
//	int x;
//	int y;
//
//	bool operator>(const Point& rhs)
//	{
//		if (x > rhs.x)						return true;
//		else if (x == rhs.x && y > rhs.y)	return true;
//		else								return false;
//	}
//
//	bool operator<(const Point& rhs)
//	{
//		if (x < rhs.x)						return true;
//		else if (x == rhs.x && y < rhs.y)	return true;
//		else								return false;
//	}
//
//	bool operator==(const Point& rhs)
//	{
//		return (x == rhs.x) && (y == rhs.y);
//	}
//};
//
//
//
//void QuickSort(Point(&Array)[100000], int Start, int End)
//{
//	if (Start >= End)
//		return;
//
//	Point Pivot = Array[(Start + End) / 2];
//	int i = Start;
//	int j = End;
//	Point Temp;
//	do
//	{
//		while (Array[i] < Pivot)
//			i++;
//		while (Array[j] > Pivot)
//			j--;
//
//		if (i <= j)
//		{
//			Temp = Array[i];
//			Array[i] = Array[j];
//			Array[j] = Temp;
//
//			i++;
//			j--;
//		}
//	} while (i <= j);
//	
//	if (Start < j)
//		QuickSort(Array, Start, j);
//	if (End > i)
//		QuickSort(Array, i, End);
//}
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	
//	int N;
//	cin >> N;
//	if (N <= 0 || N > 100000) return -1;
//	
//	
//	
//	Point Points[100000];
//#ifdef DEBUG
//	chrono::system_clock::time_point Start = chrono::system_clock::now();
//	
//	for (int i = 0; i < N; ++i)
//	{
//		Points[i].x = GenerateSingleTestData<int>(-10, 10);
//		Points[i].y = GenerateSingleTestData<int>(-10, 10);
//	}
//#else
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Points[i].x;
//		cin >> Points[i].y;
//	}
//#endif // DEBUG
//
//	QuickSort(Points, 0, N-1);
//	
//#ifdef DEBUG
//	chrono::nanoseconds Time = chrono::system_clock::now() - Start;
//	cout << "경과 시간 : " << Time.count() / 1000000000.0 << endl;
//#endif // DEBUG
//
//	for (int i = 0; i < N; ++i)
//	{
//		cout << Points[i].x << " " << Points[i].y << '\n';
//	}
//
//}