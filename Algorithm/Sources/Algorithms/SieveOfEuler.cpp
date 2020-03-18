//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//
//
//int main()
//{
//	/* 체의 한계지점 */
//	unsigned int Limit;
//	cin >> Limit;
//	
//	
//	
//	/* 원본 숫자 리스트 */
//	vector<int> OriginalList;
//	OriginalList.reserve(Limit);
//	for (unsigned int i = 2; i < Limit; ++i)
//	{
//		OriginalList.push_back(i);
//	}
//	/* 소수를 저장할 컨테이너 */
//	vector<int> Primes;
//
//	/* 오일러의 체 */
//	while (OriginalList.size() > 0)
//	{
//		/* 원본 리스트의 0번째 인덱스 * 모든 엘리먼트의 값을 새 리스트에 등록 */
//		vector<int> NewList;
//		NewList.reserve(OriginalList.size());
//		for (const auto& it : OriginalList)
//		{
//			NewList.push_back(it * OriginalList[0]);
//		}
//		
//		/* 새 리스트의 요소와 중첩되는 원본 리스트 요소들 전부 제거 */
//		for (auto it = NewList.begin(); it != NewList.end(); )
//		{
//			vector<int>::iterator FindIndex = find(OriginalList.begin(), OriginalList.end(), *it);
//			if (FindIndex != OriginalList.end())
//			{
//				OriginalList.erase(FindIndex);
//			}
//			else
//			{
//				it++;
//			}
//
//		}
//
//		/* 원본 리스트의 0번째 인덱스를 소수로 등록하고 리스트에서 제거 */
//		if (OriginalList.size() > 0)
//		{
//			Primes.push_back(OriginalList[0]);
//			OriginalList.erase(OriginalList.begin());
//		}
//	}
//
//	/* 소수 출력 */
//	int Count = 0;
//	for (const auto& it : Primes)
//	{
//		cout << it << "\t";
//		Count++;
//
//		if (Count % 10 == 0)
//		{
//			cout << endl;
//		}
//	}
//	return 0;
//}