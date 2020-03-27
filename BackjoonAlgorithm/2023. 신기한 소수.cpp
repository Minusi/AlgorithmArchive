//#include <iostream>
//#include <cmath>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_limit = 8;
//void find_mysterious_primes(int n, int count)
//{
//	static int nums = 0;
//	if (count == n)
//	{
//		cout << nums << "\n";
//		return;
//	}
//
//	for (int i = 1; i <= 9; ++i)
//	{
//
//		nums *= 10;
//		nums += i;
//		bool prime = true;
//		if (nums == 1 || (nums > 2 && nums % 2 == 0))
//			prime = false;
//		else
//		{
//			for (int p = 3; p <= (int)sqrt(nums); p += 2)
//			{
//				if (nums % p == 0)
//				{
//					prime = false;
//					break;
//				}
//			}
//		}
//
//		if (prime)
//			find_mysterious_primes(n, count + 1);
//		nums -= i;
//		nums /= 10;
//	}
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	find_mysterious_primes(n, 0);
//	return 0;
//}