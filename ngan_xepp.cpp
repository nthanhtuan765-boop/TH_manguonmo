#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX_SIZE 100
typedef struct
{
	int data[MAX_SIZE];
	int top;

}Stack;
void MAKENULL_STACK(Stack *S);
int EMPTY_STACK(Stack *S);
void PUSH(int x, Stack *S);
void PRINT_STACK(Stack *S);
int TOP(Stack *S);
void POP(Stack *S);
int main()
{
	printf("Ngan xep cai dat bang mang \n");
	
	Stack S;
	MAKENULL_STACK(&S);
	
	PUSH(1, &S);
	PUSH(2, &S);
	PUSH(5, &S);
	PUSH(4, &S);
	PUSH(5, &S);
	
	PRINT_STACK(&S);
	printf("TOP: %d\n",TOP(&S));
	POP(&S);
	printf("TOP: %d\n", TOP(&S));
	PRINT_STACK(&S);


	return 0;
}
void MAKENULL_STACK(Stack *S)
{
	S->top=-1;
}
int EMPTY_STACK(Stack *S)
{
	return(S->top==-1);
}
void PUSH(int x, Stack *S)
{
	if(S->top == MAX_SIZE-1)
	{
		printf(" ngan xep da day, khong them phan tu. \n");
		return ;
	}
	S->top++;
	S->data[S->top]=x;
}
void PRINT_STACK(Stack *S)
{
	if(EMPTY_STACK(S))
	{
		printf("ngan xp rong.\n");
		return;
	}
	printf("cac phan tu trong ngan xep.\n");
	for(int i=S->top; i>=0; i--)
	{
		printf(" %d\n", S->data[i]);
	}
}
