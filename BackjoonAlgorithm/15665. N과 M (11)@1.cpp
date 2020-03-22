//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_limit = 7;
//
//void duplicated_nondescent_sequence(int(&nums)[max_limit], size_t size, int n, int m, int count = 0)
//{
//	static int sequence[max_limit] = { 0 };
//	if (count == m)
//	{
//		for (int i = 0; i < m; ++i)
//			cout << sequence[i] << " ";
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 0; i < size; ++i)
//	{
//		sequence[count] = nums[i];
//		duplicated_nondescent_sequence(nums, size, n, m, count + 1);
//		sequence[count] = 0;
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
//	int nums[max_limit] = { 0 };
//	size_t num_size = 0;
//	for (int i = 0; i < n; ++i)
//	{
//		int num;
//		cin >> num;
//
//		bool dup = false;
//		for (int j = 0; j < num_size; ++j)
//		{
//			if (num == nums[j])
//			{
//				dup = true;
//				false;
//			}
//		}
//		if (dup == false)
//		{
//			nums[num_size++] = num;
//		}
//	}
//
//	sort(nums + 0, nums + num_size);
//	duplicated_nondescent_sequence(nums, num_size, n, m);
//
//	return 0;
//}