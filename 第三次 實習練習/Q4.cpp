/*==========================================

標題：第四題-美麗的水仙花

==========================================*/

#include <iostream>
using namespace std;

int main()
{
	int min, Max, count=0; //宣告三個數

	cin >> min >> Max; //輸入兩個數

	//當min小於等於Max則執行迴圈
	while(min <= Max)
	{
		//若是水仙花數時則印出且個數加1
		if(((min%10)*(min%10)*(min%10))+
			((min/10%10)*(min/10%10)*(min/10%10))+
			((min/100)*(min/100)*(min/100)) == min)
		{
			cout << min << endl;
			count++;
		}
		//min加1
		min++;
	}

	//印出個數
	cout << "Total:" << count << endl;

	return 0;
}