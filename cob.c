#include <stdio.h>
int main(){
	int n,t,g,p,tc,a[100],b[100];
	scanf("%d", &t);
	for(int q=0;q<t;q++)
	{
	if(t>=1 && t<=10)
	{
	int f=0,h=0;		
	scanf("%d %d",&g,&p);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{  
       scanf("%d\n %d\n",&a[i],&b[i]);
	   if((q%2)==0)
	   {
	   if(a[i]==1)
	   {
		   f++;
	   }
	   if(b[i]==1)
	   {
		   h++;
	   }
	   }
	   else
	   {
	   if(a[i]==1)
	   {
		   h++;
	   }
	   if(b[i]==1)
	   {
		   f++;
	   }
	   }   
	
	}
	 tc=(g*f)+(p*h);             			       
	 printf("%d\n",tc);
	}
	}
	return 0;
}
