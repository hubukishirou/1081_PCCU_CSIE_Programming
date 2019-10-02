/*==========================================

標題：第三題-是誰比較胖

==========================================*/

#include<iostream>
#include<iomanip> //為了要使用setprecision，因此需增加此include
using namespace std;

int main()
{
	int height, sex; //宣告兩個變數
	
	cin >> height >> sex; //輸入兩個數，分別為身高與性別
	
	if(sex == 1) //男生
		cout << setprecision(1) << fixed << (height-80)*0.7 << endl;
	else //女生
		cout << setprecision(1) << fixed << (height-70)*0.6 << endl;

	return 0;
}