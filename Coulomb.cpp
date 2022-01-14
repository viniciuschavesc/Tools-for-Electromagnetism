#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define k 9e9

int main()
{	
	int i;
	float r0[2], rp[2], r[2], distance;
	float modF, F[2], q1, q2;
	
	for(i=0; i< 3; i++)
	{
		printf("\nEnter the %dª coordinate of the vector r0 [m]: ", i+1);
		scanf("%f", &r0[i]);
	}

	for(i=0; i< 3; i++)	
	{
		printf("\nEnter the %dª coordinate of the vector rp [m]: ", i+1);
		scanf("%f", &rp[i]);
	}

	for(i=0; i< 3; i++)	
	{
		r[i]=rp[i]-r0[i];
	}	
	
	distance = sqrt(pow(r[0],2)+pow(r[1],2)+pow(r[2],2));

	printf("\nEnter the value of q1[Coulomb]: ");
	scanf("%f",&q1);
	printf("\nEnter the value of q2[Coulomb]> ");
	scanf("%f",&q2);
	
	modF=k*q1*q2/(pow(distance,2));
	
	for(i=0;i<2;i++)
	{
		F[i]=k*q1*q2*r[i]/(pow(distance,3));
	}
	
	printf("\nThe electrostatic force vector is %f N\n", modF);
	printf(" F = (%f,%f,%f) N", F[0], F[1], F[2]);
	
	return 0;
}
