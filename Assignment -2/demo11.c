#include<stdio.h>
   int main()
   {
   int x,y;
   printf("the coordinates inputs of (x y) are:\n");
   scanf("%d",&x);
   scanf("%d",&y);
   if(x>0 && y>0)
   printf("the coordinate (%d%d) lies in first quadrant",x,y);
   else if (x<0 && y>0)
   {
  printf("the coordinate (%d%d) lies in second quadrant",x,y);
  }
  else if(x<0 && y<0)
  {
  printf("the coordinate (%d%d) lies in third quadrant",x,y);
  }
  else if(x>0 && y<0)
  {
  printf("the coordinate (%d%d) lies in forth quadrant",x,y);
  }
  else
  {
  printf("the quadrant is invalid");
  }
 return 0;
}






