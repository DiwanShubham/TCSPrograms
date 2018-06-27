#include<stdio.h>

void fun()
{
	int a=10;
	static int b=10;

	a=a+1;
	b=b+1;
	printf("\nNormal Integer%d\n",a);
	printf("Static Integer%d\n",b);
}

void function1()
{  
    int x=10;//local variable  
    static int y=10;//static variable  
    x=x+1;  
    y=y+1;  
    printf("%d,%d",x,y);  
}
  
int main()
{
	fun();
	function1();

	fun();
	function1();

// When in same program same function calls multiple times which includes static variables then its values increments by 1.
}

/* OUTPUT :-
	
	Normal Integer11
	Static Integer11
	11,11
	Normal Integer11
	Static Integer12

*/
