#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <iomanip> 

int main ()

{	
	setlocale(LC_ALL,"english");
	int nralunos;
	printf("How many students do you want to grade? Maximum of 5!\n");
	scanf("%d",&nralunos);
	system("clear");
	
	
	float p1[nralunos];
	float p2[nralunos];
	float trab1[nralunos];
	float trab2[nralunos];
	float media[nralunos];
	float mediageral;
	float pi[nralunos];
	char nome[nralunos][10];
	int i;
	int opcao;
	
	
	
	
	do
	{
		
		printf("=================\n");
		printf("	Options Menu	 \n");
		printf("=================\n");
		printf("1- Enter Student \n");
		printf("2- Enter Grades \n");
		printf("3- Class overall grade \n");
		printf("4- Search student GPA \n");
		printf("5- Search whole class GPA  \n");
		printf("6- Exit \n");
		printf(" Choose an option\n");
		scanf("%d",&opcao);
		system("clear");
		
		if (opcao==1)
		{
			system("clear");
			for (i=1; i<=nralunos;i++)
			{
				printf("================================================================\n");
				printf("                        Enter Student             \n");
				printf("================================================================\n");
				printf("Enter sutdent name %d \n",i);
				scanf("%s",nome[i]);
				system("pause");
				system("clear");
			}
		}
			else
			{
				if(opcao==2)
				{
					system("clear");
					for (i=1; i<=nralunos;i++)
					{
					printf("===================\n");
					printf("     Enter Grade	   \n");
					printf("===================\n");
					printf (" enter 1st grade %s \n",nome[i]);
					scanf ("%f", &p1[i]);
					printf("enter 2nd grade %s \n",nome[i]);
					scanf("%f", &p2[i]);
					printf (" enter 1st project %s \n",nome[i]);
					scanf ("%f", &trab1[i]);
					printf("enter 2nd project %s \n",nome[i]);
					scanf("%f", &trab2[i]);
					printf("enter pi from %s \n",nome[i]);
					scanf("%f", &pi[i]);
					system("clear");
					media[i]= ((p1[i] * 0.15) + (p2[i] * 0.15) + (trab1[i] * 0.10) + (trab2[i] * 0.10) + (pi[i] * 0.5));
					printf("%.2f", media[i]);
					}
				}
			
				else
				{
					if(opcao==3)
					{
						system("clear");
						printf("===================\n");
						printf("     The overall GPA of the students is:	   \n");
						printf("===================\n");
						for	(i=1; i<=nralunos;i++)
								{
									mediageral += media[i]; 
								}
						mediageral = mediageral / nralunos;	

						printf("%.2f\n\n", mediageral);
					}
				
						else
						{
							if(opcao==4)
							{
								system("clear");
								for	(i=1; i<=nralunos;i++)
								{
									printf("===================\n");
									printf("     GPA from a student	   \n");
									printf("===================\n");
								}
							}
								else
								{
									if(opcao==5)
									{
										system("clear");
										for	(i=1; i<=nralunos;i++)
										{
											printf("===================\n");
											printf("     GPA from all students	   \n");
											printf("===================\n");	
										}
									}
								}
						}
				}
			}
	}
	while(opcao !=6);
}

