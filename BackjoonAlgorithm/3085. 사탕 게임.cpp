//#include <iostream>
//#include <utility>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//constexpr coord dir[2] = { {0,1}, {1,0} };
//constexpr int nmax = 50;
//
//void swap(char(&board)[nmax][nmax + 1], const coord& curr, const coord& next)
//{
//	int temp = board[curr.first][curr.second];
//	board[curr.first][curr.second] = board[next.first][next.second];
//	board[next.first][next.second] = temp;
//}
//int check(const char(&board)[nmax][nmax + 1], const int n, int line, bool sweep_row)
//{
//	int ret_value = 0;
//	int value = 0;
//	char prev_color;
//	if (sweep_row == false)
//	{
//		prev_color = board[0][line];
//		for (int i = 0; i < n; ++i)
//		{
//			if (prev_color == board[i][line])
//				value++;
//			else
//			{
//				prev_color = board[i][line];
//				if (ret_value < value)
//					ret_value = value;
//				value = 1;
//			}
//
//		}
//	}
//	else
//	{
//		prev_color = board[line][0];
//		for (int i = 0; i < n; ++i)
//		{
//			if (prev_color == board[line][i])
//				value++;
//			else
//			{
//				prev_color = board[line][i];
//				if (ret_value < value)
//					ret_value = value;
//				value = 1;
//			}
//		}
//	}
//
//	if (ret_value < value)
//		ret_value = value;
//	return ret_value;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	char board[nmax][nmax + 1] = { 0 };
//	for (int i = 0; i < n; ++i)
//		cin >> board[i];
//
//	int answer = 0;
//	for (int r = 0; r < n; ++r)
//
//		answer = max(answer, check(board, n, r, true));
//	for (int c = 0; c < n; ++c)
//		answer = max(answer, check(board, n, c, false));
//
//#ifdef _DEBUG
//	cout << answer << "\n";
//#endif // _DEBUG
//
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			coord curr = { i,j };
//			coord next;
//			for (int d = 0; d < 2; ++d)
//			{
//				next = { curr.first + dir[d].first, curr.second + dir[d].second };
//				if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= n)
//					continue;
//
//				if (board[curr.first][curr.second] == board[next.first][next.second])
//					continue;
//
//				swap(board, curr, next);
//				int local_answer = 0;
//				if (d == 0)
//					local_answer = max(check(board, n, curr.second, false), check(board, n, next.second, false));
//				else if (d == 1)
//					local_answer = max(check(board, n, curr.first, true), check(board, n, next.first, true));
//
//				//cout << "curr : " << i << "," << j << "\n";
//				//cout << local_answer << "\n";
//				swap(board, curr, next);
//				if (answer < local_answer)
//				{
//					//cout << "curr : " << curr.first << "," << curr.second << "\n";
//					//cout << "next : " << next.first << "," << next.second << "\n";
//					//cout << "answer : " << local_answer << "\n";
//					answer = local_answer;
//				}
//			}
//		}
//	}
//
//	cout << answer << "\n";
//	return 0;
//}