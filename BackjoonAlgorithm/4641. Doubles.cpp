//#include <iostream>
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
//	int input = 0;
//	int array[15];
//	size_t array_size = 0;
//
//	int answer;
//	while (true)
//	{
//		cin >> input;
//		if (input == 0)
//		{
//			answer = 0;
//			for (int i = 0; i < array_size; ++i)
//			{
//				for (int j = 0; j < array_size; ++j)
//				{
//					if (array[i] == array[j] * 2)
//					{
//						answer++;
//						break;
//					}
//				}
//			}
//			cout << answer << "\n";
//			array_size = 0;
//		}
//		else if (input == -1)
//			break;
//		else
//			array[array_size++] = input;
//	}
//
//	return 0;
//}