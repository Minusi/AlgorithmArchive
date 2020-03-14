//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//int search(int (&board)[20][3], size_t size, int to_find)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		if (board[i][0] == to_find)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, num_vote;
//	cin >> n >> num_vote;
//
//	// 0 : id, 1 : upvote, 2 : timeline
//	int board[20][3];
//	size_t size = 0;
//	int timeline = 0;
//	for (int i = 0; i < num_vote; ++i)
//	{
//		int id;
//		cin >> id;
//		
//		int pos = search(board, size, id);
//		if (pos != -1)
//		{
//			board[pos][1] += 1;
//		}
//		else
//		{
//			if (size < n)
//			{
//				board[size][0] = id;
//				board[size][1] = 1;
//				board[size][2] = timeline;
//				size++;
//			}
//			else
//			{
//				int min_pos = -1;
//				int min_vote = 1000;
//				for (int i = 0; i < n; ++i)
//				{
//					if (board[i][1] < min_vote)
//					{
//						min_pos = i;
//						min_vote = board[i][1];
//					}
//					else if ((board[i][1] == min_vote) && (board[i][2] < board[min_pos][2]))
//					{
//						min_pos = i;
//						min_vote = board[i][1];
//					}
//				}
//
//				board[min_pos][0] = id;
//				board[min_pos][1] = 1;
//				board[min_pos][2] = timeline;
//			}
//		}
//
//		timeline += 1;
//	}
//
//	for (int i = 0; i < size; ++i)
//	{
//		for (int j = i + 1; j < size; ++j)
//		{
//			if (board[i][0] > board[j][0])
//			{
//				int tmp[3] = { board[j][0], board[j][1], board[j][2] };
//				board[j][0] = board[i][0];
//				board[j][1] = board[j][1];
//				board[j][2] = board[j][2];
//
//				board[i][0] = tmp[0];
//				board[i][1] = tmp[1];
//				board[i][2] = tmp[2];
//			}
//		}
//	}
//
//	for (int i = 0; i < size; ++i)
//		cout << board[i][0] << " ";
//	cout << "\n";
//	return 0;
//}