//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//struct segment_tree
//{
//	segment_tree(size_t n, size_t m)
//	{
//		array.clear();
//		tree.clear();
//
//		array.reserve(n);
//		for (int i = 0; i < n; ++i)
//			array.emplace_back(0);
//
//		size_t tree_size = (size_t)1 << ((int)ceil(log2(n + m)) + 1);
//		tree.reserve(tree_size);
//		for (int i = 0; i < tree_size; ++i)
//			tree.emplace_back(0);
//	}
//
//	int init(int node, const int m, int begin, int end)
//	{
//		if (begin == end)
//		{
//			if (begin >= m)
//			{
//				array[begin - m] = begin;
//				tree[node] = 1;
//			}
//			return tree[node];
//		}
//
//		int mid = (begin + end) / 2;
//		return tree[node] = init(node * 2, m, begin, mid) + init(node * 2 + 1, m, mid + 1, end);
//	}
//
//	int query(int node, int begin, int end, const int left, const int right)
//	{
//		if (end < left || right < begin)
//			return 0;
//
//		if (left <= begin && end <= right)
//			return tree[node];
//
//		int mid = (begin + end) / 2;
//		return query(node * 2, begin, mid, left, right) + query(node * 2 + 1, mid + 1, end, left, right);
//	}
//
//	int update(int node, int index, int val, int begin, int end)
//	{
//		if (index < begin || end < index)
//			return tree[node];
//
//		if (begin == end)
//			return tree[node] = val;
//		
//		int mid = (begin + end) / 2;
//		return tree[node] = update(node * 2, index, val, begin, mid) + update(node * 2 + 1, index, val, mid + 1, end);
//	}
//
//	vector<int> array;
//	vector<int> tree;
//};
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	int n, m, o;
//	while (t--)
//	{
//		cin >> n >> m;
//		segment_tree tree(n, m);
//
//		tree.init(1, m, 0, n + m - 1);
//		int i = m - 1;
//		for (int j = 0; j < m; ++j)
//		{
//			cin >> o;
//			o--;
//			cout << tree.query(1, 0, n + m - 1, 0, tree.array[o] - 1) << " ";
//
//			tree.update(1, tree.array[o], 0, 0, n + m - 1);
//			tree.array[o] = i--;
//			tree.update(1, tree.array[o], 1, 0, n + m - 1);
//		}
//		cout << "\n";
//	}
//
//	return 0;
//}