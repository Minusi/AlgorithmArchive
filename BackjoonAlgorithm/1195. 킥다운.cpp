//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//constexpr int INF = 987654321;
//void fit_gears(string& short_gear, string& long_gear, int& answer)
//{
//	for (int i = 0; i < long_gear.size(); ++i)
//	{
//		bool fit = true;
//		int local_length = long_gear.size();
//		for (int j = 0; j < short_gear.size(); ++j)
//		{
//			if (long_gear.size() <= j + i)
//			{
//				local_length++;
//				continue;
//			}
//
//#ifdef _DEBUG
//			cout << "short_gear[" << j << "] : " << short_gear[j] << "\n";
//			cout << "long_gear[" << j + i << "] : " << long_gear[j + i] << "\n";
//#endif // _DEBUG
//
//			if (long_gear[j + i] == short_gear[j]
//				&& short_gear[j] != '1')
//			{
//				fit = false;
//				break;
//			}
//		}
//		if (fit)
//		{
//#ifdef _DEBUG
//			cout << "fit\n";
//#endif // _DEBUG
//			if (answer > local_length)
//				answer = local_length;
//		}
//	}
//
//	for (int i = 0; i < short_gear.size(); ++i)
//	{
//		bool fit = true;
//		int local_length = short_gear.size();
//		for (int j = 0; j < long_gear.size(); ++j)
//		{
//			if (short_gear.size() <= j + i)
//			{
//				local_length++;
//				continue;
//			}
//
//#ifdef _DEBUG
//			cout << "short_gear[" << j << "] : " << short_gear[j] << "\n";
//			cout << "long_gear[" << j + i << "] : " << long_gear[j + i] << "\n";
//#endif // _DEBUG
//
//			if (short_gear[j + i] == long_gear[j]
//				&& long_gear[j] != '1')
//			{
//				fit = false;
//				break;
//			}
//		}
//		if (fit)
//		{
//#ifdef _DEBUG
//			cout << "fit\n";
//#endif // _DEBUG
//			if (answer > local_length)
//				answer = local_length;
//		}
//	}
//
//	if (answer == INF)
//		answer = short_gear.length() + long_gear.length();
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	string g1, g2;
//	cin >> g1 >> g2;
//
//	string& short_gear = g1.size() >= g2.size() ? g2 : g1;
//	string& long_gear = short_gear == g1 ? g2 : g1;
//	int min_length = INF;
//	int cand_length = INF;
//	
//	fit_gears(short_gear, long_gear, cand_length);
//	if (min_length > cand_length)
//		min_length = cand_length;
//
//	reverse(short_gear.begin(), short_gear.end());
//	fit_gears(short_gear, long_gear, cand_length);
//	if (min_length > cand_length)
//		min_length = cand_length;
//
//	cout << min_length << "\n";
//
//	return 0;
//}