//#include <iostream>
//#include <utility>
//#include <cstring>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//
//// global constexpressions
//constexpr coord dir[4] = { {0,1}, {1,0},{0,-1}, {-1,0} };
//constexpr int east = 0, south = 1, west = 2, north = 3;
//constexpr int map_empty = 0;
//
//int simulation_1tick(const int (&map)[20][20], int n, int move, int count = 1)
//{
//	if (count > 5)
//		return -1;
//
//	// replicates original
//	int rep_map[20][20];
//	memcpy(rep_map, map, sizeof(rep_map));
//
//	bool merge[20][20] = { false };
//	bool change = false;
//
//	int init = move < 2 == true ? n - 1 : 0;
//	int end = move < 2 == true ? -1 : n;
//	int delta = move < 2 == true ? -1 : +1;
//	for(int e = init; e != end; e = e += delta)
//	{
//		for (int f = init; f != end; f += delta)
//		{
//			// if move is 1, 3 then e means "row", and f means "col"
//			// otherwise then e means "col" and f means "row"
//			coord curr;
//			move % 2 == 0 ? curr = { e,f } : curr = { f,e };
//
//			if (rep_map[curr.first][curr.second] == map_empty)
//				continue;
//
//			coord next = curr;
//			while (true)
//			{
//				next.first += dir[move].first;
//				next.second += dir[move].second;
//
//				// check out of range
//				if (next.first < 0 || next.first >= n || next.second < 0 || next.second >= n)
//					break;
//
//				// check next block is different block
//				int& next_block = rep_map[next.first][next.second];
//				if (next_block != map_empty && next_block != rep_map[curr.first][curr.second])
//					break;
//				
//				// check next block is already merged
//				if (merge[next.first][next.second] == true)
//					break;
//
//				if(change == false)
//					change = true;
//
//				// if next block is empty then move next block
//				if (next_block == map_empty)
//				{
//					next_block = rep_map[curr.first][curr.second];
//					rep_map[curr.first][curr.second] = map_empty;
//					curr = next;
//				}
//				// else then merge with
//				else
//				{
//					next_block *= 2;
//					rep_map[curr.first][curr.second] = map_empty;
//					merge[next.first][next.second] = true;
//					curr = next;
//					break;
//				}
//			}
//		}
//	}
//
//#ifdef _DEBUG
//	cout << "count : " << count << ", move to : " << move << "\n";
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < n; ++j)
//		{
//			cout.width(3);
//			cout << rep_map[i][j];
//		}cout << "\n";
//	}cout << "\n";
//#endif // _DEBUG
//
//
//
//	int max_value = -1;
//	// update max_value in local
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < n; ++j)
//			if (max_value < rep_map[i][j])
//				max_value = rep_map[i][j];
//	
//	// update max_value in next dfs
//	if (change == true)
//	{
//		for (int i = 0; i < 4; ++i)
//		{
//			int value = simulation_1tick(rep_map, n, i, count + 1);
//			if (value > max_value)
//				max_value = value;
//		}
//	}
//
//	return max_value;
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	int map[20][20];
//	for (int i = 0; i < n; ++i)
//		for (int j = 0; j < n; ++j)
//			cin >> map[i][j];
//
//	int answer = -1;
//	for (int d = 0; d < 4; ++d)
//	{
//#ifdef _DEBUG
//		cout << "initial move : " << d << "\n";
//		for (int i = 0; i < n; ++i)
//		{
//			for (int j = 0; j < n; ++j)
//			{
//				cout.width(3);
//				cout << map[i][j];
//			}cout << "\n";
//		}cout << "\n";
//		cout << "\n";
//#endif // _DEBUG
//
//		int value = simulation_1tick(map, n, d);
//		if (answer < value)
//			answer = value;
//	}
//
//	cout << answer << "\n";
//	return 0;
//}