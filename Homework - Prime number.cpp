// Homework - Prime number.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;


int main()
{
	int user , prime , re;
	cout << "Enter an integer value \n";
    cin >> user; 
	 while (user <=1)
		{
		cout << "Please input another integer\n";
		cin >> user;
		}

	 if (user >= 1)
	 {
		 cout << "All prime numbers below " << user << " are:\n";
		 for (int prime = 2; prime <= user; prime++)  //尋找範圍 : 跑到 user 所輸入的值
		 {
			 for (int y = 2; y <= prime ; y++)
			 {
				 re = prime % y;
				 if ((re == 0) && (prime != y))
					 break;
				 if ((re == 0) && (prime = y))
					 cout << prime << " ";
			 }
		 }
	 }
	return 0;
}
