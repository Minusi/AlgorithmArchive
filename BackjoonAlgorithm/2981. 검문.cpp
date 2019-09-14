//#include <iostream>
//#include <cmath>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
//unsigned int gcd(unsigned int N1, unsigned int N2)
//{
//	unsigned int Temp;
//	while (N2 != 0)
//	{
//		Temp = N1;
//		N1 = N2;
//		N2 = Temp % N2;
//	}
//
//	return N1;
//}
//
//int main()
//{
//	unsigned int N;
//	cin >> N;
//	if (N < 2 || N > 100)
//		return -1;
//
//	vector<int> Nums;
//	for (unsigned int i = 0; i < N; ++i)
//	{
//		unsigned int Num;
//		cin >> Num;
//		if (Num < 1 || Num > 1000000000)
//			return -1;
//		Nums.push_back(Num);
//	}
//	/* 입력 순서 정렬 */
//	sort(Nums.begin(), Nums.end());
//	
//	/* 벡터를 정렬된 입력값들의 차로 변경 */
//	unsigned int D = N - 1;
//	for (unsigned int i = 0; i < D; ++i)
//	{
//		Nums[i] = abs(Nums[i] - Nums[i + 1]);
//	}
//	/* 마지막 요소는 차가 아니므로 제거 */
//	Nums.erase(Nums.end() - 1);
//
//	unsigned int gcdNum = Nums[0];
//	for (auto it = Nums.begin() + 1; it != Nums.end(); ++it)
//	{
//		gcdNum = gcd(gcdNum, *it);
//	}
//
//	vector<int> Divisors;
//	Divisors.push_back(gcdNum);
//	for (int i = 2; i <= sqrt(gcdNum) + 1; ++i)
//	{
//		if (gcdNum % i == 0)
//		{
//			Divisors.push_back(i);
//			
//			if (i != gcdNum / i)
//			{
//				Divisors.push_back(gcdNum / i);
//			}
//		}
//	}
//
//	sort(Divisors.begin(), Divisors.end());
//	for (const auto& it : Divisors)
//	{
//		cout << it << " ";
//	}
//	cout << endl;
//	return 0;
//}