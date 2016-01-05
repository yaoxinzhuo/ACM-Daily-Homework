//http://acm.hdu.edu.cn/showproblem.php?pid=2031
#include <iostream>
using namespace std;

int main(){
    char str[20]="0123456789ABCDEFGHI";
    int n,m,tmp,i,j;
    int r[100];
    while(cin>>n>>m)
	{
            i=0;tmp=1;
            if(n<0)
			{
               cout<<"-";
               n=-n;
            }
            while(tmp!=0)
			{
                r[i]=n%m;
                n=n/m;
                tmp=n;
                i++;
   	        }
            for(j=i-1;j>=0;j--)
            {
            	cout<<str[r[j]];
			}
			cout<<endl;
    }
return 0;
}

