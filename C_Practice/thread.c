
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <pthread.h> 
  
// Let us create a global variable to change it in threads 
int g = 0; 
  
// The function to be executed by all threads 
void myThreadFun(void ) 
{
while(1)
{ 
	if(g%2==0)
{
	printf("1  %d\n",g);
	g++;
}
if(g>10)
break;
}
} 
void myThreadFun1(void) 
{
while(1)
{ 
	if(g%2!=0)
{
	printf("2  %d\n",g);
	g++;
}
if(g>10)
break;
}
} 
  
int main() 
{ 
    int i; 
    pthread_t tid,tid1; 
  
    // Let us create three threads 
    //for (i = 0; i < 3; i++) 
        pthread_create(&tid, NULL, myThreadFun,NULL); 
        pthread_create(&tid1, NULL, myThreadFun1,NULL); 
  
    pthread_exit(NULL); 
    return 0; 
} 

