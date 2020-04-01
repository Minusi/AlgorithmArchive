//#include <iostream>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int max_scale = 8;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int scales[max_scale];
//	enum _state
//	{
//		none, asc, desc, mix
//	} state;
//	{
//
//		int prev_scale = -1;
//		for (int i = 0; i < max_scale; ++i)
//		{
//			cin >> scales[i];
//			if (prev_scale == -1)
//			{
//				state = none;
//			}
//			else
//			{
//				if ((state == none || state == asc) && prev_scale < scales[i])
//					state = asc;
//				else if ((state == none || state == desc) && prev_scale > scales[i])
//					state = desc;
//				else
//				{
//					state = mix;
//					break;
//				}
//			}
//			prev_scale = scales[i];
//		}
//	}
//
//	switch (state)
//	{
//	case asc:
//		cout << "ascending\n";
//		break;
//	case desc:
//		cout << "descending\n";
//		break;
//	case mix:
//		cout << "mixed\n";
//		break;
//	}
//	return 0;
//}