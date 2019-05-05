#include <stdio.h>
int cur=1;
int stackcur=-1;
int result[100010]={0}, repos=0;

void push(int* stack){
    stackcur+=1;
	stack[stackcur]=cur;
	cur+=1;
	result[repos]=1;
	repos+=1;
	}
	
void pop(int* stack){
	stack[stackcur]=0;
	stackcur-=1;
	result[repos]=2;
	repos+=1;
	}

int main(){
	int stacksize;
	scanf("%d", &stacksize);
	int stacklist[100010];
	int wantlist[100010],wanun=0;
	for(int i=0; i<stacksize; i++){
		scanf("%d", wantlist+i);
		}//스택셋팅
		
	while(stacksize!=wanun){
		if(wantlist[wanun]>stacklist[stackcur]){
			push(stacklist);
			}
		else if(wantlist[wanun]<stacklist[stackcur]){
			printf("No");
			result[0]=0;
			break;
			}
		else{
			pop(stacklist);
			wanun+=1;
			}
		}
		
		if(result[0]!=0){
			int i=0;
			while(result[i]!=0){
			    if(result[i]==1){
			    	printf("+\n");
			    	}
			    if(result[i]==2){
			    	printf("-\n");
			    	}
			    	i++;
				}
			}
	
	}
	