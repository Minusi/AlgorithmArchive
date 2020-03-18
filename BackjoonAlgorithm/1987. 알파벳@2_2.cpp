//// reference : https://www.acmicpc.net/source/9264331 for personal study
//
//#include <cstdint>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//
//int r, c;
//int max_count, num_alphabet;
//char map[22][23];
//int ck;
//#define MAX_CYCLE 1000000
//struct coord
//{
//	int8_t first;
//	int8_t second;
//};
//void dfs(bool(&visit)[22][22], bool(&alphabet)[26], coord pos, int count)
//{
//	ck++;
//	//printf("ck : %d\n", ck);
//	//printf("pos : (%d, %d), %d\n", pos.first, pos.second, count);
//	if (max_count < count)
//		max_count = count;
//
//	if (max_count == num_alphabet || ck > MAX_CYCLE)
//		return;
//
//	constexpr coord dir[4] = { {0,1},{1,0},{0,-1},{-1,0} };
//	coord next;
//	for (int i = 0; i < 4; ++i)
//	{
//		next.first = pos.first + dir[i].first;
//		next.second = pos.second + dir[i].second;
//		// check already visited
//		if (map[next.first][next.second] != 0
//			&& visit[next.first][next.second] == false 
//			&& alphabet[map[next.first][next.second] - 'A'] == false)
//		{
//			alphabet[map[next.first][next.second] - 'A'] = true;
//			visit[next.first][next.second] = true;
//
//			dfs(visit, alphabet, next, count + 1);
//			visit[next.first][next.second] = false;
//			alphabet[map[next.first][next.second] - 'A'] = false;
//
//			if (max_count == num_alphabet || ck > MAX_CYCLE)
//				return;
//		}
//	}
//}
//
//int main()
//{
//	bool alphabet[26] = { false };
//	scanf("%d %d", &r, &c);
//	for (int i = 1; i <= r; ++i)
//	{
//		scanf("%s", map[i] + 1);
//		for (int j = 1; j <= c; ++j)
//		{
//			if (alphabet[map[i][j] - 'A'] == false)
//			{
//				alphabet[map[i][j] - 'A'] = true;
//				num_alphabet += 1;
//			}
//		}
//	}
//	for (int i = 0; i < 26; ++i)
//		alphabet[i] = false;
//
//	bool visit[22][22] = { 0 };
//	alphabet[map[1][1] - 'A'] = true;
//	visit[1][1] = true;
//
//	dfs(visit, alphabet, { 1,1 }, 1);
//
//	//printf("%d\n", ck);
//	printf("%d\n", max_count);
//	return 0;
//}