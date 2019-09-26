//#include <iostream>
//#include <algorithm>
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
//struct MaxHeap
//{
//public:
//	MaxHeap()
//	{
//		Size = 0;  
//		fill(begin(Data), begin(Data) + 100001, -1);
//	}
//	int Size;
//	int Data[100001];
//};
//void Push(MaxHeap& Heap, int Num)
//{
//	int Index = ++Heap.Size;
//	Heap.Data[Index] = Num;
//
//	int Temp;
//	while (Index > 1 && Heap.Data[Index] > Heap.Data[Index / 2])
//	{
//		Temp = Heap.Data[Index / 2];
//		Heap.Data[Index / 2] = Heap.Data[Index];
//		Heap.Data[Index] = Temp;
//
//		Index = Index / 2;
//	}
//}
//
//void Pop(MaxHeap& Heap)
//{
//	if (Heap.Size == 0)
//	{
//		cout << 0 << "\n";
//		return;
//	}
//
//	cout << Heap.Data[1] << "\n";
//	int Temp;
//	Heap.Data[1] = Heap.Data[Heap.Size];
//	Heap.Data[Heap.Size] = -1;
//	Heap.Size--;
//
//	int Index = 1;
//	int Left = Heap.Data[Index * 2];
//	int Right = Heap.Data[Index * 2 + 1];
//	while (Index * 2 <= Heap.Size & (Heap.Data[Index] < Left || Heap.Data[Index] < Right))
//	{
//		if (Left >= Right)
//			Index *= 2;
//		else
//			Index = 2 * Index + 1;
//
//		/* 자식 값 변경 */
//		Left = Heap.Data[Index * 2];
//		Right = Heap.Data[Index * 2 + 1];
//
//		/* 값 변경 */
//		Temp = Heap.Data[Index];
//		Heap.Data[Index] = Heap.Data[Index / 2];
//		Heap.Data[Index / 2] = Temp;
//
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//	
//	MaxHeap Heap;
//	int Buffer;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Buffer;
//		if (Buffer != 0)
//			Push(Heap, Buffer);
//		else
//			Pop(Heap);
//	}
//
//
//	return 0;
//}