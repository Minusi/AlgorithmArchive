//#include <iostream>
//#include <cstring>
//using namespace std;
//
//#ifdef _DEBUG
//#include "Utility.h"
//#endif // _DEBUG
//
//
//
//typedef unsigned char uint8;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;	cin >> t;
//	char code[4097], input[4097];
//	int code_index, max_code_index, input_index;
//	while (t--)
//	{
//		// initialize variables
//		code_index = 0, input_index = 0, max_code_index = -1;
//		int program_count = 0;
//
//		// store codes and inputs
//		int mem_size, code_size, input_size;
//		cin >> mem_size >> code_size >> input_size;
//		cin >> code >> input;
//
//		uint8* p = new uint8[mem_size];
//		uint8* const pbegin = p;
//		memset(p, 0, sizeof(uint8) * mem_size);
//
//		// runs fxxk interpreter
//		bool branch = false;
//		while (code_index < code_size && program_count <= 50000000)
//		{
//			if (code_index > max_code_index)
//				max_code_index = code_index;
//			//cout << "code : " << code[code_index] << "\n";
//			switch (code[code_index])
//			{
//			case '-':
//				*p = ((uint8)(p[0] - 1)) % 256;
//				break;
//			case '+':
//				*p = ((uint8)(p[0] + 1)) % 256;
//				break;
//			case '<':
//				p == pbegin ? (p = pbegin + mem_size - 1) : (p -= 1);
//				break;
//			case '>':
//				p == pbegin + mem_size - 1 ? p = pbegin : p += 1;
//				break;
//			case '[':
//				if (*p == 0)
//				{
//					branch = true;
//					int pair = 0;
//					int end_index = code_index + 1;
//					for (; pair >= 0; ++end_index)
//					{
//						if (code[end_index] == '[')
//							pair += 1;
//						else if (code[end_index] == ']')
//							pair -= 1;
//					}
//					end_index -= 1;
//					code_index = end_index;
//				}
//				else
//				{
//					branch = false;
//				}
//				break;
//			case ']':
//				// X_X : source of evil
//				if (*p != 0)
//				{
//					branch = true;
//					int pair = 0;
//					int begin_index = code_index - 1;
//					for (; pair >= 0 && begin_index >= 0; --begin_index)
//					{
//						if (code[begin_index] == ']')
//							pair += 1;
//						else if (code[begin_index] == '[')
//							pair -= 1;
//					}
//					begin_index += 1;
//					code_index = begin_index;
//				}
//				else
//				{
//					branch = false;
//				}
//				break;
//			case '.':
//				break;
//			case ',':
//				if (input_index >= input_size)
//				{
//					*p = (uint8)255;
//				}
//				else
//				{
//					*p = (uint8)input[input_index];
//					input_index++;
//				}
//				break;
//			}
//			
//			if(branch == false)
//			{
//				code_index += 1;
//			}
//			program_count += 1;
//		}
//
//		if (program_count <= 50000000)
//		{
//			cout << "Terminates\n";
//		}
//		else
//		{
//			int inf_left, inf_right = max_code_index;
//			int pair = 0;
//			for (inf_left = max_code_index - 1; pair >= 0; --inf_left)
//			{
//				if (code[inf_left] == ']')
//					pair += 1;
//				else if(code[inf_left] == '[')
//					pair -= 1;
//			}
//			inf_left += 1;
//
//			cout << "Loops " << inf_left << " " << inf_right << "\n";
//		}
//
//		delete[] pbegin;
//	}
//	return 0;
//}