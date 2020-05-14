//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int input_max = 50;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	char coord[input_max][input_max + 1] = { 0 };
//	for (int i = 0; i < n; ++i)
//		cin >> coord[i];
//
//	size_t max_square_size = n >= m ? m : n;
//	int answer = 0;
//	for (int i = 1; i <= max_square_size; ++i)
//	{
//		for (int r = 0; r <= n - i; ++r)
//		{
//			for (int c = 0; c <= m - i; ++c)
//			{
//				auto point = coord[r][c];
//				if ((point == coord[r][c + i - 1])
//					&& (point == coord[r + i - 1][c])
//					&& (point == coord[r + i - 1][c + i - 1]))
//				{
//					if (answer <= i * i)
//						answer = i * i;
//				}
//			}
//		}
//	}
//
//	cout << answer << "\n";
//	return 0;
//}