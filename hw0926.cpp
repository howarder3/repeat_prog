#include<iostream>
using namespace std;

int main()
{
	//declare variables(�ŧi�n�Ψ쪺�ܼ�)
	int number_of_bars;
	double one_weight,total_weight;
	char ans;

	do
	{
		//input(��J)
		cout<<"Enter the number of bars: ";
		cin>>number_of_bars;
		cout<<"Enter the weight of one bar: "; //(a)-this will be uesd later
		cin>>one_weight;                       //(b)-this will be uesd later   

		//calculate(�p��)
		total_weight=one_weight*number_of_bars;

		//output(��X)
		cout<<"Total weight is "<<total_weight<<".\n\n";

		//ask if the user wants to continue or not(���٭n���n�~��)
		cout<<"Do you want to continue?Press y for yes,n for no:";
		cin>>ans;
	}while(ans=='y'||ans=='Y');

	system("PAUSE");
	return 0;
}