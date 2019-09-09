//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <chrono>
//#include <cmath>
//
//using namespace std;
//
//
//
//int main()
//{
//#define ENDNUMBER 666
//
//	int N;
//	int Answer;
//	cin >> N;
//	
//	chrono::system_clock::time_point TP1 = chrono::system_clock::now();
//
//	vector<int> EndNumbers;
//	EndNumbers.push_back(-1);
//	EndNumbers.push_back(666);
//
//	int Num = ENDNUMBER;
//	int Result;
//	vector<int> AvailableEndNums;
//	int AvailableSpace = 1;
//	int RightSideSpace = AvailableSpace;
//	int LeftSideSpace = 0;
//	while (EndNumbers.size() < 10000)
//	{
//
//		while (LeftSideSpace <= AvailableSpace)
//		{
//			for (int i = 0; i < pow(10, AvailableSpace); ++i)
//			{
//				int LeftSide = 0;
//				int RightSide = 0;
//				int Base = 0;
//				if (LeftSideSpace > 0)
//				{
//					if (i == 0)	continue;
//					
//					int NumDivide = AvailableSpace - LeftSideSpace;
//					int Temp = i;
//					for (int j = 0; j < NumDivide; ++j)
//					{
//						Temp = Temp / 10;
//					}
//
//					if(Temp >= (int)pow(10, LeftSideSpace - 1))
//						LeftSide = Temp;
//					else
//					{
//						LeftSide = -1;
//					}
//				}
//				if (RightSideSpace > 0)
//				{
//					RightSide = i % (int)pow(10, RightSideSpace);
//				}
//				
//				Result = (Num * (int)pow(10, RightSideSpace)) + RightSide;
//				Result += LeftSide * pow(10, (int)log10(Result) + 1);
//
//				if (LeftSide != -1)
//				{
//					AvailableEndNums.push_back(Result);
//				}
//			}
//
//			LeftSideSpace++;
//			RightSideSpace--;
//		}
//
//		AvailableSpace++;
//		RightSideSpace = AvailableSpace;
//		LeftSideSpace = 0;
//
//		sort(AvailableEndNums.begin(), AvailableEndNums.end());
//		AvailableEndNums.erase( unique(AvailableEndNums.begin(), AvailableEndNums.end()), AvailableEndNums.end());
//		EndNumbers.insert(EndNumbers.end(), AvailableEndNums.begin(), AvailableEndNums.end());
//		AvailableEndNums.clear();
//
//	}
//
//	//for (int i = 0; i < 10000; ++i)
//	//{
//	//	cout << EndNumbers[i] << endl;
//	//}
//	cout << EndNumbers[N] << endl;
//
//	chrono::system_clock::time_point TP2 = chrono::system_clock::now();
//	chrono::nanoseconds Time = TP2 - TP1;
//	//cout << "소요시간 : " << Time.count() / 1000000000.0 << endl;
//}