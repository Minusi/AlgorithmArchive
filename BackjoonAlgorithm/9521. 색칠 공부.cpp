//#include <iostream>
//#include <stack>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_diff = (int)1e+6;
//constexpr int mod = 1000000007;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	long long k;
//	cin >> n >> k;
//
//	int diff[max_diff + 1];
//	for (int i = 1; i <= n; ++i)
//		cin >> diff[i];
//
//	// cycles[0] means no cycle
//	int cycles[max_diff + 1] = { 0 };
//	int max_cycle = 1;
//
//	stack<int> s;
//	int visit[max_diff + 1] = { 0 };
//	int visit_id = 0;
//
//	int list[max_diff + 1];
//	size_t list_size = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		if (visit[i] != 0)
//			continue;
//		list_size = 0;
//
//		s.push(i);
//		visit[i] = ++visit_id;
//		list[list_size++] = i;
//		while (s.empty() == false)
//		{
//			int curr = s.top();
//			s.pop();
//			
//			int next = diff[curr];
//			if (visit[next] != false)
//			{
//				bool start_cycle = false;
//				for (int s = 0; s < list_size; ++s)
//				{
//					if (list[s] == next)
//					{
//						start_cycle = true;
//						cycles[0] += s;
//						cycles[list_size - s]++;
//						if (max_cycle < list_size - s)
//							max_cycle = list_size - s;
//					}
//				}
//
//				if (start_cycle == false)
//					cycles[0] += list_size;	
//				continue;
//			}
//
//			s.push(next);
//			visit[next] = visit_id;
//			list[list_size++] = next;
//		}
//	}
//
//	long long dp[max_diff + 1];
//	dp[0] = k - 1;
//	dp[1] = k;
//	dp[2] = (k * (k - 1)) % mod;
//	dp[3] = ((k * (k - 1)) % mod * (k - 2)) % mod;
//	for (int i = 4; i <= max_cycle; ++i)
//		dp[i] = (dp[i - 1] * (k - 2) + dp[i - 2] * (k - 1)) % mod;
//
//	long long answer = 1;
//	for (int i = 0; i <= max_cycle; ++i)
//	{
//		if (cycles[i] > 0)
//			for (int s = 0; s < cycles[i]; ++s)
//				answer = (answer * dp[i]) % mod;
//	}
//	cout << answer << "\n";
//	return 0;
//}