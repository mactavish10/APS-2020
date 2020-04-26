#include<stdio.h>
#include<math.h>
double area(double a,double b,double c)
{
  double s = (a+b+c)/2;
  return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
  int t;
  scanf("%d",&t);
  double wx,wy,wz,xy,xz,yz,surfaceArea,wx1,wy1,wz1,xy1,xz1,yz1,tmp1,tmp2,tmp3,volume;
  while(t--)
    {
      scanf("%lf %lf %lf %lf %lf %lf",&wx,&wy,&wz,&xy,&xz,&yz);
      surfaceArea=0;
      surfaceArea+=area(wx,wy,xy);
      surfaceArea+=area(wy,wz,yz);
      surfaceArea+=area(xy,xz,yz);
      surfaceArea+=area(wx,wz,xz);
      wx1=wx*wx;
      wy1=wy*wy;
      wz1=wz*wz;
      xy1=xy*xy;
      xz1=xz*xz;
      yz1=yz*yz;
      tmp1=wz1+xz1-wx1;
      tmp2=wz1+yz1-wy1;
      tmp3=yz1+xz1-xy1;
      volume=sqrt(4*(yz1*wz1*xz1)-(yz1*tmp1*tmp1)-(xz1*tmp2*tmp2)-(wz1*tmp3*tmp3)+(tmp1*tmp2*tmp3))/12;
      printf("%.4lf\n",((3*volume)/surfaceArea));
    }
  return 0;
}