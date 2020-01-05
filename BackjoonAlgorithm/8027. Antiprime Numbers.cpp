//#include <iostream>
//#include <vector>
//#include <queue>
//#include <map>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//
//chrono::system_clock::time_point Start;
//chrono::nanoseconds Time;
//#endif
//
//
//void AvailablePrimeProductList(long long Num, vector<int>& OutPrimes)
//{
//	if (OutPrimes.empty() == false)
//		OutPrimes.clear();
//
//	OutPrimes.push_back(2);
//	long long Product = 2;
//	for (int i = 3; Product < Num; i += 2)
//	{
//		bool IsPrime = true;
//		for (const auto& it : OutPrimes)
//		{
//			if (i % it == 0)
//			{
//				IsPrime = false;
//				break;
//			}
//		}
//
//		if (IsPrime)
//		{
//			Product *= i;
//			OutPrimes.push_back(i);
//		}
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int N;
//	cin >> N;
//	vector<int> Primes;
//	AvailablePrimeProductList(N, Primes);
//
//	
//
//	/* key : Number, value : NumDivisors */
//	map<long long, long long> Map;
//	Map.emplace(1, 1);
//	
//	vector<int> Init;
//	Init.resize(Primes.size());
//	if(Init.empty() == false)
//		Init[0] = 1;
//
//	queue<pair<long long, vector<int>>> Queue;
//	if(2 < N)
//		Queue.emplace(2, Init);
//
//	long long MaxAntiPrime = 1;
//	long long MaxNumDivisor = 1;
//	while (Queue.empty() == false)
//	{
//		pair<long long,vector<int>> Curr = Queue.front();
//		Queue.pop();
//		if (Map.find(Curr.first) != Map.end())
//			continue;
//
//		long long NumDivisor = 1;
//		int ExistIndex = -1;
//		int MinCountIndex = -1;
//		int NumMaxCount = -1;
//		for (int i = 0; i < Curr.second.size(); ++i)
//		{
//			if (Curr.second[i] > 0)
//			{
//				ExistIndex = i;
//				NumDivisor *= ((long long)Curr.second[i] + 1);
//			}
//
//			if(NumMaxCount < )
//		}
//
//		Map.emplace(Curr.first, NumDivisor);
//
//		for (int i = 0; i < Curr.second.size(); ++i)
//		{
//			/* 수를 초과하면 그 이후 연산 수행하지 않음 */
//			long long NextNum = Curr.first * Primes[i];
//			if (NextNum > N)
//				break;
//
//			/* 이미 들어있는 숫자는 추가 x */
//			if (Map.find(NextNum) != Map.end())
//				continue;
//
//			Curr.second[i] = Curr.second[i] + 1;
//			Queue.emplace(NextNum, Curr.second);
//			Curr.second[i] = Curr.second[i] - 1;
//		}
//	}
//
//	for (const auto& it : Map)
//		cout << "key : " << it.first << " " << ", value : " << it.second << "\n";
//
//	cout << MaxAntiPrime << " " << MaxNumDivisor << "\n";
//	return 0;
//}