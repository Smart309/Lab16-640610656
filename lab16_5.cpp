#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d)
{
	int CDT = rand()%4 +1;
	int x1 ,x2 ,x3 ,x4;
	x1 = *a;
	x2 = *b;
	x3 = *c;
	x4 = *d;
	if (CDT == 2)
	{
		*a = x4;
		*b = x3;
		*c = x2;
		*d = x1;
	}
	if (CDT == 3)
	{
		*a = x3;
		*b = x4;
		*c = x1;
		*d = x2;
	}
	if (CDT == 4)
	{
		*a = x2;
		*b = x1;
		*c = x4;
		*d = x3;
	}
	if (CDT == 1)
	{
		*a = x1;
		*b = x2;
		*c = x3;
		*d = x4;
	}
} 
