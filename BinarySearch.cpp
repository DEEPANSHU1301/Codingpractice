#include<iostream>
using namespace std;
int main()
{ int n;
	cin>>n;
	int a[100];
	int b[100];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
  int m;
  cin>>m;
  for(int j=0;j<m;j++)
  {
  	cin>>b[j];
  }
  int ans[1000];
  int s=max(n,m);
  int i=n-1;
  int j=m-1;
  int k=s-1;
  int carry=0;

 while(k>=0)
 {
  int sum=0;
  sum=carry;
  if(i>=0)
  {
  	sum+=a[i];
  }
  if(j>=0)
  {
  	sum+=b[j];
  }
   int q=sum/10;
   int r=sum%10;

   ans[k]=r;
   carry=q;
  i--;
  j--;
  k--;
}
if(carry!=0)
{ cout<<carry;
}
  
  for(int k=0;k<m;k++)
  {
  	cout<<ans[k]<<", ";
  }
  cout<<"END";

	return 0;
}