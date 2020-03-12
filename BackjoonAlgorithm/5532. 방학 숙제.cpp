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
//	int num_vacations, kor_hm, math_hm, kor_solve, math_solve;
//	cin >> num_vacations >> kor_hm >> math_hm >> kor_solve >> math_solve;
//
//	int kor_days = kor_hm / kor_solve + (kor_hm % kor_solve != 0 ? 1 : 0);
//	int math_days = math_hm / math_solve + (math_hm % math_solve != 0 ? 1 : 0);
//	
//	cout << num_vacations - (kor_days > math_days ? kor_days : math_days) << "\n";
//	return 0;
//}