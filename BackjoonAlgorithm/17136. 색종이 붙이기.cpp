//#include <iostream>
//#include <utility>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//constexpr int color_max = 5;
//constexpr int paper_size = 10;
//
//int answer = -1;
//void backtracking(int (&paper)[paper_size][paper_size], int curr, int count)
//{
//	if (curr / paper_size == paper_size)
//	{
//		if (answer == -1)
//			answer = count;
//		else if (answer > count)
//			answer = count;
//		return;
//	}
//	if (answer != -1 && count >= answer)
//		return;
//
//	static int color[color_max] = { 5,5,5,5,5 };
//
//	int r = curr / paper_size;
//	int c = curr % paper_size;
//		
//	if(paper[r][c] == 1)
//	{
//		coord br;
//		for (int s = color_max; s >= 1; --s)
//		{
//			br = { r + s - 1, c + s - 1 };
//			if (br.first >= paper_size || br.second >= paper_size)
//				goto END;
//
//			if (color[s - 1] == 0)
//				goto END;
//
//			for (int sr = r; sr <= br.first; ++sr)
//				for (int sc = c; sc <= br.second; ++sc)
//					if (paper[sr][sc] == 0)
//						goto END;
//
//			/* bactracking */
//			for (int sr = r; sr <= br.first; ++sr)
//				for (int sc = c; sc <= br.second; ++sc)
//					paper[sr][sc] = 0;
//			color[s - 1]--;
//			backtracking(paper, curr + 1, count + 1);
//			color[s - 1]++;
//			for (int sr = r; sr <= br.first; ++sr)
//				for (int sc = c; sc <= br.second; ++sc)
//					paper[sr][sc] = 1;
//		END:
//			continue;
//		}
//	}
//	else
//	{
//		backtracking(paper, curr + 1, count);
//	}
//
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int paper[paper_size][paper_size];
//	for (int i = 0; i < paper_size; ++i)
//		for (int j = 0; j < paper_size; ++j)
//			cin >> paper[i][j];
//
//	backtracking(paper, 0, 0);
//	cout << answer << "\n";
//	return 0;
//}