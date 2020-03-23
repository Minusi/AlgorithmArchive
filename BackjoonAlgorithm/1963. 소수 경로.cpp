//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <cmath>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int num_limit = 10000;
//bool check_prime(int number)
//{
//	static bool active_seive = false;
//	static bool composites[num_limit] = { false };
//	
//	if (active_seive == false)
//	{
//		active_seive = true;
//		
//		for (int i = 2; i < num_limit; i += 2)
//			composites[i] = true;
//		for (int i = 3; i < num_limit; i += 2)
//		{
//			if (composites[i] == false)
//				for (int j = i + i; j < num_limit; j += i)
//					composites[j] = true;
//		}
//	}
//
//	return (composites[number] == false);
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	queue<int> q;
//	int visit[10000];
//	while (t--)
//	{
//		fill(visit + 0, visit + 10000, -1);
//
//		int a, b;
//		cin >> a >> b;
//		
//		int stage = 0;
//		q.push(a);
//		visit[a] = stage;
//		while (q.empty() == false)
//		{
//			size_t qsize = q.size();
//			stage++;
//			for (int s = 0; s < qsize; ++s)
//			{
//
//				auto curr = q.front();
//				q.pop();
//
//				int next;
//				for (int i = 0; i < 4; ++i)
//				{
//					int remove =  curr - (((curr / (int)pow(10, i)) % 10) * (int)pow(10,i));
//					for (int j = 0; j <= 9; ++j)
//					{
//						next = remove + j * (int)pow(10, i);
//						
//						// check out of range
//						if (next < 1000 || next >= 10000)
//							continue;
//
//						// check already have visited
//						if (visit[next] != -1)
//							continue;
//
//						// check primes
//						if (check_prime(next) == false)
//							continue;
//						
//						visit[next] = stage;
//						q.push(next);
//					}
//				}
//			}
//		}
//
//		
//		if (visit[b] == -1)
//			cout << "Impossible\n";
//		else
//			cout << visit[b] << "\n";
//	}
//
//	return 0;
//}