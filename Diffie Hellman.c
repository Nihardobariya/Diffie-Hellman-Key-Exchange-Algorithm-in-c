#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	
	double q, n, pri_a, pri_b, xa, xb, ya, yb;
	
	printf("---- Diffie hellman ----\n");	
	printf("Enter the value of q : ");
	scanf("%lf",&q);	
	printf("Enter the value of n : ");
	scanf("%lf",&n);
	pri_a = fmod(rand(),20)+1;
	pri_b = fmod(rand(),20)+1;
	
	xa = fmod(pow(n,pri_a),q);
	xb = fmod(pow(n,pri_b),q);
	
	ya = fmod(pow(xb,pri_a),q);
	yb = fmod(pow(xa,pri_b),q);
	
	printf("\nThe value of xa -> %d",(int)xa);
	printf("\nThe value of xb -> %d",(int)xb);
	printf("\nThe value of ya -> %d",(int)ya);
	printf("\nThe value of yb -> %d",(int)yb);
	printf("\n\nKey => %d",(int)ya);
	
	return 0;
}
