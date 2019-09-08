#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;


/* 좌상단, 좌하단, 우상단, 우하단 */
int dx[4] = { -1, 1, -1, 1 };
int dy[4] = { -1, -1, 1, 1 };

/* 방향 열거형 */
enum EDirection
{
	TOPLEFT, BOTLEFT, TOPRIGHT, BOTRIGHT
};



/* 맵 */
vector<vector<int>> Map;

/* 맵 크기 */
int Size;



/* 디저트 종류 체크 */
bool CheckDessert[101];

/* 방향 체크 */
bool CheckDirection[4];



/* 답 */
int Answer = -1;




bool IsRange(int x, int y)
{
	return x >= 1 && x <= Size
		&& y >= 1 && y <= Size;
}



int GetConverse(int Direction)
{
	int CounterDirection = Direction;

	if (Direction == TOPLEFT)	CounterDirection = BOTRIGHT;
	else if (Direction == BOTLEFT)	CounterDirection = TOPRIGHT;
	else if (Direction == TOPRIGHT)	CounterDirection = BOTLEFT;
	else if (Direction == BOTRIGHT)	CounterDirection = TOPLEFT;

	return CounterDirection;
}




/* 출발점, 현재좌표, 현재까지 먹은 디저트 개수 */
void Dfs(int StartX, int StartY, int CurrentX, int CurrentY, int Count, int Direction)
{
	//cout << __FUNCTION__ << " StartX : " << StartX << ", StartY : " << StartY << ", CurrentX : " << CurrentX << ", CurrentY : " << CurrentY << ", Count : " << Count << ", Direction : " << Direction << endl;
	if (CurrentX == StartX && CurrentY == StartY)
	{
		//cout << "CurrentX : " << CurrentX << ", CurrentY : " << CurrentY << ", Count : " << Count << "\n";
		Answer = max(Answer, Count);
		return;
	}

	for (int k = 0; k < 4; ++k)
	{
		/* 현재 방향과 반대 방향은 가지 않는다. */
		if (k == GetConverse(Direction)) continue;

		/* 현재 방향과 다르지만 이전에 썼던 방향이면 가지 않는다. */
		if (k != Direction && CheckDirection[k]) continue;

		


		int NextX = CurrentX + dx[k];
		int NextY = CurrentY + dy[k];

		/* 범위에 벗어난 곳은 가지 않는다. */
		if (IsRange(NextX, NextY) == false) continue;

		int NextDessert = Map[NextX][NextY];

		/* 다음 장소가 시작 장소이면 결과를 출력한다. */
		bool IsStart = (NextX == StartX) && (NextY == StartY);
		if (IsStart)
		{
			Dfs(StartX, StartY, NextX, NextY, Count, k);
		}

		/* 먹었던 디저트를 가지고 있는 카페면 다음 방향 */
		if (CheckDessert[NextDessert]) continue;

		CheckDirection[k] = true;
		CheckDessert[NextDessert] = true;
		Dfs(StartX, StartY, NextX, NextY, Count + 1, k);
		CheckDessert[NextDessert] = false;
		CheckDirection[k] = false;
	}
}



int main(int argc, char** argv)
{
	int test_case;
	int T;
	/*
	   아래의 freopen 함수는 input.txt 를 read only 형식으로 연 후,
	   앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
	   //여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
	   freopen 함수를 이용하면 이후 cin 을 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.
	   따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 좋습니다.
	   freopen 함수를 사용하기 위해서는 #include <cstdio>, 혹은 #include <stdio.h> 가 필요합니다.
	   단, 채점을 위해 코드를 제출하실 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다.
	*/
//#pragma warning(disable:4996)
//	freopen("sample_input.txt", "r", stdin);
	

	cin >> T;
	/*
	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
	*/
	for(test_case = 1; test_case <= T; ++test_case)
	{
		cin >> Size;

		vector<int> SubMap;
		SubMap.reserve(Size + 1);
		int DessertMenu;
		
		Answer = -1;

		for (int i = 0; i <= Size; ++i)
		{
			SubMap.push_back(0);
		}
		Map.push_back(SubMap);
		Map.reserve(Size + 1);
		SubMap.clear();

		/* 입력값들을 2차원 벡터에 저장합니다. */
		for (int i = 1; i <= Size; ++i)
		{
			SubMap.push_back(0);
			for (int j = 1; j <= Size; ++j)
			{
				cin >> DessertMenu;
				SubMap.push_back(DessertMenu);
			}
			Map.push_back(SubMap);
			SubMap.clear();
		}

		//for (const auto& it : Map)
		//{
		//	for (const auto& jt : it)
		//	{
		//		cout << jt << " ";
		//	}
		//	cout << "\n";
		//}
		//cout << "\n";

		for (int i = 1; i <= Size; ++i)
		{
			for (int j = 1; j <= Size; ++j)
			{
				/* 우하단 시작 */
				int NextX = i + dx[3];
				int NextY = j + dy[3];

				if (IsRange(NextX, NextY) == false)
				{
					continue;
				}

				int StartDessert = Map[i][j];
				int NextDessert = Map[NextX][NextY];

				if (StartDessert != NextDessert)
				{
					CheckDessert[StartDessert] = true;
					CheckDessert[NextDessert] = true;
					CheckDirection[3] = true;
					Dfs(i, j, NextX, NextY, 2, 3);
					CheckDessert[NextDessert] = false;
					CheckDessert[StartDessert] = false;
					CheckDirection[3] = false;
				}
			}
		}
		cout << "#" << test_case << " " << Answer << "\n";
		Map.clear();

		memset(CheckDessert, false, sizeof(CheckDessert));
		memset(CheckDirection, false, sizeof(CheckDirection));
	}

	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}





//// 원본 코드1
//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//#define MAX_N 21
//#define MIN_INF -987654321
//
//#define LEFT_UP 0
//#define LEFT_DOWN 1
//#define RIGHT_UP 2
//#define RIGHT_DOWN 3
//
//int T;
//int N;
//int cafe[MAX_N][MAX_N];
//int ans = MIN_INF;
//bool check_dessert[101];
//bool check_dir[4];
//
//// 좌상, 좌하, 우상, 우하
//int dx[4] = { -1,1,-1,1 };
//int dy[4] = { -1,-1,1,1 };
//
//void Initialize()
//{
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			cafe[i][j] = 0;
//		}
//	}
//}
//
//bool IsRange(int x, int y)
//{
//	return 1 <= x && x <= N && 1 <= y && y <= N;
//}
//
//int GetConverse(int dir)
//{
//	int cdir = dir;
//
//	if (dir == LEFT_UP) cdir = RIGHT_DOWN;
//	else if (dir == LEFT_DOWN) cdir = RIGHT_UP;
//	else if (dir == RIGHT_UP) cdir = LEFT_DOWN;
//	else if (dir == RIGHT_DOWN) cdir = LEFT_UP;
//
//	return cdir;
//}
//
//// 출발점, 현재좌표, 현재까지 먹은 디저트 개수
//void Dfs(int start_x, int start_y, int curr_x, int curr_y, int cnt, int dir)
//{
//	//cout << __FUNCTION__ << " StartX : " << start_x << ", StartY : " << start_y << ", CurrentX : " << curr_x << ", CurrentY : " << curr_y << ", Count : " << cnt << ", Direction : " << dir << endl;
//
//	if (curr_x == start_x && curr_y == start_y)
//	{
//		cout << "CurrentX : " << curr_x << ", CurrentY : " << curr_y << ", Count : " << cnt << "\n";
//		ans = max(ans, cnt);
//		return;
//	}
//
//	for (int k = 0; k < 4; k++)
//	{
//		// 현재 방향과 반대 방향은 가지 않는다.
//		if (k == GetConverse(dir)) continue;
//
//		// 현재 방향과 다르지만 이전에 썻던 방향이면 가지 않는다.
//		if (k != dir && check_dir[k]) continue;
//
//		int next_x = curr_x + dx[k], next_y = curr_y + dy[k];
//
//		// 범위 벗어나는 곳은 안간다.
//		if (!IsRange(next_x, next_y)) continue;
//
//		int next_dessert = cafe[next_x][next_y];
//
//		bool IsStart = (next_x == start_x) && (next_y == start_y);
//
//		if (IsStart)
//			Dfs(start_x, start_y, next_x, next_y, cnt, k);
//
//		// 먹었던 디저트를 가지고 있는 카페면 다음 방향
//		if (check_dessert[next_dessert]) continue;
//
//		check_dir[k] = true;
//		check_dessert[next_dessert] = true;
//		Dfs(start_x, start_y, next_x, next_y, cnt + 1, k);
//		check_dessert[next_dessert] = false;
//		check_dir[k] = false;
//	}
//
//}
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//
//	#pragma warning(disable:4996)
//		freopen("sample_input.txt", "r", stdin);
//
//
//	cin >> T;
//	for (int tc = 1; tc <= T; tc++)
//	{
//		cin >> N;
//
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = 1; j <= N; j++)
//			{
//				cin >> cafe[i][j];
//			}
//		}
//
//		ans = MIN_INF;
//
//		for (int i = 1; i <= N; i++)
//		{
//			for (int j = 1; j <= N; j++)
//			{
//				int next_x = i + dx[3], next_y = j + dy[3];
//
//				if (!IsRange(next_x, next_y))
//					continue;
//
//				int start_dessert = cafe[i][j];
//				int next_dessert = cafe[next_x][next_y];
//
//				if (start_dessert != next_dessert)
//				{
//					check_dessert[start_dessert] = true;
//					check_dessert[next_dessert] = true;
//					check_dir[3] = true;
//					Dfs(i, j, next_x, next_y, 2, 3);
//					check_dessert[next_dessert] = false;
//					check_dessert[start_dessert] = false;
//					check_dir[3] = false;
//				}
//			}
//		}
//
//		if (ans == MIN_INF)
//			cout << "#" << tc << " -1" << "\n";
//		else
//			cout << "#" << tc << " " << ans << "\n";
//
//		Initialize();
//		memset(check_dessert, false, sizeof(check_dessert));
//		memset(check_dir, false, sizeof(check_dir));
//	}
//
//	return 0;
//}