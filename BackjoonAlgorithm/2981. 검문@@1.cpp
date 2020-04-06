//#include <iostream>
//#include <cmath>
//#include <set>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int nmax = 100;
//int gcd(int a, int b)
//{
//	int t;
//	while (b != 0)
//	{
//		t = a % b;
//		a = b;
//		b = t;
//	}
//
//	return a;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	int nums[nmax];
//	for (int i = 0; i < n; ++i)
//		cin >> nums[i];
//	sort(nums + 0, nums + n);
//
//	int cd = nums[1] - nums[0];
//	for (int i = 1; i < n - 1; ++i)
//		cd = gcd(cd, nums[i + 1] - nums[i]);
//
//	set<int> common_divisors;
//	common_divisors.insert(cd);
//	for (int i = 2; i <= sqrt(cd); ++i)
//	{
//		if (cd % i == 0)
//		{
//			common_divisors.insert(i);
//			common_divisors.insert(cd / i);
//		}
//	}
//
//	for (const auto& it : common_divisors)
//		cout << it << " ";
//	cout << "\n";
//	return 0;
//}