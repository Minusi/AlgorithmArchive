//#include <iostream>
//#include <queue>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_size = 100;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	vector<int> graph[max_size + 1];
//	for (int i = 1; i <= n; ++i)
//	{
//		int num_hater, hater;
//		cin >> num_hater;
//		for (int j = 0; j < num_hater; ++j)
//		{
//			cin >> hater;
//			graph[i].push_back(hater);
//			graph[hater].push_back(i);
//		}
//	}
//
//	queue<int> q;
//	int visit[max_size + 1] = { 0 };
//	constexpr int blue = 1;
//	constexpr int white = -1;
//
//	for (int i = 1; i <= n; ++i)
//	{
//		if (visit[i] != 0)
//			continue;
//
//		q.push(i);
//		visit[i] = blue;
//		while (q.empty() == false)
//		{
//			auto subject = q.front();
//			q.pop();
//			
//			int object;
//			for (int i = 0; i < graph[subject].size(); ++i)
//			{
//				object = graph[subject][i];
//				if (visit[object] != 0)
//					continue;
//
//				q.push(object);
//				visit[object] = -visit[subject];
//			}
//		}
//	}
//
//	int blue_team[max_size];
//	int blue_count = 0;
//	int white_team[max_size];
//	int white_count = 0;
//	for (int i = 1; i <= n; ++i)
//	{
//		if (visit[i] == blue)
//			blue_team[blue_count++] = i;
//		else
//			white_team[white_count++] = i;
//	}
//	cout << blue_count << "\n";
//	for (int i = 0; i < blue_count; ++i)
//		cout << blue_team[i] << " ";
//	cout << "\n" << white_count << "\n";
//	for (int i = 0; i < white_count; ++i)
//		cout << white_team[i] << " ";
//	cout << "\n";
//	return 0;
//}