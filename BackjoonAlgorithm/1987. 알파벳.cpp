//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int dfs(const char(&board)[20][21], int r, int c, int next_r, int next_c, int count)
//{
//	static bool alphabet[26];
//
//	// return if cannot move
//	if (alphabet[board[next_r][next_c] - 'A'])
//		return count;
//	
//	// return error if out of range
//	if (next_r < 0 || next_r >= r || next_c < 0 || next_c >= c)
//		return -1;
//
//	static int dr[4] = { 0,1,0,-1 };
//	static int dc[4] = { 1,0,-1,0 };
//	static int max_result = 1;
//	// backtracking
//	for (int i = 0; i < 4; ++i)
//	{
//		alphabet[board[next_r][next_c] - 'A'] = true;
//		int result = dfs(board, r, c, next_r + dr[i], next_c + dc[i], count + 1);
//		alphabet[board[next_r][next_c] - 'A'] = false;
//
//		if (max_result < result)
//			max_result = result;
//	}
//
//	return max_result;
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int r, c;
//	cin >> r >> c;
//
//	char board[20][21];
//	for (int i = 0; i < r; ++i)
//		cin >> board[i];
//
//	cout << dfs(board, r, c, 0, 0, 0) << "\n";
//
//	return 0;
//}