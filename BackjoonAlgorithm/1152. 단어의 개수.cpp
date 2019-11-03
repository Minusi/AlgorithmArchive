//#include <iostream>
//#include <string>
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
//	string Sentence;
//	getline(cin, Sentence);
//
//	
//	char Token = ' ';
//	int NumWords = 0;
//
//	size_t Start = 0;
//	size_t End = Sentence.find_first_of(Token);
//	while (End != string::npos)
//	{
//		if (Sentence[Start] != Token)
//		{
//			NumWords++;
//			//cout << Sentence.substr(Start, End - Start) << "\n";
//		}
//
//		Start = End + 1;
//		End = Sentence.find_first_of(Token, Start);
//	}
//	if (Sentence[Start] != Token && Sentence[Start] != '\0')
//	{
//		NumWords++;
//		//cout << (int)Sentence[Start] << "," << (int)Token << "\n";
//		//cout << Sentence.substr(Start, End - Start) << "\n";
//	}
//
//	cout << NumWords << "\n";
//
//	return 0;
//}