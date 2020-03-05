int IsPrime(int b)
{
    int a,ret,i,sum;
    for(a=2;a<=b;a++)
    {
    i=1;
    do
    {
       i++;
       ret=a%i;
    }while(ret!=0 && i<=a);
    if(i<a)
       return 0
    else
    i=1;
    do
    {
       i++;
       ret=a%i;
    }while(ret!=0 && i<=a);
       ;
    }
    return sum;
}
