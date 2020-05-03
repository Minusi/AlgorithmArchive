//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//constexpr int INF = 2000000000;
//
//struct segment_tree
//{
//	segment_tree(size_t array_size)
//	{
//		array.reserve(array_size);
//		for (int i = 0; i < array_size; ++i)
//			array.emplace_back(0);
//		
//		size_t tree_size = (long long)1 << ((int)ceil(log2(array_size)) + 1);
//		tree.reserve(tree_size);
//		for (int i = 0; i < tree_size; ++i)
//			tree.emplace_back(0);
//	}
//
//	int initialize(int node, int begin, int end)
//	{
//		if (begin == end)
//			return tree[node] = array[begin];
//
//		int mid = (begin + end) / 2;
//		return tree[node] = min(initialize(node * 2, begin, mid), initialize(node * 2 + 1, mid + 1, end));
//	}
//
//	int find_min(int node, int begin, int end, const int left, const int right)
//	{
//		if (end < left || begin > right)
//			return INF;
//
//		if (left <= begin && end <= right)
//			return tree[node];
//
//		int mid = (begin + end) / 2;
//		return min(find_min(node * 2, begin, mid, left, right), find_min(node * 2 + 1, mid + 1, end, left, right));
//	}
//
//	vector<int> array;
//	vector<int> tree;
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	segment_tree st(n + 1);
//	
//	for (int i = 1; i <= n; ++i)
//		cin >> st.array[i];
//	st.initialize(1, 1, st.array.size() - 1);
//	
//	{
//		int left, right;
//		for (int i = 1; i <= m; ++i)
//		{
//			cin >> left >> right;
//			cout << st.find_min(1, 1, st.array.size() - 1, left, right) << "\n";
//		}
//	}
//
//	return 0;
//}