//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//#endif
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//
//	int T;
//	cin >> T;
//
//
//
//	int Array[100000];
//	bool isReverse;
//	int Front;
//	int Back;
//	int Size;
//	for (int tc = 1; tc <= T; ++tc)
//	{
//		string P;
//		cin >> P;
//		
//		int N;
//		cin >> N;
//		Front = 0;
//		Back = N - 1;
//		Size = N;
//		isReverse = false;
//
//		string X;
//		X.reserve(100000);
//		cin >> X;
//		int InputIdx = 0;
//		string Buffer;
//		Buffer.reserve(4);
//		for (const auto& it : X)
//		{
//			if (it >= '0' && it <= '9')
//			{
//				Buffer += it;
//			}
//			else
//			{
//				if (Buffer.empty() == false)
//				{
//					Array[InputIdx++] = stoi(Buffer);
//					Buffer.clear();
//				}
//			}
//		}
//
//
//
//#ifdef DEBUG
//		cout << "FRONT : " << Front << ", Back : " << Back << ", Size : " << Size << "\n";
//#endif // DEBUG
//		for (const auto& it : P)
//		{
//			if (it == 'R')
//			{
//				int Temp = Front;
//				Front = Back;
//				Back = Temp;
//
//				isReverse = !isReverse;
//			}
//			else if (it == 'D')
//			{
//				if (isReverse == false)
//				{
//					if (Front >= 0 && Front <= Back)
//					{
//						Array[Front++] = -1;
//						Size--;
//					}
//					else
//					{
//						cout << "error\n";
//						Size--;
//						break;
//					}
//				}
//				else
//				{
//					if (Front >= 0 && Front >= Back)
//					{
//						Array[Front--] = -1;
//						Size--;
//					}
//					else
//					{
//						cout << "error\n";
//						Size--;
//						break;
//					}
//				}
//			}
//		}
//
//#ifdef DEBUG
//		cout << "FRONT : " << Front << ", Back : " << Back << ", Size : " << Size << "\n";
//#endif // DEBUG
//		if (isReverse == false && Size >= 0)
//		{
//			cout << "[";
//			for (int i = Front; i <= Back; ++i)
//			{
//				cout << Array[i];
//				if (i != Back)
//				{
//					cout << ",";
//				}
//			}
//			cout << "]\n";
//		}
//		else if(isReverse == true && Size >= 0)
//		{
//			cout << "[";
//			for (int i = Front; i >= Back; --i)
//			{
//				cout << Array[i];
//				if (i != Back)
//				{
//					cout << ",";
//				}
//			}
//			cout << "]\n";
//		}
//	}
//	return 0;
//}