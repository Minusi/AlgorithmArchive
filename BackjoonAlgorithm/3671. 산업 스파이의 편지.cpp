//#include <iostream>
//#include <string>
//#include <set>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_num = 10000000;
//constexpr int max_size = 7;
//bool is_prime(int num)
//{
//	static bool composites[max_num] = { false };
//	static bool binit = false;
//	if (binit == false)
//	{
//		binit = true;
//		composites[0] = composites[1] = true;
//		for (int i = 4; i < max_num; i += 2)
//			composites[i] = true;
//		for (int i = 3; i < max_num; i += 2)
//		{
//			if (composites[i] == false)
//				for (int j = i + i; j < max_num; j += i)
//					composites[j] = true;
//		}
//	}
//
//	return composites[num] == false;
//}
//
//static set<int> result;
//void backtracking(int (&nums)[11], bool insert0, int count)
//{
//	static int number[max_size] = { 0 };
//	if (count == max_size)
//	{
//		int sum = 0;
//		for (int i = 0; i < max_size; ++i)
//		{
//			sum += number[i];
//			sum *= 10;
//		}
//		sum /= 10;
//		//cout << sum << "\n";
//
//		if (is_prime(sum))
//		{
//			result.insert(sum);
//		}
//		return;
//	}
//
//	for (int i = 0; i < 11; ++i)
//	{
//		if (i == 10)
//		{
//			if (insert0 == false)
//				continue;
//
//			number[count] = 0;
//			backtracking(nums, true, count + 1);
//			number[count] = 0;
//		}
//		else
//		{
//			if (nums[i] > 0)
//			{
//				nums[i]--;
//				number[count] = i;
//				backtracking(nums, false, count + 1);
//				number[count] = 0;
//				nums[i]++;
//			}
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int c;
//	cin >> c;
//
//	while (c--)
//	{
//		result.clear();
//
//		int nums[11] = { 0 };
//		nums[10] = max_size;
//
//		string buf;
//		cin >> buf;
//
//		for (int i = 0; i < buf.size(); ++i)
//			nums[buf[i] - '0']++;
//
//		backtracking(nums, true, 0);
//
//		cout << result.size() << "\n";
//	}
//
//	return 0;
//}