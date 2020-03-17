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
//	int n;
//	cin >> n;
//	
//	int test_rooms[1000000];
//	for (int i = 0; i < n; ++i)
//#ifdef _DEBUG
//		test_rooms[i] = 1000000;
//#else
//		cin >> test_rooms[i];
//#endif // _DEBUG
//
//
//	long long main_dir, sub_dir;
//	cin >> main_dir >> sub_dir;
//
//	// one main director must be in each test_rooms
//	long long total_dir = n;
//	for (int i = 0; i < n; ++i)
//	{
//		test_rooms[i] -= main_dir;
//		if (test_rooms[i] > 0)
//			total_dir += (test_rooms[i] / sub_dir) + (test_rooms[i] % sub_dir == 0 ? 0 : 1);
//	}
//
//	cout << total_dir << "\n";
//	return 0;
//}