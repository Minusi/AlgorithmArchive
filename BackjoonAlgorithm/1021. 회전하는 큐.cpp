//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <memory>
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
//struct CircularQueue
//{
//public:
//	CircularQueue(int InitSize) : Data(new int[InitSize]), MaxSize(InitSize)
//	{
//
//	}
//
//	/* 원형 큐 앞에 원소를 삽입합니다. */
//	void Push_Front(int Input)
//	{
//		if (CurSize >= MaxSize)
//		{
//			return;
//		}
//
//		if (CurSize == 0)
//		{
//			Data.get()[Front] = Input;
//		}
//		else
//		{
//			if (Front == 0)
//			{
//				Front = MaxSize - 1;
//				Data.get()[Front] = Input;
//			}
//			else
//			{
//				Data.get()[--Front] = Input;
//			}
//		}
//
//		CurSize++;
//	}
//
//
//	/* 원형 큐 뒤에 원소를 삽입합니다. */
//	void Push_Back(int Input)
//	{
//		if (CurSize >= MaxSize)
//		{
//			return;
//		}
//
//		if (CurSize == 0)
//		{
//			Data.get()[Back] = Input;
//		}
//		else
//		{
//			if (Back == MaxSize - 1)
//			{
//				Back = 0;
//				Data.get()[Back] = Input;
//			}
//			else
//			{
//				Data.get()[++Back] = Input;
//			}
//		}
//
//		CurSize++;
//	}
//
//
//
//	/* 원형 큐 앞에 원소를 꺼냅니다. */
//	int Pop_Front()
//	{
//		if (CurSize <= 0)
//		{
//			return -999999;
//		}
//
//		int PopItem = Data.get()[Front];
//		Data.get()[Front] = -1;
//		if (Front == MaxSize - 1)
//		{
//			Front = 0;
//		}
//		else
//		{
//			Front++;
//		}
//
//		CurSize--;
//
//		return PopItem;
//	}
//
//	/* 원형 큐 뒤에 원소를 꺼냅니다. */
//	int Pop_Back()
//	{
//		if (CurSize <= 0)
//		{
//			return -999999;
//		}
//
//		int PopItem = Data.get()[Back];
//		Data.get()[Back] = -1;
//		if (Back == 0)
//		{
//			Back = MaxSize - 1;
//		}
//		else
//		{
//			Back--;
//		}
//
//		CurSize--;
//
//		return PopItem;
//	}
//
//	void Rotate_Left()
//	{
//		if (CurSize <= 0)
//		{
//			return;
//		}
//
//		int Pop = Pop_Front();
//		Push_Back(Pop);
//	}
//
//	void Rotate_Right()
//	{
//		if (CurSize <= 0)
//		{
//			return;
//		}
//
//		int Pop = Pop_Back();
//		Push_Front(Pop);
//	}
//
//	void PrintItem() const
//	{
//		if (CurSize <= 0)
//			return;
//
//		int Index = Front;
//		while (Index != Back)
//		{
//			cout << Data.get()[Index] << " ";
//
//			if (Index == MaxSize - 1)
//			{
//				Index = 0;
//			}
//			else
//			{
//				Index++;
//			}
//		}
//		cout << Data.get()[Index] << " ";
//		cout << endl;
//		cout << "(";
//		for (int i = 0; i < MaxSize; ++i)
//		{
//			cout << Data.get()[i] << " ";
//		}
//		cout << ")\n";
//
//	}
//
//	int GetFront() const
//	{
//		if (CurSize <= 0)
//			return -999999;
//		
//		return Data.get()[Front];
//	}
//
//	int GetIndex(int item)
//	{
//		for (int i = 0; i < MaxSize; ++i)
//		{
//			if (Data.get()[i] == item)
//				return i;
//		}
//
//		return -1;
//	}
//private:
//	unique_ptr<int[]> Data;
//
//public:
//	int Front = 0;
//	int Back = 0;
//	size_t MaxSize = 0;
//	size_t CurSize = 0;
//};
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int N;
//	cin >> N;
//
//	int M;
//	cin >> M;
//
//	int Result = 0;
//	
//
//
//	CircularQueue CQ(N);
//	for (int i = 0; i < N; ++i)
//	{
//		CQ.Push_Back(i);
//	}
//
//	
//
//	/* 목표 입력 */
//	vector<int> Tgts;
//	int Target;
//	for (int i = 0; i < M; ++i)
//	{
//		cin >> Target;
//		Tgts.push_back(Target - 1);
//	}
//#ifdef DEBUG
//	for (const auto& it : Tgts)
//	{
//		cout << it << " ";
//	}
//	cout << "\n";
//#endif // DEBUG
//
//
//	
//	enum Direction
//	{
//		Left = -1, Stop = 0, Right = 1
//	};
//	Direction Dir = Stop;
//	int Dist_Left = 0;
//	int Dist_Right = 0;
//	int Index;
//	for (const auto& it : Tgts)
//	{
//		Index = CQ.GetIndex(it);
//		if (CQ.Front == Index)
//		{
//			Dir = Stop;
//		}
//		else
//		{
//			/* it <= Back < Front*/
//			if (CQ.Front > Index)
//			{
//				Dist_Left = CQ.Back - Index + 1;
//				Dist_Right = (CQ.MaxSize + Index) - CQ.Front;
//			}
//			else
//			{
//				/* Front < Index <= Back */
//				if (Index <= CQ.Back)
//				{
//					Dist_Left = CQ.Back - Index + 1;
//					Dist_Right = Index - CQ.Front;
//				}
//				/* Back < Front < Index */
//				else
//				{
//					Dist_Left = CQ.Back + CQ.MaxSize - Index + 1;
//					Dist_Right = Index - CQ.Front;
//				}
//			}
//
//			Dir = Dist_Left <= Dist_Right ? Left : Right;
//		}
//
//
//#ifdef DEBUG
//		cout << "********************************** \n";
//		cout << "Front : " << CQ.Front << ", Back : " << CQ.Back << "\n";
//		cout << "DistL : " << Dist_Left << ", DistR : " << Dist_Right << ", Dir : " << Dir << "\n";
//		CQ.PrintItem();
//		cout << "********************************** \n";
//#endif // DEBUG
//		int Count = 0;
//		while (it != CQ.GetFront())
//		{
//			if (Dir == Left)
//			{
//				CQ.Rotate_Right();
//				Count++;
//			}
//			else if(Dir == Right)
//			{
//				CQ.Rotate_Left();
//				Count++;
//			}
//
//#ifdef DEBUG
//			cout << "\n";
//			CQ.PrintItem();
//#endif // DEBUG
//		}
//#ifdef DEBUG
//#endif // DEBUG
//
//
//
//		CQ.Pop_Front();
//		Result += Count;
//	}
//	cout << Result << endl;
//	return 0;
//}