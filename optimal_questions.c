#include<stdio.h>
#include<stdlib.h>
// This code guesses a number between 1 and 20 using an optimal number of binary questions 
int mid_point(int a, int b){
	// This function computes the mid point of the interval [a, b]
	int c = (a+b)/2 - (a+b)%2;
	return c;
}
int guess (int a, int b){
	// This function asks the optimal binry questions to guess a random number in an interval [a, b]
	int ans;
	int c;
	while(b-a !=1){
		c = mid_point(a, b);
		printf("is your number higher than %d ?\n ", c);
		scanf("%d", &ans);
		if(c < a){
			printf("Your number is %d\n", b);
			break;
		}if(c > b){
			printf("Your number is %d\n", a);
			break;
		}else{
			if(ans){
			a = c;
		}else{
			b = c; 
			}
			}
			}
	printf("Your number is: %d \n", c);
}


int main(void){
	int a = 0;
	int b = 20;
	guess(a, b);
}
