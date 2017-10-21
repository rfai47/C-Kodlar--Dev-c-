#include<stdio.h>
#include<stdlib.h>

int main()
{
	//matrisisin Köklerini Hesaplayan Program
	/*
		matrisler aşağıdaki gibi yazılacak
		
		a   b	c	d
		e	f	g	H
		j	K	L	M
		
		a*x+b*y+c*z=d
		e*x+f*y+g*z=H
		j*x+K*y+L*z=M
		Program sonunda x y z değerlerini bulacağız 	
	*/
	
	float matris[3][4];
	float determinant=0,determinant1=0,determinantx,determinant2=0,determinanty,determinant3,determinantz;
	float x,y,z;
	printf("Matris satir ve sutunlari giriniz:");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%f",&matris[i][j]);
		}
	}
	system("CLS");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%.2f\t\t\t",matris[i][j]);
		}
		printf("\n");
	}
	determinant=(matris[0][0]*matris[1][1]*matris[2][2])+(matris[1][0]*matris[2][1]*matris[0][2])+(matris[2][0]*matris[0][1]*matris[1][2])-((matris[0][2]*matris[1][1]*matris[2][0])+(matris[1][2]*matris[2][1]*matris[0][0])+(matris[2][2]*matris[0][1]*matris[1][0]));	
	printf("Determinant = %.2f\n\n",determinant);
	
	
	determinant1=(matris[0][3]*matris[1][1]*matris[2][2])+(matris[1][3]*matris[2][1]*matris[0][2])+(matris[2][3]*matris[0][1]*matris[1][2])-((matris[0][2]*matris[1][1]*matris[2][3])+(matris[1][2]*matris[2][1]*matris[0][3])+(matris[2][2]*matris[0][1]*matris[1][3]));
	determinantx=determinant1/determinant;
	printf("DeterminantX=%.2f\n",determinantx);
	determinant2=(matris[0][0]*matris[1][3]*matris[2][2])+(matris[1][0]*matris[2][3]*matris[0][2])+(matris[2][0]*matris[0][3]*matris[1][2])-((matris[0][2]*matris[1][3]*matris[2][0])+(matris[1][2]*matris[2][3]*matris[0][0])+(matris[2][2]*matris[0][3]*matris[1][0]));	
	determinanty=determinant2/determinant;
	printf("DeterminantY=%.2f\n",determinanty);
	determinant3=(matris[0][0]*matris[1][1]*matris[2][3])+(matris[1][0]*matris[2][1]*matris[0][3])+(matris[2][0]*matris[0][1]*matris[1][3])-((matris[0][3]*matris[1][1]*matris[2][0])+(matris[1][3]*matris[2][1]*matris[0][0])+(matris[2][3]*matris[0][1]*matris[1][0]));
	determinantz=determinant3/determinant;
	printf("DeterminantZ=%.2f",determinantz);
}
	
