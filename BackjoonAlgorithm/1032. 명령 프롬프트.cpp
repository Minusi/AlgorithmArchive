//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//constexpr int nmax = 50;
//constexpr int max_filename = 51;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	char filename[max_filename], cmp_filename[max_filename], cmdline[max_filename];
//	size_t filename_length;
//
//	cin >> filename;
//	filename_length = strlen(filename);
//	strcpy(cmdline, filename);
//	for (int i = 1; i < n; ++i)
//	{
//		cin >> cmp_filename;
//		for (int j = 0; j < filename_length; ++j)
//		{
//			if (filename[j] == cmp_filename[j])
//				continue;
//			else
//				cmdline[j] = '?';
//		}
//	}
//
//	cout << cmdline << "\n";
//	return 0;
//}