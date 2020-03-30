//#include <iostream>
//#include <cmath>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int max_limit = 100;
//
//int check_ramp(int(&map)[max_limit][max_limit], int n, int l)
//{
//	int answer = 0;
//
//	// check lines
//	int prev;
//	int diff;
//	for (int i = 0; i < n; ++i)
//	{
//		bool path = true;
//		int plane = 0;
//
//		prev = map[i][0];
//		for (int j = 0; j < n; ++j)
//		{
//			diff = map[i][j] - prev;
//			if (abs(diff) >= 2)
//				path = false;
//			else if (diff == 1)
//			{
//				if (diff > 2)
//					path = false;
//
//				if (l <= plane)
//					plane = 1;
//				else
//					path = false;
//				prev = map[i][j];
//			}
//			else if (diff == 0)
//			{
//				plane += 1;
//				prev = map[i][j];
//			}
//			else if(diff == -1)
//			{
//				bool ramp = true;
//				for (int k = j + 1, cnt = 0; k - j < l; ++k, ++cnt)
//				{
//					if (k >= n)
//					{
//						if (cnt < l - 1)
//							ramp = false;
//						break;
//					}
//
//					if (map[i][j] != map[i][k])
//					{
//						ramp = false;
//						break;
//					}
//				}
//
//				if (ramp)
//				{
//					plane = 0;
//					j += l - 1;
//					prev = map[i][j];
//				}
//				else
//					path = false;
//			}
//
//			if (path == false)
//				break;
//		}
//
//		if (path)
//		{
//#ifdef _DEBUG
//			cout << "line : " << i << "\n";
//#endif // _DEBUG
//
//			answer++;
//		}
//	}
//
//	return answer;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	
//	int n, l;
//	cin >> n >> l;
//
//	int rows[max_limit][max_limit];
//	int cols[max_limit][max_limit];
//	{
//		int input;
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				cin >> input;
//
//				rows[i][j] = input;
//				cols[j][i] = input;
//			}
//		}
//	}
//
//	int answer = 0;
//	answer += check_ramp(rows, n, l);
//	answer += check_ramp(cols, n, l);
//
//	cout << answer << "\n";
//
//
//	return 0;
//}