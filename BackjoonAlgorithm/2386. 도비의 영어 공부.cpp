//#include <iostream>
//#include <cctype>
//using namespace std;
//
////#define DEBUG
//#ifdef DEBUG
//#include <chrono>
//#include "Utility.h"
//
//chrono::system_clock::time_point Start;
//chrono::nanoseconds Time;
//#endif
//
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	char Delimeter;
//	char Sentence[251];
//	int Num;
//	while(true)
//	{
//		Num = 0;
//		cin >> Delimeter;
//		if (Delimeter == '#')
//			break;
//
//		cin.ignore();
//		cin.getline(Sentence, 251);
//		
//		for (size_t i = 0; Sentence[i] != '\0'; ++i)
//			if (tolower(Sentence[i]) == Delimeter)
//				++Num;
//
//		cout << Delimeter << " " << Num << "\n";
//	}
//
//	return 0;
//}