//// 이 코드는 대부분의 코드를 다음의 링크에서 참고하였습니다. https://www.acmicpc.net/source/9264331
//
//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//struct POINT
//{
//	int i;
//	int j;
//	int step;
//};
//
//int r, c;
//char map[22][22];
//
//int i, j;
//int num_alphabet, max_count;
//int cycle;
//
//void DFS(POINT p, vector<bool> visit, vector<bool> alphabet)
//{
//	cycle
//		++;
//	if (max_count < p.step) max_count = p.step;
//	if (max_count == num_alphabet || cycle > 100000)
//		return;
//	if (map[p.i][p.j - 1] != 0) // 왼쪽
//	{
//		if (alphabet[map[p.i][p.j - 1] - 'A'] == 0 && visit[p.i * c + p.j - 1] == 0)
//		{
//			alphabet[map[p.i][p.j - 1] - 'A'] = 1;
//			visit[p.i * c + p.j - 1] = 1;
//			p.step++;
//			p.j--;
//			DFS(p, visit, alphabet);
//			alphabet[map[p.i][p.j] - 'A'] = 0;
//			visit[p.i * c + p.j] = 0;
//			p.step--;
//			p.j++;
//		}
//		if (max_count == num_alphabet || cycle > 100000)
//			return;
//	}
//	if (map[p.i][p.j + 1] != 0) // 오른쪽
//	{
//		if (alphabet[map[p.i][p.j + 1] - 'A'] == 0 && visit[p.i * c + p.j + 1] == 0)
//		{
//			alphabet[map[p.i][p.j + 1] - 'A'] = 1;
//			visit[p.i * c + p.j + 1] = 1;
//			p.step++;
//			p.j++;
//			DFS(p, visit, alphabet);
//			alphabet[map[p.i][p.j] - 'A'] = 0;
//			visit[p.i * c + p.j] = 0;
//			p.step--;
//			p.j--;
//		}
//		if (max_count == num_alphabet || cycle > 100000)
//			return;
//	}
//	if (map[p.i - 1][p.j] != 0) // 위쪽
//	{
//		if (alphabet[map[p.i - 1][p.j] - 'A'] == 0 && visit[p.i * c + p.j - c] == 0)
//		{
//			alphabet[map[p.i - 1][p.j] - 'A'] = 1;
//			visit[p.i * c + p.j - c] = 1;
//			p.step++;
//			p.i--;
//			DFS(p, visit, alphabet);
//			alphabet[map[p.i][p.j] - 'A'] = 0;
//			visit[p.i * c + p.j] = 0;
//			p.step--;
//			p.i++;
//		}
//		if (max_count == num_alphabet || cycle > 100000)
//			return;
//	}
//	if (map[p.i + 1][p.j] != 0) // 아래쪽
//	{
//		if (alphabet[map[p.i + 1][p.j] - 'A'] == 0 && visit[p.i * c + p.j + c] == 0)
//		{
//			alphabet[map[p.i + 1][p.j] - 'A'] = 1;
//			visit[p.i * c + p.j + c] = 1;
//			p.step++;
//			p.i++;
//			DFS(p, visit, alphabet);
//			alphabet[map[p.i][p.j] - 'A'] = 0;
//			visit[p.i * c + p.j] = 0;
//			p.step--;
//			p.j--;
//		}
//		if (max_count == num_alphabet || cycle > 100000)
//			return;
//	}
//}
//
//int main()
//{
//	scanf("%d %d", &r, &c);
//
//	for (i = 1; i <= r; i++)
//	{
//		for (j = 1; j <= c; j++)
//		{
//			char ch = ' ';
//			while (ch < 'A' || ch>'Z')
//				scanf("%1c", &ch);
//			map[i][j] = ch;
//		}
//	}
//
//	POINT p;
//	p.i = 1;
//	p.j = 1;
//	p.step = 1;
//
//	vector<bool> visit, alphabet;
//	visit.resize(r * c + 1 + c);
//	alphabet.resize(26);
//	for (i = 1; i <= r * c; i++)
//		visit[i] = 0;
//
//	for (i = 1; i <= r; i++)
//	{
//		for (j = 1; j <= c; j++)
//		{
//			if (alphabet[map[i][j] - 'A'] == 0)
//			{
//				alphabet[map[i][j] - 'A'] = 1;
//				num_alphabet++;
//			}
//		}
//	}
//
//	for (i = 0; i < 26; i++)
//		alphabet[i] = 0;
//	alphabet[map[1][1] - 'A'] = 1;
//	visit[c + 1] = 1;
//
//	DFS(p, visit, alphabet);
//	printf("%d\n", max_count);
//	return 0;
//}