#include<stdio.h>
int main(){
    int T,i,N,s;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
    		scanf("%d",&N);
    		s=N%12;
    		switch(s){
    		 case 1:
    		  N=N+11;
    		  printf("%d WS\n",N);
    		 break;
    		 case 2:
    		  N=N+9;
    		  printf("%d MS\n",N);
    		 break;
    		 case 3:
    		  N=N+7;
    		  printf("%d AS\n",N);
    		 break;
    		 case 4:
    		  N=N+5;
    		  printf("%d AS\n",N);
    		 break;
    		 case 5:
    		  N=N+3;
    		  printf("%d MS\n",N);    		  
    		 break;
    		 case 6:
    		  N=N+1;
    		  printf("%d WS\n",N);
    		 break;
    		 case 7:
    		  N=N-1;
    		  printf("%d WS\n",N);
    		 break;
    		 case 8:
    		  N=N-3;
    		  printf("%d MS\n",N);
    		 break;
    		 case 9:
    		  N=N-5;    		
    		  printf("%d AS\n",N);  
    		 break;
    		 case 10:
    		  N=N-7;
    		  printf("%d AS\n",N);
    		 break;
    		 case 11:
    		  N=N-9;
    		  printf("%d MS\n",N);
    		 break;
    		 case 0:
    		  N=N-11;    		
    		  printf("%d WS\n",N);  
    		 break;
    		 case 12:
    		  N=N=11;
    		  printf("%d WS\n",N);
    		 break;
    		}
    }
    
    return 0;   
}
