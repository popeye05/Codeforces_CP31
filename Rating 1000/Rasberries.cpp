#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Solution Class
class solution
{
private:
	int minimum=INT_MAX,val;//This will be the used to find the number on which we're going to operate.
	int steps=0;
public: 
	int rasberries(vector<int> &arr,int k) //k is the divisor
	{
		//Now basically this would be our solution:
		for(int i=0;i<arr.size();i++)
		{
			int temp = abs(arr[i]);
			minimum=min(minimum,(k-(temp%k))% k);
		}
		//Now I should be getting the value after this loop
		while(minimum!=0) {steps++; minimum--;}
		return steps;		
	}	
};

int main()
{
	cout<<"This is the Codeforces Rasberries problem:\nPlease Do Enter The Inputs: ";
	vector<int> arr; int n;
	cout<< "Enter Array Size: ";cin>>n;
	cout<<"1.Enter array values: ";for(int i=0;i<n;i++) {int temp;cin>>temp;arr.push_back(temp);}
	cout<<"Enter Divisor Value: "; int k; cin>>k;
	solution s; cout<<"Output: " <<s.rasberries(arr,k);
	
	//Done!
}
