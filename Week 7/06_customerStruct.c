#include <stdio.h>
#include <string.h>
struct Customer{
	int accNumber;
	char name[50];
	int balance;
}bank[10];

int transaction(int req_type, int accNum, int amount){
	if(req_type==1){
		int i;
		for(i=0;i<5;i++){
			if(bank[i].accNumber == accNum) break; 
		}
		if(amount>bank[i].balance) return -1;
		else {bank[i].balance-=amount; return i;}
	}
	else{
		
	}
}
int main(){
	int i=0;
	for(i=0;i<5;i++){
		printf("Enter account number for %d: ",i+1);
		scanf("%d", &bank[i].accNumber);
		fflush(stdin);
		printf("Enter name for %d: ", i+1);
		fgets(bank[i].name,50,stdin);
		printf("Enter balance for %d: ", i+1);
		scanf("%d", &bank[i].balance);
	}
	while(1){
		int req;
		printf(" Enter Deposit(0)\nWithdrawal(1)\nExit(2)\n");
		scanf("%d", &req);
		if(req==2) return 0;
		else if(req==1) {
			printf("Enter account number for withdrawal: ");
			int accNum; scanf("%d", &accNum);
			printf("Enter amount to withdraw: ");
			int amount; scanf("%d", &amount);
			int withdrawal = transaction(1,accNum, amount);
			if(withdrawal==-1) printf("Invalid");
			else printf("Successful. Balance amount %d", bank[withdrawal].balance); 
		}
	}
}
