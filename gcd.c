#include<stdio.h>
int main()
{
int n;
int m;

printf("Euclidean Algorithm\n");
printf("n:");
scanf("%d",&n);
printf("m:");
scanf("%d",&m);
if(n ==0 || m==0)
{
	printf("0/0 belirsizligi");
	return 0;
}
printf("gcd(%d,%d):%d",n,m,gcd(n,m));
return 0;

}
int gcd(int n, int m)
{
	int buyuk,kucuk =0;
	int r=0;
	if(n==0||m==0)
    {
        if(n==0)
           {buyuk=m;}
        else
           {buyuk=n;}
	}
 if(n>m)
    {buyuk=n;
     kucuk=m;
	}
  else
    {buyuk=m;
     kucuk=n;}
  while(kucuk!=0)
  {
      r=buyuk%kucuk;
      buyuk=kucuk;
      kucuk=r;
  }
return buyuk;
}
int gcd_rec(int n, int m)
{
	if(n==0)
		return m;
	if(m==0)
		return n;
	return gcd_rec(n,m);
}


