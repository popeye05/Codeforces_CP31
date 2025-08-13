#include<bits/stdc++.h>
#include<vector>
using namespace std;
class solution
{
	private:
		int i,min = INT_MAX;
	public: 
	 	int amkid(vector<int> &arr)
		 {
			for(i=0;i<arr.size();i++)
			{
				if(arr[i]==0)
					return 0;
				else if(min > abs(arr[i]))
				{
					min = abs(arr[i]);
				}
			}
		return min;	
		 }	
	
};

int main()
{
	cout<< "The Ambitious Kid Problem (Codeforces): \n";
	//Array : 
	vector<int> arr;
	cout<<"Enter the number of elements in your array: ";
	int n,x; cin>> n;
	cout<<"\nEnter the elements: ";
	for(int i=0;i<n;i++)	
	{
	cin>>x;
	arr.push_back(x);
	}
	//My solution
	solution s;
	int ans; ans = s.amkid(arr);
	cout << "\nThe number of steps required is:  "; 
	cout<< ans;
}
