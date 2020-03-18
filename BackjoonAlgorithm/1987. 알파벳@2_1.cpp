//// reference : https://www.acmicpc.net/source/9264331 for personal study
//
//#include <cstdint>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//
//int r, c;
//int max_count;
//char map[20][21];
//
//struct coord
//{
//	int8_t first;
//	int8_t second;
//};
//void dfs(bool(&visit)[20][20], bool(&alphabet)[26], coord pos, int count)
//{
//	if (max_count < count)
//		max_count = count;
//
//	constexpr coord dir[4] = { {0,1},{1,0},{0,-1},{-1,0} };
//	coord next;
//	for (int i = 0; i < 4; ++i)
//	{
//		next.first = pos.first + dir[i].first;
//		next.second = pos.second + dir[i].second;
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
//		dfs(visit, alphabet, next, count + 1);
//		visit[next.first][next.second] = false;
//		alphabet[map[next.first][next.second] - 'A'] = false;
//	}
//}
//
//int main()
//{
//	scanf("%d %d", &r, &c);
//	for (int i = 0; i < r; ++i)
//		scanf("%s", map[i]);
//
//	bool alphabet[26] = { 0 };
//	bool visit[20][20] = { 0 };
//	alphabet[map[0][0] - 'A'] = true;
//	visit[0][0] = true;
//	dfs(visit, alphabet, { 0,0 }, 1);
//
//	printf("%d\n", max_count);
//	return 0;
//}