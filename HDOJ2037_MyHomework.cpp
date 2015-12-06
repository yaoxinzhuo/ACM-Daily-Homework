/*
	*Problem's link
	http://acm.hdu.edu.cn/showproblem.php?pid=2037
*/
#include<iostream>
#include<algorithm>
using namespace std;
class Work
{
    public:
        int start;
        int end;
};
bool cmp(const Work&a,const Work&b)
{
    if(a.end<b.end)
    {
        return true;
    }
    else
    {
        if((a.end==b.end)&&(a.start>b.start))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            Work* work = new Work[n];
            for(int i=0;i<n;i++)
            {
                cin>>work[i].start;
                cin>>work[i].end;
            }    
            sort(work,work+n,cmp);
            //for(int i=0;i<n;i++)
            //{
            //    cout<<work[i].start<<" "<<work[i].end<<endl;
            //}
            int d=0;
            int sum=0;
            for(int i=0;i<n;i++)
            {
                if(d<=work[i].start)
                {
                    d=work[i].end;
                    sum+=1;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
} 