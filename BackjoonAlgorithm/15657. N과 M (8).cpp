//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//void less_bubble(int(&nums)[8], int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			if (nums[i] > nums[j])
//			{
//				int temp = nums[i];
//				nums[i] = nums[j];
//				nums[j] = temp;
//			}
//		}
//	}
//}
//
//void non_descend_sequence(int(&nums)[8], int n, int m, int start, int count)
//{
//	static int indices[8] = { -1, -1, -1, -1, -1, -1, -1, -1 };
//	if (count == m)
//	{
//		for (int i = 0; i < count; ++i)
//			if (indices[i] != -1)
//				cout << nums[indices[i]] << " ";
//		cout << "\n";
//		return;
//	}
//
//	for (int i = start; i < n; ++i)
//	{
//		indices[count] = i;
//		non_descend_sequence(nums, n, m, i, count + 1);
//		indices[count] = -1;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//
//	int nums[8];
//	for (size_t i = 0; i < n; i++)
//		cin >> nums[i];
//
//	less_bubble(nums, n);
//	non_descend_sequence(nums, n, m, 0, 0);
//	return 0;
//}