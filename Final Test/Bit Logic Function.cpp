int maxXor(int lo, int hi, int k) {
int s,max=0,i,j;
for(i=lo;i<=hi;i++)
{
    for(j=lo;j<=hi;j++)
    {
        s=i^j;
        if(max<s&&s<=k)
        max=s;
    }
}