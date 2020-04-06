//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_range = 1000;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m, l;
//	cin >> n >> m >> l;
//
//	int num_received[max_range + 1] = { 0 };
//	num_received[1]++;
//
//	int ball_pos = 1;
//	int timestamp = 0;
//	while (true)
//	{
//		if (num_received[ball_pos] == m)
//			break;
//
//		if (num_received[ball_pos] % 2 == 0)
//		{
//			if (ball_pos - l > 0)
//				ball_pos -= l;
//			else
//				ball_pos = ball_pos + n - l;
//		}
//		else
//		{
//			if (ball_pos + l <= n)
//				ball_pos += l;
//			else
//				ball_pos = (ball_pos + l) % n;
//		}
//
//		num_received[ball_pos]++;
//		timestamp++;
//	}
//
//	cout << timestamp << "\n";
//
//	return 0;
//}