//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int max_nm = 8;
//struct infos
//{
//	int nums[max_nm] = { 0 };
//	int counts[max_nm] = { 0 };
//	size_t size = 0;
//};
//
//void less_bubble(infos &info)
//{
//	for (int i = 0; i < info.size - 1; ++i)
//	{
//		for (int j = i + 1; j < info.size; ++j)
//		{
//			if (info.nums[i] > info.nums[j])
//			{
//				int temp_num = info.nums[i];
//				int temp_cnt = info.counts[i];
//				info.nums[i] = info.nums[j];
//				info.counts[i] = info.counts[j];
//				info.nums[j] = temp_num;
//				info.counts[j] = temp_cnt;
//			}
//		}
//	}
//}
//
//
//void non_duplicated_sequence(infos& info, const int n, const int m, int count = 0)
//{
//	static int sequence[max_nm] = { 0 };
//	if (m == count)
//	{
//		for (int i = 0; i < m; ++i)
//			cout << sequence[i] << " ";
//		cout << "\n";
//		return;
//	}
//
//	int prev_num = 0;
//	for (int i = 0; i < info.size; ++i)
//	{
//		if (i > 0)	prev_num = info.nums[i - 1];
//		
//		if (prev_num != info.nums[i] && info.counts[i] > 0)
//		{
//			info.counts[i]--;
//			sequence[count] = info.nums[i];
//			non_duplicated_sequence(info, n, m, count + 1);
//			sequence[count] = 0;
//			info.counts[i]++;
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
//	infos info;
//	for (int i = 0; i < n; ++i)
//	{
//		int num;
//		cin >> num;
//		bool dups = false;
//		for (int s = 0; s < info.size; ++s)
//		{
//			if (info.nums[s] == num)
//			{
//				dups = true;
//				info.counts[s]++;
//				break;
//			}
//		}
//		if (dups == false)
//		{
//			info.nums[info.size] = num;
//			info.counts[info.size] = 1;
//			info.size++;
//		}
//	}
//	
//	less_bubble(info);
//	non_duplicated_sequence(info, n, m, 0);
//	return 0;
//}