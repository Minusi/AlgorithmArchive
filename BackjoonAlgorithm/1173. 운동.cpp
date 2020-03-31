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
//	int N, T, R, m, M;
//	cin >> N >> m >> M >> T >> R;
//
//	int n = 0;
//	int time = 0;
//
//	int pulse = m;
//	
//	if (m + T > M)
//	{
//		cout << -1 << "\n";
//		return 0;
//	}
//
//	while (n < N)
//	{
//		time++;
//
//		if (pulse + T <= M)
//		{
//			pulse += T;
//			n++;
//		}
//		else
//		{
//			if (pulse - R >= m)
//				pulse -= R;
//			else
//				pulse = m;
//		}
//		//cout << "pulse : " << pulse << "\n";
//		//cout << "n : " << n << "\n";
//	}
//	
//	cout << time << "\n";
//	return 0;
//}