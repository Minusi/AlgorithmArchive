//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//
//int main()
//{
//	/* 사람 수를 입력으로 받습니다. */
//	int NumPeople;
//	cin >> NumPeople;
//	
//	vector<unsigned int> Weights;
//	vector<unsigned int> Heights;
//
//	unsigned int Weight;
//	unsigned int Height;
//	for (int i = 0; i < NumPeople; ++i)
//	{
//		cin >> Weight;	
//		cin >> Height;
//		
//		Weights.push_back(Weight);
//		Heights.push_back(Height);
//	}
//
//	if (Weights.size() != Heights.size())
//	{
//		return -1;
//	}
//
//
//	int Grade = 1;
//	for (int i = 0; i < Weights.size(); ++i)
//	{
//		Grade = 1;
//		for (int j = 0; j < Weights.size(); ++j)
//		{
//			if (Weights[i] < Weights[j]
//				&& Heights[i] < Heights[j])
//			{
//				Grade++;
//			}
//		}
//		cout << Grade << " ";
//	}
//	return 0;
//}