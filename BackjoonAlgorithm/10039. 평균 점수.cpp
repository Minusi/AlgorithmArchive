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
//	constexpr int num_students = 5;
//	int students[num_students];
//	for (int i = 0; i < num_students; ++i)
//		cin >> students[i];
//	
//	int sum = 0;
//	for (int i = 0; i < num_students; ++i)
//		sum += students[i] >= 40 ? students[i] : 40;
//	
//	double average = (double)sum / 5;
//	cout << average << "\n";
//	return 0;
//}