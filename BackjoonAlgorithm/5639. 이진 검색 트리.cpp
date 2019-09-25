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
//struct Node
//{
//	int Value;
//	int Left = -1;
//	int Right = -1;
//};
//
//void MakeTree(Node(&Input)[10000], int Size)
//{
//	Node* Parent;
//	Node* Compare;
//	for (int i = 1; i < Size; ++i)
//	{
//		Compare = &Input[0];
//		while (true)
//		{
//			if (Input[i].Value > Compare->Value)
//			{
//				Parent = Compare;
//				if (Compare->Right == -1)
//				{
//					Parent->Right = i;
//					break;
//				}
//				else
//				{
//					Compare = &Input[Compare->Right];
//				}
//			}
//			else
//			{
//				Parent = Compare;
//				if (Compare->Left == -1)
//				{
//					Parent->Left = i;
//					break;
//				}
//				else
//				{
//					Compare = &Input[Compare->Left];
//				}
//			}
//		}
//	}
//}
//
//
//
//void PostOrder(Node(&Tree)[10000], int NodeIndex = 0)
//{
//	if (Tree[NodeIndex].Left != -1)
//		PostOrder(Tree, Tree[NodeIndex].Left);
//	if (Tree[NodeIndex].Right != -1)
//		PostOrder(Tree, Tree[NodeIndex].Right);
//	cout << Tree[NodeIndex].Value << " ";
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	Node PreOrder[10000];
//
//	int i = 0;
//	int Buffer;
//	while (cin >> Buffer)
//	{
//		PreOrder[i].Value = Buffer;
//		i++;
//	}
//
//	MakeTree(PreOrder, i);
//	PostOrder(PreOrder);
//	
//	return 0;
//}