//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
///*
//			0 1 2 
//			3 4 5
//			6 7 U
//
//	0 1 2	0 1 2	0 1 2	0 1 2
//	3 4 5	3 4 5	3 4 5	3 4 5
//	6 7 L	6 7 F	6 7 R	6 7 B
//
//			1 2 3
//			4 5 6
//			6 7 D
// */
//
//constexpr int cube_size = 3;
//constexpr int num_face = 6;
//// À­¸é, ¿À¸¥¸é, ¾Õ¸é, ¿Þ¸é, µÞ¸é, ¾Æ·§¸é ¼ø
//enum cube_face
//{
//	_top, _right, _front, _left, _back, _bottom
//};
//enum color
//{
//	white, blue, red, green, orange, yellow
//};
//
//void print_color(color c)
//{
//	switch (c)
//	{
//	case white:
//		cout << 'w';
//		break;
//	case blue:
//		cout << 'b';
//		break;
//	case red:
//		cout << 'r';
//		break;
//	case green:
//		cout << 'g';
//		break;
//	case orange:
//		cout << 'o';
//		break;
//	case yellow:
//		cout << 'y';
//		break;
//	}
//}
//
//void print_cubeface(cube_face cf, color cube[num_face][cube_size * cube_size])
//{
//	for (int i = 0; i < cube_size; ++i)
//	{
//		for (int j = 0; j < cube_size; ++j)
//			print_color(cube[cf][i * 3 + j]);
//		cout << "\n";
//	}
//}
//
//void print_cube(color cube[num_face][cube_size * cube_size])
//{
//	// top
//	for (int i = 0; i < cube_size; ++i)
//	{
//		cout << "\t";
//		for (int j = 0; j < cube_size; ++j)
//			print_color(cube[_top][i * 3 + j]);
//		cout << "\n";
//	}cout << "\n";
//
//	// 1 line
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_left][j]);
//	cout << "\t";
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_front][j]);
//	cout << "\t";
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_right][j]);
//	cout << "\t";
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_back][j]);
//	cout << "\n";
//
//	// 2 line
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_left][3 + j]);
//	cout << "\t";
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_front][3 + j]);
//	cout << "\t";
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_right][3 + j]);
//	cout << "\t";
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_back][3 + j]);
//	cout << "\n";
//
//	// 3 line
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_left][6 + j]);
//	cout << "\t";
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_front][6 + j]);
//	cout << "\t";
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_right][6 + j]);
//	cout << "\t";
//	for (int j = 0; j < cube_size; ++j)
//		print_color(cube[_back][6 + j]);
//	cout << "\n\n";
//
//	// top
//	for (int i = 0; i < cube_size; ++i)
//	{
//		cout << "\t";
//		for (int j = 0; j < cube_size; ++j)
//			print_color(cube[_bottom][i * 3 + j]);
//		cout << "\n";
//	}
//	cout << "***********************************************\n";
//}
//void rotate_cube(color (&cube)[num_face][cube_size * cube_size], char (&input)[3])
//{
//	color* pcube[4][3];
//	color* paxis;
//	switch (input[0])
//	{
//	case 'U':
//		for (int i = 0; i < 4; ++i)
//			for (int j = 0; j < 3; ++j)
//				pcube[i][j] = &cube[i + 1][j];
//		paxis = cube[0];
//		break;
//	case 'D':
//		for (int i = 0; i < 4; ++i)
//			for (int j = 0; j < 3; ++j)
//				pcube[i][j] = &cube[4 - i][6 + j];
//		paxis = cube[5];
//		break;
//	case 'R':
//		// top
//		pcube[0][0] = &cube[0][2];
//		pcube[0][1] = &cube[0][5];
//		pcube[0][2] = &cube[0][8];
//		// back
//		pcube[1][0] = &cube[4][6];
//		pcube[1][1] = &cube[4][3];
//		pcube[1][2] = &cube[4][0];
//		// bottom
//		pcube[2][0] = &cube[5][2];
//		pcube[2][1] = &cube[5][5];
//		pcube[2][2] = &cube[5][8];
//		// front
//		pcube[3][0] = &cube[2][2];
//		pcube[3][1] = &cube[2][5];
//		pcube[3][2] = &cube[2][8];
//		paxis = cube[1];
//		break;
//	case 'L':
//		// top
//		pcube[0][0] = &cube[0][0];
//		pcube[0][1] = &cube[0][3];
//		pcube[0][2] = &cube[0][6];
//		// front
//		pcube[1][0] = &cube[2][0];
//		pcube[1][1] = &cube[2][3];
//		pcube[1][2] = &cube[2][6];
//		// bottom
//		pcube[2][0] = &cube[5][0];
//		pcube[2][1] = &cube[5][3];
//		pcube[2][2] = &cube[5][6];
//		// back
//		pcube[3][0] = &cube[4][8];
//		pcube[3][1] = &cube[4][5];
//		pcube[3][2] = &cube[4][2];
//		paxis = cube[3];
//		break;
//	case 'F':
//		// top
//		pcube[0][0] = &cube[0][6];
//		pcube[0][1] = &cube[0][7];
//		pcube[0][2] = &cube[0][8];
//		// right
//		pcube[1][0] = &cube[1][0];
//		pcube[1][1] = &cube[1][3];
//		pcube[1][2] = &cube[1][6];
//		// bot
//		pcube[2][0] = &cube[5][2];
//		pcube[2][1] = &cube[5][1];
//		pcube[2][2] = &cube[5][0];
//		// left
//		pcube[3][0] = &cube[3][8];
//		pcube[3][1] = &cube[3][5];
//		pcube[3][2] = &cube[3][2];
//		paxis = cube[2];
//		break;
//	case 'B':
//		// top
//		pcube[0][0] = &cube[0][2];
//		pcube[0][1] = &cube[0][1];
//		pcube[0][2] = &cube[0][0];
//		// left
//		pcube[1][0] = &cube[3][0];
//		pcube[1][1] = &cube[3][3];
//		pcube[1][2] = &cube[3][6];
//		// bot
//		pcube[2][0] = &cube[5][6];
//		pcube[2][1] = &cube[5][7];
//		pcube[2][2] = &cube[5][8];
//		// right
//		pcube[3][0] = &cube[1][8];
//		pcube[3][1] = &cube[1][5];
//		pcube[3][2] = &cube[1][2];
//		paxis = cube[4];
//		break;
//	default:
//		return;
//	}
//
//	color temp[3];
//	color temp_axis;
//	if (input[1] == '+')
//	{
//		// rotate non-axis sides
//		temp[0] = *pcube[3][0];
//		temp[1] = *pcube[3][1];
//		temp[2] = *pcube[3][2];
//		for (int i = 2; i >= 0; --i)
//		{
//			*pcube[i + 1][0] = *pcube[i][0];
//			*pcube[i + 1][1] = *pcube[i][1];
//			*pcube[i + 1][2] = *pcube[i][2];
//		}
//		*pcube[0][0] = temp[0];
//		*pcube[0][1] = temp[1];
//		*pcube[0][2] = temp[2];
//
//		// rotate axis faces
//		temp_axis = paxis[0];
//		paxis[0] = paxis[6];
//		paxis[6] = paxis[8];
//		paxis[8] = paxis[2];
//		paxis[2] = temp_axis;
//
//		temp_axis = paxis[1];
//		paxis[1] = paxis[3];
//		paxis[3] = paxis[7];
//		paxis[7] = paxis[5];
//		paxis[5] = temp_axis;
//	}
//	else if (input[1] == '-')
//	{
//		temp[0] = *pcube[0][0];
//		temp[1] = *pcube[0][1];
//		temp[2] = *pcube[0][2];
//		for (int i = 0; i <= 2; ++i)
//		{
//			*pcube[i][0] = *pcube[i + 1][0];
//			*pcube[i][1] = *pcube[i + 1][1];
//			*pcube[i][2] = *pcube[i + 1][2];
//		}
//		*pcube[3][0] = temp[0];
//		*pcube[3][1] = temp[1];
//		*pcube[3][2] = temp[2];
//
//		// rotate axis faces
//		temp_axis = paxis[0];
//		paxis[0] = paxis[2];
//		paxis[2] = paxis[8];
//		paxis[8] = paxis[6];
//		paxis[6] = temp_axis;
//
//		temp_axis = paxis[1];
//		paxis[1] = paxis[5];
//		paxis[5] = paxis[7];
//		paxis[7] = paxis[3];
//		paxis[3] = temp_axis;
//	}
//
//	//print_cube(cube);
//	//print_cubeface(_top, cube);
//}
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	color cube[num_face][cube_size * cube_size];
//	for (int c = 0; c < num_face; ++c)
//		for (int i = 0; i < cube_size; ++i)
//			for (int j = 0; j < cube_size; ++j)
//				cube[c][i * 3 + j] = (color)c;
//
//	color cpy[num_face][cube_size * cube_size];
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		memcpy(cpy, cube, sizeof(cpy));
//		int n;
//		cin >> n;
//
//		char input[3] = { 0 };
//		for (int c = 0; c < n; ++c)
//		{
//			cin >> input;
//			rotate_cube(cpy, input);
//		}
//		print_cubeface(_top, cpy);
//
//	}
//	return 0;
//}