#include<iostream>
#include<iomanip>

using namespace std;

void SelectionSort(int *a,const int n)
{
	for(int i=0;i<n;i++)
	{
		int j=i;
		for(int k=i+1;k<n;k++)
			if(a[k]<a[j])j=k;
		swap(a[i],a[j]);	
	}
}
int BinarySearch(int *a,const int x,int const n)
{
	int l=0;
	int r=n-1;
	
	while(l<=r)
	{
		int middle=(l+r)/2;
		if(x<a[middle])r=middle-1;
		else if(x>a[middle])l=middle+1;
		else return middle;
	}
	return -1;
}
int Rsum(int *a,const int n)
{
	if(n<=0)return 0;
	else return(Rsum(a,n-1)+a[n-1]);
}
int main()
{
	int a[]={8,7,5,6,3,4,9,2,1};
	int n=9;
	
	SelectionSort(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] ="<<"  "<<a[i]<<endl; 
	}			
	cout<<BinarySearch(a, 3, n)<<endl;			
	cout<<Rsum(a,n)<<endl;			
	
	
} 
