//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int total_inning;
//	cin >> total_inning;
//
//
//	int members[51][10];
//	for (int i = 1; i <= total_inning; ++i)
//		for (int j = 1; j <= 9; ++j)
//			cin >> members[i][j];
//
//	// batter number will enter 
//	int next_batter;
//	int num_out;
//	int max_score = -1, score;
//	// 4 bases for record member number or empty(0)
//	int bases[4];
//	constexpr int base_empty = 0;
//	constexpr int OUT = 0;
//	constexpr int HITS = 1;
//	constexpr int DOUBLE = 2;
//	constexpr int TRIPLE = 3;
//	constexpr int HOMERUN = 4;
//
//	int indices[9] = { 1,2,3,4,5,6,7,8,9 };
//	size_t next_indices = 0;
//	int mem_perms[51][10];
//	do
//	{
//		// permutates member sequence
//		for(int i = 1; i <= total_inning; ++i)
//			for (int j = 1; j < 9; ++j)
//				mem_perms[i][j + 1] = members[i][indices[j]];
//
//		// swap batter 1 and batter 4 to make Batter 1 ace
//		for (int i = 1; i <= total_inning; ++i)
//		{
//			mem_perms[i][1] = mem_perms[i][4];
//			mem_perms[i][4] = members[i][1];
//		}
//		// swap for select next batter
//		{
//			int ind_temp = indices[0];
//			indices[0] = indices[3];
//			indices[3] = ind_temp;
//		}
//
//
//		// start baseball simulation
//		score = 0;
//		next_indices = 0;
//		next_batter = indices[next_indices];
//		for (int i = 1; i <= total_inning; ++i)
//		{
//			num_out = 0;
//			bases[0] = bases[1] = bases[2] = bases[3] = 0;
//			// start new inning
//			while (num_out < 3)
//			{
//				switch (mem_perms[i][next_indices + 1])
//				{
//				case OUT:
//					num_out += 1;
//					break;
//				case HITS:
//					score += (bases[3] > 0);
//					bases[3] = bases[2];
//					bases[2] = bases[1];
//					bases[1] = next_batter;
//					break;
//				case DOUBLE:
//					score += (bases[3] > 0) + (bases[2] > 0);
//					bases[3] = bases[1];
//					bases[2] = next_batter;
//					bases[1] = base_empty;
//					break;
//				case TRIPLE:
//					score += (bases[3] > 0) + (bases[2] > 0) + (bases[1] > 0);
//					bases[3] = next_batter;
//					bases[2] = bases[1] = base_empty;
//					break;
//				case HOMERUN:
//					score += (bases[3] > 0) + (bases[2] > 0) + (bases[1] > 0) + 1;
//					bases[3] = bases[2] = bases[1] = base_empty;
//					break;
//				}
//				next_indices = (next_indices + 1) % 9;
//				next_batter = indices[next_indices];
//			} // end of 1 innings
//		} // end of total_innings
//
//
//		if (score > max_score)
//		{
//#ifdef _DEBUG
//		for (int x = 0; x < 9; ++x)
//		{
//			cout.width(3);
//			cout << indices[x];
//		}cout << "\n";
//		for (int i = 1; i <= total_inning; ++i)
//		{
//			for (int j = 1; j <= 9; ++j)
//			{
//				cout.width(3);
//				cout << mem_perms[i][j];
//			}cout << "\n";
//		}cout << "\n";
//#endif // _DEBUG
//			max_score = score;
//		}
//
//		// re-swap for permutation
//		{
//			int ind_temp = indices[0];
//			indices[0] = indices[3];
//			indices[3] = ind_temp;
//		}
//	} while (next_permutation(indices + 1, indices + 9));
//
//	cout << max_score << "\n";
//	return 0;
//}