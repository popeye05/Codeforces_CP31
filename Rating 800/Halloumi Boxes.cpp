/*Halloumi Boxes

Theofanis is busy after his last contest, as now, he has to deliver many halloumis all over the world. He stored them inside n
 boxes and each of which has some number ai
 written on it.

He wants to sort them in non-decreasing order based on their number, however, his machine works in a strange way. It can only reverse any subarray†
 of boxes with length at most k
.

Find if it's possible to sort the boxes using any number of reverses.

†
 Reversing a subarray means choosing two indices i
 and j
 (where 1=i=j=n) and changing the array a1,a2,…,an
 to a1,a2,…,ai-1,aj,aj-1,…,ai,aj+1,…,an-1,an
. The length of the subarray is then j-i+1
.
*/

#include<bits/stdc++.h>
using namespaces std;
int main()
{

int n,k;
vector<int> arr;
cout<<"Enter the Number of elements of array: ";
cin>>n;cout<<endl;
for(int i:arr)
{
	cin>> arr.at(i);
}
cout<<"Enter the value of K";
cin>>k;
//Additionally I will Create another array:
vector<int> copyarr;
for(int i=0;i<n;i++)
{
	copyarr[i]=arr[i];
}
//Now we'll sort this array
sort(copyarr.begin(),copyarr.end()); //i.e In Increasing order.
//done now our main solution begins:
int check=0;
for(int i=0;i<n;i++)
{
	if(copyarr[i]==arr[i])
		check++;
}
if(check==0 || k<=1)
{
	cout<< "\nYES";
}
else
	cout <<"\nNO";
}
