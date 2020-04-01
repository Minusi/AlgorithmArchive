//#include <iostream>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//typedef pair<int, int> coord;
//constexpr int max_limit = 6;
//constexpr coord dir[8] = { {-2,1}, {-1,2}, {1,2}, {2,1}, {2,-1}, {1,-2}, {-1,-2}, {-2,-1} };
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int board[max_limit + 1][max_limit + 1] = { 0 };
//	{
//		char input[3];
//		int r, c;
//		int pr = -1, pc = -1;
//		int sr = -1, sc = -1;
//
//		// initialization for first
//		cin >> input;
//		pr = max_limit - (input[1] - '0');
//		pc = input[0] - 'A' + 1;
//		sr = pr;
//		sc = pc;
//		board[pr][pc] = 1;
//
//		// start iterataion
//		for (int i = 2; i <= max_limit * max_limit; ++i)
//		{
//			cin >> input;
//			r = max_limit - (input[1] - '0');
//			c = input[0] - 'A' + 1;
//
//			// check already have visited
//			if (board[r][c] != 0)
//			{
//				cout << "Invalid\n";
//				return 0;
//			}
//
//			// invalid move
//			bool move_invalid = true;
//			for (int i = 0; i < 8; ++i)
//			{
//				if (pr == r + dir[i].first && pc == c + dir[i].second)
//				{
//					move_invalid = false;
//					break;
//				}
//			}
//			if (move_invalid)
//			{
//				cout << "Invalid\n";
//				return 0;
//			}
//
//			board[r][c] = i;
//			pr = r;
//			pc = c;
//			//for (int i = 0; i < 7; ++i)
//			//{
//			//	for (int j = 0; j < 7; ++j)
//			//	{
//			//		cout.width(3);
//			//		cout << board[i][j];
//			//	}
//			//	cout << "\n";
//			//}
//			//cout << "\n";
//		}
//
//		// invalid move
//		bool move_invalid = true;
//		for (int i = 0; i < 8; ++i)
//		{
//			if (sr == pr + dir[i].first && sc == pc + dir[i].second)
//			{
//				move_invalid = false;
//				break;
//			}
//		}
//		if (move_invalid)
//		{
//			cout << "Invalid\n";
//			return 0;
//		}
//	}
//
//	cout << "Valid\n";
//	return 0;
//}