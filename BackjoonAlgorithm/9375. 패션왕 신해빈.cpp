//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//
//
//int main()
//{
//	unsigned int T;
//	cin >> T;
//	for (unsigned int tc = 1; tc <= T; ++tc)
//	{
//		unsigned int N;
//		cin >> N;
//
//		map<string, set<string>> Clothes;
//		string ClothName;
//		string ClothType;
//		
//		int NumType = 0;
//		for (unsigned int i = 0; i < N; ++i)
//		{
//			cin >> ClothName >> ClothType;
//			auto Index = Clothes.find(ClothType);
//			if (Index != Clothes.end())
//			{
//				Index->second.insert(ClothName);
//			}
//			else
//			{
//				set<string> TempSet;
//				TempSet.insert(ClothName);
//				Clothes.insert(pair<string, set<string>>(ClothType, TempSet));
//				NumType++;
//			}
//		}
//
//
//
//		/* 옷 종류별로 개수를 저장하는 컨테이너 */
//		vector<int> TypeCounts;
//		TypeCounts.reserve(NumType);
//		for (const auto& it : Clothes)
//		{
//			/* 아무것도 입지 않은 상태를 추가한다. */
//			TypeCounts.push_back(it.second.size() + 1);
//		}
//
//		int Result = 1;
//		for (const auto& it : TypeCounts)
//		{
//			/* 경우의 수 곱셈 */
//			Result *= it;
//		}
//		/* 아무것도 입지 않은 결과를 제외한다. */
//		Result = Result - 1;
//
//		cout << Result << endl;
//	}
//}