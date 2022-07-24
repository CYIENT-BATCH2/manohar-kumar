#include <stdio.h>
int main()
{
 char *a[]={"india","andhrapradesh","eastgodavari","ravulapalem"," ","vdstreet"};
 int size=sizeof a/sizeof(a[0]);
 int pos=0;
 printf("%d\n",size);
 int i;

 for(i=0;i<6;i++){

 if(a[i]==" ")
 {
a[i]="CYIENT\n";
pos=i;
 printf("%s",*(a+i));
 }
 }
printf("pos=%d\n",pos);

}
