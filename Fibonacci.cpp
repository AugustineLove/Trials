#include <iostream>
using namespace std;
int main(){
	int n;
	int first=0,second=1,third;
	cout<<"Enter number of list of series you want ";
	cin>>n;
	cout<<first<<endl;
	cout<<second<<endl;
	for (int i=0; i<n-2; i++)
	//i starts from 0 and is less than n-2...... i++ (i.e the increment of i by 1 for each step)
	// i is less than n-2 because we already printed out the first two values in the series
	{
		
		third=first+second;
		first=second;
		second=third;
		cout<<third<<endl;
		
		
		
	}
	
		
	}
	


