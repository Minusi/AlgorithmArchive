//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cmath>
//#include <functional>
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
//	string input;
//	cin >> input;
//
//	bool bZero = false;
//	bool bMultiple3 = false;
//	int sum_input = 0;
//	for (const auto& it : input)
//	{
//		if (it == '0') bZero = true;
//		sum_input += (it - '0');
//	}
//	bMultiple3 = sum_input % 3 == 0 ? true : false;
//
//	// print result value
//	if (bZero == false || bMultiple3 == false)
//	{
//		cout << -1 << "\n";
//	}
//	else
//	{
//		sort(input.begin(), input.end(), greater<int>());
//		cout << input << "\n";
//	}
//	return 0;
//}