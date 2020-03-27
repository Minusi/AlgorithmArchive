//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//constexpr int max_limit = 20;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, m;
//	cin >> n >> m;
//
//	map<string, string> ssm;
//	string site, pw;
//	for (int i = 0; i < n; ++i)
//	{
//		cin >> site >> pw;
//		ssm.insert(make_pair(site, pw));
//	}
//	
//	for (int i = 0; i < m; ++i)
//	{
//		cin >> site;
//		auto it = ssm.find(site);
//		if (it != ssm.end())
//			cout << it->second << "\n";
//	}
//	return 0;
//}