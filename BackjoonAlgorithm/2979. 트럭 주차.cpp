//#include <iostream>
//#include <set>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_range = 3;
//struct ptime
//{
//	int enter;
//	int exit;
//};
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int costs[max_range];
//	cin >> costs[0] >> costs[1] >> costs[2];
//
//
//	ptime trucks[max_range];
//	set<int> timeline;
//	for (int i = 0; i < max_range; ++i)
//	{
//		cin >> trucks[i].enter >> trucks[i].exit;
//		timeline.insert(trucks[i].enter);
//		timeline.insert(trucks[i].exit);
//	}
//	
//	int num_parking = 0;
//	int cost = 0;
//	{
//		int prtimeline = 0;
//		int prnum_park = 0;
//		for(const auto& it : timeline)
//		{
//			for (int j = 0; j < max_range; ++j)
//			{
//				if (it == trucks[j].enter)
//					num_parking++;
//				else if (it == trucks[j].exit)
//					num_parking--;
//			
//			}
//			cost += (it - 1 - prtimeline) * prnum_park * costs[prnum_park - 1];
//			cost += num_parking * costs[num_parking - 1];
//
//			prtimeline = it;
//			prnum_park = num_parking;
//		}
//	}
//
//	cout << cost << "\n";
//
//	return 0;
//}