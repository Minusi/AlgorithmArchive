//#include <iostream>
//#include <map>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//typedef pair<int, int> coord;
//typedef map<string, coord> command;
//constexpr int max_size = 8;
//coord chess_to_pos(char(&input)[3])
//{
//	int row = max_size + 1 - (input[1] - '0');
//	int col = input[0] - 'A' + 1;
//	return { row, col };
//}
//string pos_to_chess(coord& input)
//{
//	string res;
//	res += (input.second) + 'A' - 1;
//	res += max_size + 1 - input.first + '0';
//	return res;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	coord king, stone;
//	{
//		char input[3];
//		cin >> input;
//		king = chess_to_pos(input);
//
//		cin >> input;
//		stone = chess_to_pos(input);
//
//#ifdef _DEBUG
//		cout << "king : " << king.first << "," << king.second << "\n";
//		cout << "stone : " << stone.first << "," << stone.second << "\n";
//#endif // _DEBUG
//
//		cin >> n;
//	}
//
//	command cmd;
//	cmd.emplace("R", make_pair(0, 1));
//	cmd.emplace("L", make_pair(0, -1));
//	cmd.emplace("B", make_pair(1, 0));
//	cmd.emplace("T", make_pair(-1, 0));
//	cmd.emplace("RT", make_pair(-1, 1));
//	cmd.emplace("LT", make_pair(-1, -1));
//	cmd.emplace("RB", make_pair(1, 1));
//	cmd.emplace("LB", make_pair(1, -1));
//	{
//		string input;
//		coord next_king, next_stone;
//		coord move;
//		for (int i = 0; i < n; ++i)
//		{
//			cin >> input;
//			move = cmd[input];
//			next_king = { king.first + move.first, king.second + move.second };
//			
//			// check out of range for king
//			if (next_king.first <= 0 || next_king.first > max_size || next_king.second <= 0 || next_king.second > max_size)
//				continue;
//
//			// check out of rnage for stone
//			if (next_king == stone)
//			{
//				next_stone = { stone.first + move.first, stone.second + move.second };
//				if (next_stone.first <= 0 || next_stone.first > max_size || next_stone.second <= 0 || next_stone.second > max_size)
//					continue;
//			}
//			else
//				next_stone = stone;
//			stone = next_stone;
//			king = next_king;
//
//
//#ifdef _DEBUG
//			cout << "king : " << king.first << "," << king.second << "\n";
//			cout << "stone : " << stone.first << "," << stone.second << "\n";
//#endif // _DEBUG
//		}
//	}
//
//	cout << pos_to_chess(king) << "\n";
//	cout << pos_to_chess(stone) << "\n";
//	return 0;
//}