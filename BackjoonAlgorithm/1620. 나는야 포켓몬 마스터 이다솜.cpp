//#include <iostream>
//#include <utility>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//constexpr int max_range = 100000;
//constexpr int max_name = 20;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	string num_finder[max_range + 1];
//	pair<string, int> name_finder[max_range];
//	{
//		char pokemon[20];
//		for (int i = 1; i <= n; ++i)
//		{
//			cin >> pokemon;
//			num_finder[i] = pokemon;
//			
//			name_finder[i - 1].first = pokemon;
//			name_finder[i - 1].second = i;
//		}
//		sort(name_finder + 0, name_finder + n);
//	}
//
//	{
//		string input;
//		
//		for (int i = 0; i < m; ++i)
//		{
//			cin >> input;
//			// process numeric
//			if (input[0] - '0' >= 0 && input[0] - '0' <= 9)
//			{
//				cout << num_finder[stoi(input)] << "\n";
//			}
//			// process string
//			else
//			{
//				int left = 0;
//				int right = n - 1;
//				int mid;
//				while (left <= right)
//				{
//					mid = (left + right) / 2;
//					string& content = name_finder[mid].first;
//					if (content == input)
//					{
//						cout << name_finder[mid].second << "\n";
//						break;
//					}
//					else if (content > input)
//						right = mid - 1;
//					else if (content < input)
//						left = mid + 1;
//				}
//			}
//		}
//	}
//
//	return 0;
//}