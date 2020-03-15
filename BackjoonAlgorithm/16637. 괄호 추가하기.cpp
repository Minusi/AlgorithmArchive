//#include <iostream>
//#include <stack>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//int calculate(const vector<int>& nums, const vector<char>& ops, vector<bool>& flags)
//{
//	vector<int> renums;
//	vector<char> reops;
//	
//	bool prev_flag = false;
//	for (int i = 0; i < flags.size(); ++i)
//	{
//		if (flags[i] == true)
//		{
//			switch (ops[i])
//			{
//			case '+':
//				renums.push_back(nums[i] + nums[i + 1]);
//				break;
//			case '-':
//				renums.push_back(nums[i] - nums[i + 1]);
//				break;
//			case '*':
//				renums.push_back(nums[i] * nums[i + 1]);
//				break;
//			}
//		}
//		else
//		{
//			reops.push_back(ops[i]);
//			if(prev_flag == false)
//				renums.push_back(nums[i]);
//			if ((i + 1) == flags.size())
//				renums.push_back(nums[i + 1]);
//		}
//
//		prev_flag = flags[i];
//	}
//	
//#ifdef _DEBUG
//	for (const auto& it : renums)
//	{
//		cout.width(4);
//		cout << it;
//	}cout << "\n";
//	for (const auto jt : reops)
//	{
//		cout.width(4);
//		cout << jt;
//	}cout << "\n";
//#endif // _DEBUG
//
//	int answer = renums[0];
//	for (int i = 0; i < reops.size(); ++i)
//	{
//		switch (reops[i])
//		{
//		case '+':
//			answer += renums[i + 1];
//			break;
//		case '-':
//			answer -= renums[i + 1];
//			break;
//		case '*':
//			answer *= renums[i + 1];
//			break;
//		}
//	}
//
//	return answer;
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	char expression[20];
//	cin >> expression;
//
//	vector<int> nums;
//	vector<char> ops;
//	for (int i = 0; i < n; ++i)
//	{
//		if (i % 2 == 0)
//			nums.push_back(expression[i] - '0');
//		else
//			ops.push_back(expression[i]);
//	}
//
//	int answer = 0x80000000;
//
//	stack<vector<bool>> s;
//	if (ops.size() >= 1)
//	{
//		s.push({ true });
//		s.push({ false });
//	}
//	else
//		answer = nums[0];
//	while (s.empty() == false)
//	{
//		auto curr = s.top();
//		s.pop();
//
//		if (curr.size() == ops.size())
//		{
//#ifdef _DEBUG
//			for (const auto& it : curr)
//			{
//				cout.width(6);
//				cout << boolalpha << it;
//			}cout << "\n";
//#endif // _DEBUG
//
//			answer = max(answer, calculate(nums, ops, curr));
//			continue;
//		}
//
//		bool flag = curr.back();
//		if (flag)
//		{
//			curr.push_back(false);
//			s.emplace(curr);
//			curr.pop_back();
//		}
//		else
//		{
//			curr.push_back(true);
//			s.emplace(curr);
//			curr.pop_back();
//			curr.push_back(false);
//			s.emplace(curr);
//			curr.pop_back();
//		}
//	}
//
//
//	cout << answer << "\n";
//
//	return 0;
//}   