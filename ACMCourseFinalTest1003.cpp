        return true;
    }
    else
    {
        return false;
    }
}
int cal(int year,int month,int day)
{
    int sum;
    int d[2][12]={31,28,31,30,31,30,31,31,30,31,30,31,
                    31,29,31,30,31,30,31,31,30,31,30,31};
    int i;
    bool f=isleap(year);
    if(f==true)
    {
        i=1;
    }
    if(f==false)
    {
        i=0;
    }
    sum=0;
    for(int j=0;j<month-1;j++)
    {
        sum+=d[i][j];
    }
    sum+=day;
    return sum;
}
int main()
{
    int n;
    int year,month,day;
    cin>>n;
    while(n--)
    {
        scanf("%d/%d/%d",&year,&month,&day);
        //printf("%d %d %d\n",year,month,day);
        int d=cal(year,month,day);
        if(year>2000)
        {
            for(int i=2000;i<year;i++)
            {
                if(isleap(i)==true)
                {
                    d+=366;
                }
                else
                {
                    d+=365;
                }
            }
        }
        d=d%5;
        if(d==1||d==2||d==3)
        {
            cout<<"Fishing"<<endl;
        }
        else
        {
            cout<<"Resting"<<endl;
        }
    }
    return 0;
}
