//#include <iostream>
//#include <cmath>	
//#include <vector>
//using namespace std;
//
//// 입력된 배열로부터 세그먼트 트리를 구성합니다(이번 세그먼트 트리에서는 인덱스가 1에서 시작하도록 하였습니다).
//int init_stree(vector<int>& stree, vector<int>& data, int node, int begin, int end)
//{
//	if (begin == end)
//		return stree[node] = data[begin];
//
//	int mid = (begin + end) / 2;
//	return stree[node] = init_stree(stree, data, node * 2, begin, mid) + init_stree(stree, data, node * 2 + 1, mid + 1, end);
//}
//
//// 구간합을 구하는 함수입니다.
//// 이 때, begin-end 및 left-right는 초기화시 사용된 배열이 [0 , n - 1] 범위를 가졌으므로, 이에 맞춰줘야 합니다.
//int sum_stree(vector<int>& stree, int node, int begin, int end, const int left, const int right)
//{
//	if (right < begin || end < left)
//		return 0;
//	else if (left <= begin && end <= right)
//		return stree[node];
//	else
//	{
//		int mid = (begin + end) / 2;
//		return sum_stree(stree, node * 2, begin, mid, left, right) + sum_stree(stree, node * 2 + 1, mid + 1, end, left, right);
//	}
//}
//
//
//// 세그먼트 트리의 갱신된 값을 반영하는 함수입니다.
//// index, begin-end는  초기화시 사용된 배열이 [0 , n - 1] 범위를 가졌으므로, 이에 맞춰줘야 합니다.
//void update_stree(vector<int>& stree, int node, const int index, const int diff, int begin, int end)
//{
//	if ((begin <= index && index <= end) == false)
//		return;
//
//	stree[node] += diff;
//	
//	if (begin != end)
//	{
//		int mid = (begin + end) / 2;
//		update_stree(stree, node * 2, index, diff, begin, mid);
//		update_stree(stree, node * 2 + 1, index, diff, mid + 1, end);
//	}
//}
//
//int main()
//{
//	vector<int> v = { 1,2,3,4,5,6,7,8 };
//
//	int stree_size = (int)ceil(log2(v.size()));
//	vector<int> st(1 << (stree_size + 1));
//
//	init_stree(st, v, 1, 0, v.size() - 1);
//	cout << sum_stree(st, 1, 0, v.size() - 1, 0, 7) << "\n";	// 36
//	update_stree(st, 1, 0, 2, 0, v.size() - 1);
//	cout << sum_stree(st, 1, 0, v.size() - 1, 0, 7) << "\n";	// 38
//	return 0;
//}