//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_limit = 8;
//struct countnum
//{
//	int num = 0;
//	int count = 0;
//};
//
//void less_bubble(countnum(&cnum)[max_limit], size_t size)
//{
//	for (int i = 0; i < size - 1; ++i)
//	{
//		for (int j = i + 1; j < size; ++j)
//		{
//			if (cnum[i].num > cnum[j].num)
//			{
//				int temp = cnum[i].num;
//				int temp_cnt = cnum[i].count;
//				cnum[i].num = cnum[j].num;
//				cnum[i].count = cnum[j].count;
//				cnum[j].num = temp;
//				cnum[j].count = temp_cnt;
//			}
//		}
//	}
//}
//
//void nodup_nodescend_permutation(countnum(&cnum)[max_limit], size_t cnum_size, int n, int m, int start, int count)
//{
//	static int nums[max_limit] = { 0 };
//	if (m == count)
//	{
//		for (int i = 0; i < m; ++i)
//			cout << nums[i] << " ";
//		cout << "\n";
//		return;
//	}
//
//	for (int i = start; i < cnum_size; ++i)
//	{
//		if (cnum[i].count > 0)
//		{
//			cnum[i].count--;
//			nums[count] = cnum[i].num;
//			nodup_nodescend_permutation(cnum, cnum_size, n, m, i, count + 1);
//			nums[count] = 0;
//			cnum[i].count++;
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	countnum cnum[max_limit];
//	size_t cnum_size = 0;
//	int num;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> num;
//		bool dup = false;
//		for (int s = 0; s < cnum_size; ++s)
//		{
//			if (cnum[s].num == num)
//			{
//				dup = true;
//				cnum[s].count++;
//				break;
//			}
//		}
//		if (dup == false)
//		{
//			cnum[cnum_size].num = num;
//			cnum[cnum_size].count++;
//			cnum_size++;
//		}
//	}
//
//	less_bubble(cnum, cnum_size);
//	nodup_nodescend_permutation(cnum, cnum_size, n, m, 0, 0);
//
//	return 0;
//}