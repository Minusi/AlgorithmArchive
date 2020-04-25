//#include <iostream>
//#include <cmath>	
//#include <vector>
//using namespace std;
//
//// �Էµ� �迭�κ��� ���׸�Ʈ Ʈ���� �����մϴ�(�̹� ���׸�Ʈ Ʈ�������� �ε����� 1���� �����ϵ��� �Ͽ����ϴ�).
//int init_stree(vector<int>& stree, vector<int>& data, int node, int begin, int end)
//{
//	if (begin == end)
//		return stree[node] = data[begin];
//
//	int mid = (begin + end) / 2;
//	return stree[node] = init_stree(stree, data, node * 2, begin, mid) + init_stree(stree, data, node * 2 + 1, mid + 1, end);
//}
//
//// �������� ���ϴ� �Լ��Դϴ�.
//// �� ��, begin-end �� left-right�� �ʱ�ȭ�� ���� �迭�� [0 , n - 1] ������ �������Ƿ�, �̿� ������� �մϴ�.
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
//// ���׸�Ʈ Ʈ���� ���ŵ� ���� �ݿ��ϴ� �Լ��Դϴ�.
//// index, begin-end��  �ʱ�ȭ�� ���� �迭�� [0 , n - 1] ������ �������Ƿ�, �̿� ������� �մϴ�.
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