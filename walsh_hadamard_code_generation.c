/*C PROGRAM*/
#include<stdio.h>/**************** written by Poushali Chakraborty @7:47pm 13 Aug 2019 *****************/
int main(){
	/*****This programme can be used to generate Walsh Code
		We need to the value of the 1st hadamard matrix and 
		also the index of that hadamard matrix which we want to generate as input
		then it will calculate the hadamard martices along with the signature sequences****/


/**********************************INITIALIZATION*****************************************/
int h1 ,h2[100][100], h4[100][100];
int i,j, k,l,m,n,x,y,max;


/************************************************INPUTS****************************************************/
printf("ENTER VALUE FOR H1 (0 or 1)\n");
scanf("%d",&h1);
printf("ENTER VALUE FOR N UPTO WHICH YOU WANT THE HADAMARD MATRIX: \n");
scanf("%d", &max);


/***********************************************************1ST MATRIX GENERATION***********************************************************************/
printf("H%d Matrix ::\n",2);


for(i=0;i<2;i++){
for(j=0;j<2;j++){

if(i==2-1&&j==2-1)// bottom last quardant
h2[i][j]=!(h1);
else
h2[i][j]=h1;

printf("%d\t", h2[i][j]);


}
printf("\n");
}
printf("\nSIGNATURE SEQUENCE::\n");

for(i=0;i<2;i++)
{
printf("s%d\t=\t(\t",i+1);
for(j=0;j<2;j++)
{
h2[i][j]? printf("+%d\t",1):printf("%d\t",-1);//calculate signature sequence

}
printf(")\n");
}



n=2;

while(n<=max/2)
{

for(i=0; i<=n; i=i+n)//Outer loop to identify upper and bottom part of the matrix
{
for(j=i, x=0;j<2*n && x<n; j++,x++)
{
for(k=0,y=0; k<n && y<n; k++,y++) //left quardant 
{
h4[j][k]=h2[x][y];
}
for(k=n,y=0;k<2*n && y<n; k++,y++)//right quardant 
{
if (j>=n)//bottom last quardant
h4[j][k]=!(h2[x][y]);
else
h4[j][k]=h2[x][y];
}

}


}
printf("H%d Matrix ::\n",2*n);

for(i=0;i<2*n;i++){
for(j=0;j<2*n;j++){
printf("%d\t", h4[i][j]);
h2[i][j]=h4[i][j];// copy matrix h4 to h2

}
printf("\n");
}
printf("\nSIGNATURE SEQUENCE::\n");

for(i=0;i<2*n;i++)
{
printf("s%d\t=\t(\t",i+1);
for(j=0;j<2*n;j++)
{
h2[i][j]? printf("+%d\t",1):printf("%d\t",-1);// calculate signature sequence

}
printf(")\n");
}


n*=2;

//end

}
return 0;

}
