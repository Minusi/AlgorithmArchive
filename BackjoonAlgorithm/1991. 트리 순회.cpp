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
//	int Left = -1;
//	int Right = -1;
//};
//
//void PreOrder(Node(&Tree)[26], int Node = 0)
//{
//	cout << (char)('A' + Node);
//	if(Tree[Node].Left != -1)
//		PreOrder(Tree, Tree[Node].Left);
//	if(Tree[Node].Right != -1)
//		PreOrder(Tree, Tree[Node].Right);
//}
//
//void InOrder(Node(&Tree)[26], int Node = 0)
//{
//	if (Tree[Node].Left != -1)
//		InOrder(Tree, Tree[Node].Left);
//	cout << (char)('A' + Node);
//	if (Tree[Node].Right != -1)
//		InOrder(Tree, Tree[Node].Right);
//}
//
//void PostOrder(Node(&Tree)[26], int Node = 0)
//{
//	if (Tree[Node].Left != -1)
//		PostOrder(Tree, Tree[Node].Left);
//	if (Tree[Node].Right != -1)
//		PostOrder(Tree, Tree[Node].Right);
//	cout << (char)('A' + Node);
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//
//
//	
//	/* 인덱스 : 노드 이름, 값 : 부모 노드 */
//	Node Tree[26];
//	char Input;
//	int Temp;
//	for (int i = 0; i < N; ++i)
//	{
//		cin >> Input;
//		Temp = Input - 'A';
//		
//		cin >> Input;
//		if (Input != '.')
//		{
//			Tree[Temp].Left = Input - 'A';
//		}
//		
//		cin >> Input;
//		if (Input != '.')
//		{
//			Tree[Temp].Right = Input - 'A';
//		}
//	}
//
//#ifdef DEBUG
//	for (int i = 0; i < N; ++i)
//	{
//		cout << "Index : " << (char)(i + 'A') << ", Left : " << (char)('A' + Tree[i].Left) << ", RIGHT : " << (char)('A' + Tree[i].Right) << endl;
//	}
//#endif // DEBUG
//
//	PreOrder(Tree);
//	cout << "\n";
//	InOrder(Tree);
//	cout << "\n";
//	PostOrder(Tree);
//	cout << "\n";
//	return 0;
//}