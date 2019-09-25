//#include <iostream>
//#include <vector>
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
//	bool bCorrectLinked = false;
//	int Parent = -1;
//	vector<Node*> Connects;
//};
//
//
//
//void CleanNode(const Node& Parent, Node& Child)
//{
//	if (Child.bCorrectLinked == true)
//		return;
//
//	//cout << "Child(" << Child.Value << "), Parent(" << Parent.Value << ")\n";
//	Child.Parent = Parent.Value;
//	Child.bCorrectLinked = true;
//	if (Child.Connects.size() > 0)
//	{
//		Node* Temp;
//		for (int i = Child.Connects.size() -1; i >= 0; --i)
//		{
//			Temp = Child.Connects[i];
//			Child.Connects.pop_back();
//			CleanNode(Child, *Temp);
//			
//		}
//	}
//	Child.Connects.clear();
//}
//
//
//
//void MakeTree(Node (&Tree)[100001], int N, vector<int>& N1, vector<int>& N2)
//{
//	int vi;
//	for (int i = 2; i <= N; ++i)
//	{
//		vi = i - 2;
//
//		/* N1 노드가 이미 확실하게 연결되어 있을 때 */
//		if (Tree[N1[vi]].bCorrectLinked == true)
//		{
//			CleanNode(Tree[N1[vi]], Tree[N2[vi]]);
//		}
//		/* N2 노드가 이미 확실하게 연결되어 있을 때 */
//		else if (Tree[N2[vi]].bCorrectLinked == true)
//		{
//			CleanNode(Tree[N2[vi]], Tree[N1[vi]]);
//		}
//		/* 두 노드 모두 확실하게 연결되어 있지 않을 때 */
//		else
//		{
//			Tree[N1[vi]].Connects.push_back(&Tree[N2[vi]]);
//			Tree[N2[vi]].Connects.push_back(&Tree[N1[vi]]);
//		}
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
//
//	/* 인덱스 : 노드 번호 */
//	Node Tree[100001];
//	for (int i = 1; i <= N; ++i)
//	{
//		Tree[i].Value = i;
//	}
//	Tree[1].Parent = -1;
//	Tree[1].bCorrectLinked = true;
//	
//
//	vector<int> Node1, Node2;
//	Node1.reserve(N);
//	Node2.reserve(N);
//
//	int Temp;
//	for (int i = 2; i <= N; ++i)
//	{
//		cin >> Temp;
//		Node1.push_back(Temp);
//		cin >> Temp;
//		Node2.push_back(Temp);
//	}
//
//	MakeTree(Tree, N, Node1, Node2);
//
//	for (int i = 2; i <= N; ++i)
//	{
//		cout << Tree[i].Parent << "\n";
//	}
//	
//	
//	return 0;
//}