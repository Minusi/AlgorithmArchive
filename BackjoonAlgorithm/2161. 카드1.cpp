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
//	queue<int> grave;
//	queue<int> deck;
//	for (int i = 1; i <= n; ++i)
//		deck.push(i);
//
//	while (deck.size() > 1)
//	{
//		auto abandoned = deck.front();
//		deck.pop();
//		grave.push(abandoned);
//		
//		auto shuffle = deck.front();
//		deck.pop();
//		deck.push(shuffle);
//	}
//
//	while(grave.empty() == false)
//	{
//		auto print = grave.front();
//		grave.pop();
//		cout << print << " ";
//	}
//
//	cout << deck.front() << "\n";
//	return 0;
//}