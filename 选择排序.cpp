#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n=0,i=0,di=0,w=0;
    double  min=0,j=0;
    // w代表着最小数的位置
    n=4;
    double s[n];
    while (i<n)
    {
        cin>>s[i];
        i++;
    }
    i=0;
    while (i<n-1)
    {
        di=i;
        min=s[di];
        w=di;
        while (di<n-1)
        {
            if(min>s[di+1])
            {
                min=s[di+1];
                w=di+1;
            }
            di++;
        }
        if(w!=i)
        {
            j=s[i];
            s[i]=min;
            s[w]=j;
        }
        j=0;
        i++;
    }
    i=0;
    while (i<n)
    {
        cout<<s[i]<<endl;
        i++;
    }
	return 0;
}
//https://blog.csdn.net/DUXS11/article/details/132380024 头文件查询
