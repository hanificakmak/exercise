#include<stdio.h>
int main(){

char message[10];
int counter=0;

scanf("%s",message);

for(int i=0; i<10; i++)
{
	if(message[i]=='a')
	counter++;
	
}

printf("%d",counter);


return 0;
}

