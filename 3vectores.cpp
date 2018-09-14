//Itzel Gonzalez//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void llenavec(int[],int,int,int);
void imprivect(int[],int);
void llenarvect3(int[],int[],int[],int,int);

int main()
 {
  int vec[10],vect2[20],vect3[30];
  srand(time(NULL));
  //Vector 1//
  printf("Vector 1\n");
  llenavec(vec,10,10,50);
  imprivect(vec,10);
  //Vector 2//
  printf("Vector 2\n");
  llenavec(vect2,20,20,40);
  imprivect(vect2,20);
  //Vector3//
  printf("Vector 3\n");
  llenarvect3(vec,vect2,vect3,10,20);
  imprivect(vect3,30);
 }
 void llenavec(int v[], int n,int ri,int rf)
 {
 	int i;
 	for (i=0;i<n;i++)
	 {
	  v[i]=(rand()%(rf-ri))+ri;
	 }
 }
 void imprivect(int v[],int n)
 {
 	int i;
 	for (i=0;i<n;i++)
 	{
 		printf("%d\n",v[i]);
 	}
 }
 void llenarvect3(int v1[],int v2[],int v3[],int n,int n2)
 {
 	int i,k;
 	for (i=0;i<n;i++)
 	{
 		v3[i]=v1[i];
 	}
 	for (k=0;k<n2;k++)
 	{
 		v3[i]=v2[k];
 		i++;
 	}
 }


