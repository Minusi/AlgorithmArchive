//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//constexpr int max_limit = 8;
//void less_bubble(int(&nums)[max_limit], int size)
//{
//	for (int i = 0; i < size - 1; ++i)
//	{
//		for (int j = i + 1; j < size; ++j)
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
//void dup_nondescend_permutation(int(&nums)[max_limit], int nums_size, int m, int start, int count)
//{
//	static int snums[max_limit] = { 0 };
//	if (count == m)
//	{
//		for (int i = 0; i < m; ++i)
//			cout << snums[i] << " ";
//		cout << "\n";
//		return;
//	}
//
//	for (int i = start; i < nums_size; ++i)
//	{
//		snums[count] = nums[i];
//		dup_nondescend_permutation(nums, nums_size, m, i, count + 1);
//		snums[count] = 0;
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
//	int nums[max_limit];
//	size_t nums_size = 0;
//
//	int num;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> num;
//		bool dup = false;
//		for (int s = 0; s < nums_size; ++s)
//		{
//			if (nums[s] == num)
//			{
//				dup = true;
//				break;
//			}
//		}
//			
//		if (dup == false)
//			nums[nums_size++] = num;
//	}
//
//	less_bubble(nums, nums_size);
//	dup_nondescend_permutation(nums, nums_size, m, 0, 0);
//	return 0;
//}