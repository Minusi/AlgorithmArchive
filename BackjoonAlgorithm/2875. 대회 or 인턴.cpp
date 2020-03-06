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
//	// means female, male, team
//	int f, m, k;
//#ifdef _DEBUG
//	f = GenerateSingleTestData<int>(5, 20);
//	m = GenerateSingleTestData<int>(2, 12);
//	k = GenerateSingleTestData<int>(1, f + m);
//	cout << f << " " << m << " " << k << "\n";
//#else
//	cin >> f >> m >> k;
//#endif // _DEBUG
//
//
//	int numTeams;
//	int numRemainders;
//	if (f > 2 * m)
//	{
//		numTeams = m;
//		numRemainders = f - (2 * numTeams);
//	}
//	else if (f < 2 * m)
//	{
//		numTeams = f / 2;
//		numRemainders = m - numTeams + (f % 2 != 0 ? 1 : 0);
//	}
//	else
//	{
//		numTeams = m;
//		numRemainders = 0;
//	}
//
//	k -= numRemainders;
//
//	numTeams -= k > 0 ? ((k / 3) + (k % 3 == 0 ? 0 : 1)) : 0;
//	cout << numTeams << "\n";
//
//	return 0;
//}