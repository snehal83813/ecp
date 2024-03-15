/*#include<stdio.h>
int main()
int x,y;
printf("the coordinates inputs of (x y) are:\n");
scanf("%d%d",&x,&y);
if(x>0 && y>0)
printf("the coordinate (%d%d) lies in first quadrant",x,y);
else if (x<0 && y<0)
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
}*/








#include <stdio.h>
int main()
{
  int x,y;
    printf("Input the coordinate(x,y): \n");
    scanf("%d",&x);
    scanf("%d",&y);
    if (x>0 && y>0)
    printf("The coordinate point (%d,%d) lies in First Quadrant ",x,y);
    else if (x<0 && y>0)
     printf("The coordinate point (%d,%d) lies in secound Quadrant ",x,y);
     else if (x<0 && y<0)
      printf("The coordinate point (%d,%d) lies in Third Quadrant ",x,y);
      else if (x>0 && y<0)
       printf("The coordinate point (%d,%d) lies in Forth Quadrant ",x,y);
       return 0;
	   }       
