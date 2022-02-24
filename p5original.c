#include <stdio.h>
int input_array_size()
{
  printf("enter the array size\n");
  int n;
  scanf("%d",&n);
  return n;
}
void init_array(int n,int a[n])
{
  for(int i=0;i<n;i++)
    a[i]=i;
}
void erotosthenes_sieve(int n,int a[n])
{
  for(int i=2;i<n;i++)
  {
    for(int j=4;j<n;j++)
      {
        if(a[j]!=0 && a[i]!=0 && a[j]!=a[i])
        {
          if(a[j]%a[i]==0)
            a[j]=0;
        }
      }
  }
}
void out_put(int n,int a[n])
{
  for(int i=0;i<n;i++)
    {
      if(a[i]!=0)
        printf("%d,",a[i]);
    }   
}
int main()
{
  int n=input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  out_put(n,a);
}