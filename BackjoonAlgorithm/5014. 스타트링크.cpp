//#include <iostream>
//#include <queue>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_floor = 1000000;
//constexpr int min_floor = 1;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int top_floor, start_floor, goal_floor;
//	// up : 0, down : 1
//	int button[2];
//	cin >> top_floor >> start_floor >> goal_floor >> button[0] >> button[1];
//	button[1] = button[1] * -1;
//	
//	// check initial value
//	if (start_floor == goal_floor)
//	{
//		cout << 0 << "\n";
//		return 0;
//	}
//
//	queue<int> q;
//	int visit[max_floor + 1] = { 0 };
//	
//	q.push(start_floor);
//	visit[start_floor] = 987654321;
//
//	int num_depth = 0;
//	bool goal = false;
//	while (q.empty() == false)
//	{
//		size_t qsize = q.size();
//		num_depth++;
//		for (int s = 0; s < qsize; ++s)
//		{
//			auto curr_floor = q.front();
//			q.pop();
//
//			// clear queue if reach to goal floor
//			if (goal == true)
//				continue;
//
//			int next;
//			for (int i = 0; i < 2; ++i)
//			{
//				next = curr_floor + button[i];
//
//				// check out of range
//				if (next < min_floor || next > top_floor)
//					continue;
//
//				// check already have visited
//				if (visit[next] != 0)
//					continue;
//
//				// check goal_floor
//				if (next == goal_floor)
//					goal = true;
//
//				q.push(next);
//				visit[next] = num_depth;
//			}
//		}
//	}
//	num_depth--;
//
//	if (goal)	cout << num_depth << "\n";
//	else		cout << "use the stairs\n";
//	return 0;
//}