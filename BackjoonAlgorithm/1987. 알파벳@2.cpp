//// reference : https://www.acmicpc.net/source/9264331 for personal study
//
//#include <iostream>
//#include <cstring>
//#include <utility>
//using namespace std;
//
//int r, c;
//int max_count;
//
//typedef pair<int, int> coord;
//void dfs(char(&map)[20][21], bool(&visit)[20][20], bool(&alphabet)[26], coord pos, int count)
//{
//	if (max_count < count)
//		max_count = count;
//
//	constexpr coord dir[4] = { {0,1},{1,0},{0,-1},{-1,0} };
//	coord next;
//	for (int i = 0; i < 4; ++i)
//	{
//		next = { pos.first + dir[i].first, pos.second + dir[i].second };
//		// check out of range
//		if (next.first < 0 || next.first >= r || next.second < 0 || next.second >= c)
//			continue;
//
//		// check already visited
//		if (visit[next.first][next.second] == true)
//			continue;
//
//		if (alphabet[map[next.first][next.second] - 'A'])
//			continue;
//
//		alphabet[map[next.first][next.second] - 'A'] = true;
//		visit[next.first][next.second] = true;
//		
//		dfs(map, visit, alphabet, next, count + 1);
//		visit[next.first][next.second] = false;
//		alphabet[map[next.first][next.second] - 'A'] = false;
//	}
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> r >> c;
//
//
//	bool alphabet[26] = { 0 };
//	int num_alphabet = 0;
//
//	char map[20][21];
//	for (int i = 0; i < r; ++i)
//	{
//		cin >> map[i];
//		for (int j = 0; j < c; ++j)
//		{
//			uint32_t index = map[i][j] - 'A';
//			if (alphabet[index] == false)
//			{
//				alphabet[index] = true;
//				num_alphabet += 1;
//			}
//		}
//	}
//	memset(alphabet, 0, sizeof(alphabet));
//
//	bool visit[20][20] = { 0 };
//	alphabet[map[0][0] - 'A'] = true;
//	visit[0][0] = true;
//	dfs(map, visit, alphabet, { 0,0 }, 1);
//
//	cout << max_count << "\n";
//	return 0;
//}