//#include <iostream>
//#include <vector>
//#include <map>
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
//struct TreeNode
//{
//	typedef int Dest;
//	typedef int Cost;
//public:
//	int Node;
//	map<Dest, Cost> Conns;
//
//	
//
//public:
//	static int MaxCost;
//	static int FarNode;
//	static void CalcRadius(const TreeNode(&Tree)[100001])
//	{
//		Tree[1].CalcRadiusInNode(Tree);
//		Tree[FarNode].CalcRadiusInNode(Tree);
//	}
//
//private:
//	void CalcRadiusInNode(const TreeNode(&Tree)[100001], const TreeNode* Prev = nullptr, int LocalCost = 0) const
//	{
//		/* 다른 단말 노드에 도착함. */
//		if (this->Conns.size() == 1 && Prev != nullptr)
//		{
//#ifdef DEBUG
//			cout << "마지막 도착 : " << this->Node << ", 총거리 ; " << LocalCost << endl;
//#endif // DEBUG
//
//			if (MaxCost < LocalCost)
//			{
//				MaxCost = LocalCost;
//				FarNode = this->Node;
//			}
//			return;
//		}
//
//		for (const auto& it : this->Conns)
//		{
//			if (Prev != nullptr)
//			{
//				if (it.first == Prev->Node)
//				{
//					continue;
//				}
//			}
//
//			Tree[it.first].CalcRadiusInNode(Tree, this, LocalCost + it.second);
//		}
//	}
//};
//int TreeNode::MaxCost = -1;
//int TreeNode::FarNode = -1;
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int V;
//	cin >> V;
//
//
//	
//
//	TreeNode Tree[100001];
//	for (int i = 1; i <= V; ++i)
//	{
//		Tree[i].Node = i;
//	}
//
//	int CurrNode;
//	int DestNode;
//	int DestCost;
//	
//	for (int i = 0; i < V; ++i)
//	{
//		/* 노드 번호 */
//		cin >> CurrNode;
//		while (true)
//		{
//			/* 대상 정점 */
//			cin >> DestNode;
//			if (DestNode == -1)
//				break;
//
//			cin >> DestCost;
//			Tree[CurrNode].Conns.emplace(DestNode, DestCost);
//		}
//	}
//
//#ifdef DEBUG
//	Start = chrono::system_clock::now();
//#endif // DEBUG
//
////#ifdef DEBUG
////	for (int i = 1; i <= V; ++i)
////	{
////		cout << Tree[i].Node << "번 노드의 정보\n";
////		for (const auto& it : Tree[i].Conns)c
////		{
////			cout << "COST : " << it.first << ", DEST : " << it.second << "\n";
////		}
////	}
////#endif // DEBUG
//
//	TreeNode::CalcRadius(Tree);
//	cout << TreeNode::MaxCost << "\n";
//
//#ifdef DEBUG
//	Time = chrono::system_clock::now() - Start;
//	cout << "경과 시간 : " << Time.count() / 1000000000.0 << "\n";
//#endif // DEBUG
//
//	return 0;
//}
