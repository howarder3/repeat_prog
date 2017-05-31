#include<iostream>
using namespace std;

int main()
{
	//declare variables(宣告要用到的變數)
	int number_of_bars;
	double one_weight,total_weight;
	char ans;

	do
	{
		//input(輸入)
		cout<<"Enter the number of bars: ";
		cin>>number_of_bars;
		cout<<"Enter the weight of one bar: "; //(a)-this will be uesd later
		cin>>one_weight;                       //(b)-this will be uesd later   

		//calculate(計算)
		total_weight=one_weight*number_of_bars;

		//output(輸出)
		cout<<"Total weight is "<<total_weight<<".\n\n";

		//ask if the user wants to continue or not(問還要不要繼續)
		cout<<"Do you want to continue?Press y for yes,n for no:";
		cin>>ans;
	}while(ans=='y'||ans=='Y');

	system("PAUSE");
	return 0;
}