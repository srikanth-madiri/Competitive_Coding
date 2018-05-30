#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	
	int n;
	int i,suvo=0,suvojit=0;
	char a[100];
	scanf("%d", &n);
	while(n--){
		
		suvo=0; suvojit=0;
		scanf("%s", a);
		
		for(i=0;i<=strlen(a)-4;i++)
			if(a[i] == 'S' && a[i+1] == 'U'&& a[i+2] == 'V' && a[i+3] == 'O')
				suvo++;
		
		for(i=0;i<=strlen(a)-7;i++)
			if(a[i] == 'S' && a[i+1] == 'U'&& a[i+2] == 'V' && a[i+3] == 'O' && a[i+4] == 'J' && a[i+5] == 'I' && a[i+6] == 'T')
				suvojit++;
		
		printf("SUVO = %d, SUVOJIT = %d\n", suvo-suvojit, suvojit);
	}



}

/*
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[150];
    int t,i,a,b,l;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%s\n",arr);
        a=0;
        b=0;
        l=strlen(arr);
        for(i=0;i<=l-4;i++)
        {
            if(arr[i]=='S' && arr[i+1]=='U'&&arr[i+2]=='V'&&arr[i+3]=='O')
                a++;
        }

        for(i=0;i<=l-7;i++)
        {
            if(arr[i]=='S' && arr[i+1]=='U'&&arr[i+2]=='V'&&arr[i+3]=='O'&&arr[i+4]=='J'&& arr[i+5]=='I'&&arr[i+6]=='T')
                b++;
        }
        printf("SUVO = %d, ",a-b);
        printf("SUVOJIT = %d\n",b);
    }
    return 0;
}*/
