//#include <iostream>
//#include <cstring>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//typedef pair<int, int> coord;
//template<typename T, size_t U = 100>
//struct container
//{
//	T data[U];
//	int next = -1;
//	size_t size = 0;
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	constexpr int max_row = 12;
//	constexpr int max_col = 6;
//	char board[max_row][max_col + 1];
//	for (int i = 0; i < max_row; ++i)
//		cin >> board[i];
//
//	constexpr coord dir[4] = { {0,1}, {1,0}, {0,-1}, {-1,0} };
//	constexpr char puyo_empty = '.';
//
//	container<coord> stack, remove;
//	int visit[max_row][max_col];
//	int visit_count = 0;
//
//	bool chain;
//	unsigned int chain_count = -1;
//	do
//	{
//		chain = false;
//		memset(visit, 0, sizeof(visit));
//
//		for (int i = 0; i < max_row; ++i)
//		{
//			for (int j = 0; j < max_col; ++j)
//			{
//				visit_count = 0;
//				if (board[i][j] == puyo_empty || visit[i][j] > 0)
//					continue;
//
//
//				stack.data[stack.size++] = { i,j };
//				visit[i][j] = ++visit_count;
//				while (stack.size > 0)
//				{
//					auto curr = stack.data[--stack.size];
//					remove.data[remove.size++] = curr;
//
//					coord next;
//					for (int d = 0; d < 4; ++d)
//					{
//						next = { curr.first + dir[d].first, curr.second + dir[d].second };
//						// check out of range
//						if (next.first < 0 || next.first >= max_row || next.second < 0 || next.second >= max_col)
//							continue;
//
//						// check already have visited
//						if (visit[next.first][next.second] > 0)
//							continue;
//
//						// check puyo color
//						if (board[next.first][next.second] != board[curr.first][curr.second])
//							continue;
//
//						visit[next.first][next.second] = ++visit_count;
//						stack.data[stack.size++] = { next.first, next.second };
//					}
//				}
//
//				if (visit_count < 4)
//					remove.size -= visit_count;
//			}
//		}// end loop i,j
//
//		//cout << "remove list : \n";
//		//for (int i = 0; i < remove.size; ++i)
//		//	cout << remove.data[i].first << "," << remove.data[i].second << "\n";
//
//		// clear board
//		if (remove.size > 0)
//		{
//			chain = true;
//			for (int i = 0; i < remove.size; ++i)
//				board[remove.data[i].first][remove.data[i].second] = puyo_empty;
//			remove.size = 0;
//		}
//
//		// descends puyos
//		container<coord, max_row> empty;
//		for (int j = 0; j < max_col; ++j)
//		{
//			for (int i = max_row - 1; i >= 0; --i)
//			{
//				if (board[i][j] == puyo_empty)
//					empty.data[empty.size++] = { i,j };
//				else
//				{
//					if (empty.size > 0)
//					{
//						auto fill = empty.data[++empty.next];
//						board[fill.first][fill.second] = board[i][j];
//						board[i][j] = puyo_empty;
//						empty.data[empty.size++] = { i,j };
//					}
//				}
//			}
//			empty.size = 0;
//			empty.next = -1;
//		}
//		chain_count += 1;
//
//		//cout << "\n";
//		//for (int i = 0; i < max_row; ++i)
//		//{
//		//	for (int j = 0; j < max_col; ++j)
//		//	{
//		//		cout << board[i][j];
//		//	}cout << "\n";
//		//}cout << "\n";
//	} while (chain);
//
//	cout << chain_count << "\n";
//
//	return 0;
//}