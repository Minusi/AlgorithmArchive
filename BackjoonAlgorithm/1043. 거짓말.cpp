//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int nmax = 51;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	int num_truth_people;
//	cin >> num_truth_people;
//
//	vector<int> truth_people(num_truth_people);
//	for (int i = 0; i < num_truth_people; ++i)
//	{
//		cin >> truth_people[i];
//	}
//
//	vector<int> graph[nmax];
//	vector<int> party[nmax - 1];
//	int input;
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> input;
//		party[i].resize(input);
//		for (int j = 0; j < input; ++j)
//		{
//			cin >> party[i][j];
//			if (j > 0)
//			{
//				graph[party[i][j - 1]].push_back(party[i][j]);
//				graph[party[i][j]].push_back(party[i][j - 1]);
//			}
//		}
//	}
//
//	queue<int> q;
//	bool visit[nmax] = { false };
//	for (const auto& it : truth_people)
//	{
//		q.push(it);
//		visit[it] = true;
//	}
//
//	while (q.empty() == false)
//	{
//		auto curr = q.front();
//		q.pop();
//
//		int next;
//		for (int i = 0; i < graph[curr].size(); ++i)
//		{
//			next = graph[curr][i];
//			if (visit[next])
//				continue;
//
//			visit[next] = true;
//			q.push(next);
//		}
//	}
//
//	int answer = 0;
//	for (int i = 0; i < m; ++i)
//	{
//		bool unknown = true;
//		for (const auto& it : party[i])
//		{
//			if (visit[it])
//			{
//				unknown = false;
//				break;
//			}
//		}
//
//		if (unknown)
//		{
//			//cout << "party(" << i << ") is unknown\n";
//			answer++;
//		}
//	}
//
//	cout << answer << "\n";
//	return 0;
//}