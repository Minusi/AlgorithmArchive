//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	/* 현재 X, Y 좌표 */
//	int X, Y;
//	cin >> X >> Y;
//	
//	/* 직사각형의 가로, 세로 길이 */
//	int Width, Height;
//	cin >> Width >> Height;
//
//	/* 유효성 검사 */
//	if (Width <= 0 || Width > 1000
//		|| Height <= 0 || Height > 1000)
//	{
//		return -1;
//	}
//	if (X < 1 || X > Width - 1
//		|| Y < 1 || Y > Height - 1)
//	{
//		return -1;
//	}
//
//
//
//	int MinDistance = 987654321;
//	int CurrDistance = MinDistance;
//
//	/* 동쪽으로의 거리 확인 */
//	CurrDistance = Width - X;
//	MinDistance = min(CurrDistance, MinDistance);
//	
//	/* 서쪽으로의 거리 확인 */
//	CurrDistance = X - 0;
//	MinDistance = min(CurrDistance, MinDistance);
//
//	/* 남쪽으로의 거리 확인 */
//	CurrDistance = Y - 0;
//	MinDistance = min(CurrDistance, MinDistance);
//
//	/* 북쪽으로의 거리 확인 */
//	CurrDistance = Height - Y;
//	MinDistance = min(CurrDistance, MinDistance);
//	
//
//	cout << MinDistance << endl;
//
//	return 0;
//}