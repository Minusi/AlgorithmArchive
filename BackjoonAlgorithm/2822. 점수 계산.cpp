//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_pb = 8;
//constexpr int num_sum = 5;
//struct problem
//{
//	problem() = default;
//	problem(int _n, int _s) : number(_n), score(_s){ }
//	int number;
//	int score;
//};
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	problem score[max_pb];
//	for (int i = 0; i < max_pb; ++i)
//	{
//		score[i].number = i + 1;
//		cin >> score[i].score;
//	}
//
//
//	// greater bubble
//	for (int i = 0; i < max_pb - 1; ++i)
//	{
//		for (int j = i + 1; j < max_pb; ++j)
//		{
//			if(score[i].score < score[j].score)
//			{
//				problem temp = score[i];
//				score[i] = score[j];
//				score[j] = temp;
//			}
//		}
//	}
//
//	int sum = score[0].score + score[1].score + score[2].score + score[3].score + score[4].score;
//	cout << sum << "\n";
//
//
//	int pb_nums[num_sum];
//	for (int i = 0; i < num_sum; ++i)
//		pb_nums[i] = score[i].number;
//
//	// less bubble
//	for (int i = 0; i < num_sum - 1; ++i)
//	{
//		for (int j = i + 1; j < num_sum; ++j)
//		{
//			if (pb_nums[i] > pb_nums[j])
//			{
//				int temp = pb_nums[i];
//				pb_nums[i] = pb_nums[j];
//				pb_nums[j] = temp;
//			}
//		}
//	}
//
//	for (int i = 0; i < num_sum; ++i)
//		cout << pb_nums[i] << " ";
//	cout << "\n";
//	return 0;
//}