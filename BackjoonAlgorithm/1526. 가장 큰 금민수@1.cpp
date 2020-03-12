//#include <iostream>
//#include <queue>
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
//	int answer = 0;
//
//	queue<int> nums;
//	nums.push(0);
//	while (nums.empty() == false)
//	{
//		int curr = nums.front();
//		nums.pop();
//		
//		if (curr > n)
//			continue;
//		
//		answer = answer > curr ? answer : curr;
//		nums.push(curr * 10 + 4);
//		nums.push(curr * 10 + 7);
//	}
//
//	cout << answer << "\n";
//	return 0;
//}