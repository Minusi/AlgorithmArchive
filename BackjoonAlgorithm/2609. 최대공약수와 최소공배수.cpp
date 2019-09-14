//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//
//
//int main()
//{
//	unsigned int M, N;
//	cin >> M >> N;
//
//	/* 유효성 검사 */
//	if (M > 10000 || N > 10000)
//		return -1;
//
//
//	
//	vector<int> FactorizedMNums;
//	FactorizedMNums.reserve(20);
//	vector<int> FactorizedNNums;
//	FactorizedNNums.reserve(20);
//
//	unsigned int MTemp = M;
//	bool MExecutable = true;
//	unsigned int NumMFactorized = false;
//
//	unsigned int NTemp = N;
//	bool NExecutable = true;
//	unsigned int NumNFactorized = false;
//
//
//	unsigned int gcd = 1;
//	unsigned int lcm = 1;
//	/* 소인수분해 과정 */
//	for (unsigned int i = 2; ; ++i)
//	{
//		/* break 조건 */
//		if (MExecutable == false && NExecutable == false)
//		{
//			break;
//		}
//
//
//
//		if (i > M)
//			MExecutable = false;
//		if (i > N)
//			NExecutable = false;
//
//
//
//		/* M 소인수분해(비최적화) */
//		while (MTemp % i == 0 && MExecutable)
//		{
//			MTemp = MTemp / i;
//			FactorizedMNums.push_back(i);
//			NumMFactorized++;
//		}
//
//		/* N 소인수분해(비최적화) */
//		while (NTemp % i == 0 && NExecutable)
//		{
//			NTemp = NTemp / i;
//			FactorizedNNums.push_back(i);
//			NumNFactorized++;
//		}
//
//		
//
//		/* 최대공약수 최신화 */
//		for (int j = 0; j < max(NumMFactorized, NumNFactorized); ++j)
//		{
//			if (j < min(NumMFactorized, NumNFactorized))
//			{
//				gcd *= i;
//			}
//			else
//			{
//				lcm *= i;
//			}
//		}
//		NumMFactorized = 0;
//		NumNFactorized = 0;
//	}
//	lcm = gcd * lcm;
//
//	//for (const auto& it : FactorizedMNums)
//	//{
//	//	cout << it << " ";
//	//}
//	//cout << endl;
//	//for (const auto& it : FactorizedNNums)
//	//{
//	//	cout << it << " ";
//	//}
//	//cout << endl;
//
//	cout << gcd << endl;
//	cout << lcm << endl;
//	return 0;
//}