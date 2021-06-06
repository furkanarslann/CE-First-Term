// Hospital Management System 
// This program involves; registration system, COVID-19 Risk tests, arranging online appointments and more... 
// Name Surname: FURKAN ARSLAN 

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>

int covidTest();
void rez(); 

int main() {
	system("color 5F");
	char tc[15],tc2[15]; 
	int regMenu,mainMenu,pref,doc,dd,mm,yy,time;
	char name[50],surname[50],pw[50],pw2[50];
	bool reg,log,docScreen,prefMenu,mainM;
	printf("\n\t\t*************|ARSLAN HOSPITAL|*************");
	printf("\n\nWelcome to our hospital management system.\n");
	printf("\nTo perform any action, registration is required. So, if you're a new user please sign up first."); 
	printf("\nPlease type 1 and enter for registration. ");
	printf("\n------------------------------\n");
	
	do	{
	printf("\n[1]- Sign up\n[2]- Log in "); 
	scanf("%d",&regMenu);

	switch(regMenu){
		
		
		case 1:printf("\nName:");scanf("%s",name);
			   printf("Surname:");scanf("%s",surname); 
			   printf("T.C. Identification Number:");scanf("%s",tc);
			   printf("Password:");scanf("%s",pw);
			   printf("\n**Registration process is successfully completed!\n");
			   printf("\n Now, you can log in to system after entering 2.");
			   break;
			   
			   
		case 2:	do{
			
				printf("\nT.C. Identification Number:");scanf("%s",tc2);
				printf("Password:");scanf("%s",pw2);
				if(strcmp(tc,tc2)==0) {
					if(strcmp(pw,pw2)==0) {
						printf("\n**You have successfully logged in! \n\n\t >> Welcome to ARSLAN Hospital, %s %s !",name,surname);
						log=true; 	
					}
					else {
						printf("\n*****Wrong identification number or password please try again!*****\n"); 

					}
				}

				else 
				{
					printf("\n*****Wrong identification number or password please try again!*****\n");
				}
			}while(log==false);
				reg=true;
				break;
				
		default:printf("\n**** WRONG SELECTION OF NUMBER PLEASE TRY AGAIN ****\n");break; 
	}	
}
while(reg==false);


while( mainM == false )
{

printf("\n You can select your action from the list below by entering the specific number for each action.");
printf("\n[1]- Make an appointment\n[2]- Contact Us \n"); 
scanf("%d",&mainMenu);

if(mainMenu==1) {
	
	mainM=true;
	printf("-------------------------\n\n");

	printf("\tDear, %s %s due to COVID-19 pandemic we took strict health precautions in our hospital.\n\tSo, we kindly ask you to take our COVID-19 RISK TEST before making appointments.",name,surname); 
	printf("\n\n>> For starting the test please press any key.");
	getch();

	int testResult = covidTest(); 
	
	if(testResult < 6) 
		printf("\n\n \tYour risk point is:%d \n Congratulations! You're in a low risk group. You can continue with your process now.\n",testResult);
	else 
	{
		printf("\n\n \tYour risk point is:%d \n We are sorry! You're in a high risk group. So you cannot make any reservations for 2 weeks.\n Stay healthy and safe! \n\n\t\t\t |ARSLAN HOSPITAL|",testResult);
			exit(0);
	}
	
	printf("\n------------------------------------\n");
		
	do	
	{
	
	printf("\nPlease select which medical unit you're going to see:\n\n");

	
	printf(" [1]- Dermatology (Skin and Venereal Diseases)\n [2]- Ear, Nose and Throat Disorders\n [3]- Cardiology \n [4]- Internal Medicine \n [5]- Oral and Dental Diseases\n");
	scanf("%d",&pref);
	printf("----------------------------------------\n");
	
	 switch(pref) 
	 {
	 	case 1:     printf("\n * Our doctors in this unit are listed below. Please choose your doctor to see available reservations for your doctor. \n");
	 				while(docScreen==0) 
					 {	
					 	prefMenu=true; 
	 					printf("\n [1]-Prof. Dr. Alpay EFE \n [2]-Prof. Dr. Hazal EKIN \n");
	 					scanf("%d",&doc);
	 					
					if(doc==1) 
						 {
							rez(); 
							printf("\n--------------\n");
							printf(">>Please choose your appointment hour among the given hours: \n");
							printf(" \t _______ \n [1]-\t| 08.30 |\n"); 
							printf(" \t _______ \n [2]-\t| 10.30 |\n"); 
							scanf(" %d", &time);
							printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
						    docScreen=1;
						 }
						 	else if(doc==2) 
							 {
						 		rez();
						 		printf("\n--------------\n");
								printf(">>Please choose your appointment hour among the given hours: \n");
								printf(" \t _______ \n [1]-\t| 13.30 |\n"); 
								printf(" \t _______ \n [2]-\t| 16.00 |\n"); 
								scanf(" %d", &time); 
								printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
								docScreen=1;
							 }
						 		else
								{
						 			printf("\n INVALID SELECTION -- PLEASE TRY AGAIN WITH VALID NUMBERS.\n");
								}			
					 }	 
	 			break;
	 			
	 	case 2:		printf("\n * Our doctors in this unit are listed below. Please choose your doctor to see available reservations for your doctor. \n");
	 				while(docScreen==0) 
					 {	
					 	prefMenu=true; 
	 					printf("\n [1]-Prof. Dr. Erdem DOLAP\n [2]-Prof. Dr. Nurdan OZSARAC \n");
	 					scanf("%d",&doc);
	 					
					if(doc==1) 
						 {
							rez(); 
							printf("\n--------------\n");
							printf(">>Please choose your appointment hour among the given hours: \n");
							printf(" \t _______ \n [1]-\t| 11.30 |\n"); 
							printf(" \t _______ \n [2]-\t| 12.20 |\n"); 
							scanf(" %d", &time); 
							printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
						    docScreen=1;
						 }
						 	else if(doc==2) 
							 {
						 		rez();
						 		printf("\n--------------\n");
								printf(">>Please choose your appointment hour among the given hours: \n");
								printf(" \t _______ \n [1]-\t| 06.30 |\n"); 
								printf(" \t _______ \n [2]-\t| 15.00 |\n"); 
								scanf(" %d", &time); 
								printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
								docScreen=1;
							 }
						 		else
								{
						 			printf("\n INVALID SELECTION -- PLEASE TRY AGAIN WITH VALID NUMBERS.\n");
								}			
					 }	 
	 			break;
	 			
	 	case 3:     printf("\n * Our doctors in this unit are listed below. Please choose your doctor to see available reservations for your doctor. \n");
	 				while(docScreen==0) 
					 {	
					 	prefMenu=true; 
	 					printf("\n [1]-Prof. Dr. Ceren OZCAN\n [2]-Prof. Dr. Furkan ARSLAN \n");
	 					scanf("%d",&doc);
	 					
					if(doc==1) 
						 {
							rez(); 
							printf("\n--------------\n");
							printf(">>Please choose your appointment hour among the given hours: \n");
							printf(" \t _______ \n [1]-\t| 14.15 |\n"); 
							printf(" \t _______ \n [2]-\t| 17.10 |\n"); 
							scanf(" %d", &time); 
							printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
						    docScreen=1;
						 }
						 	else if(doc==2) 
							 {
						 		rez();
						 		printf("\n--------------\n");
								printf(">>Please choose your appointment hour among the given hours: \n");
								printf(" \t _______ \n [1]-\t| 10.30 |\n"); 
								printf(" \t _______ \n [2]-\t| 15.00 |\n"); 
								scanf(" %d", &time); 
								printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
								docScreen=1;
							 }
						 		else
								{
						 			printf("\n INVALID SELECTION -- PLEASE TRY AGAIN WITH VALID NUMBERS.\n");
								}			
					 }	 
	 			break;
	 			
	 	case 4:     printf("\n * Our doctors in this unit are listed below. Please choose your doctor to see available reservations for your doctor. \n");
	 				while(docScreen==0) 
					 {	
					 	prefMenu=true; 
	 					printf("\n [1]-Prof. Dr. Firdes GULCAN\n [2]-Prof. Dr. Veysel OZUAK \n");
	 					scanf("%d",&doc);
	 					
					if(doc==1) 
						 {
							rez(); 
							printf("\n--------------\n");
							printf(">>Please choose your appointment hour among the given hours: \n");
							printf(" \t _______ \n [1]-\t| 07.15 |\n"); 
							printf(" \t _______ \n [2]-\t| 09.00 |\n"); 
							scanf(" %d", &time); 
							printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
						    docScreen=1;
						 }
						 	else if(doc==2) 
							 {
						 		rez();
						 		printf("\n--------------\n");
								printf(">>Please choose your appointment hour among the given hours: \n");
								printf(" \t _______ \n [1]-\t| 13.30 |\n"); 
								printf(" \t _______ \n [2]-\t| 16.00 |\n"); 
								scanf(" %d", &time); 
								printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
								docScreen=1;
							 }
						 		else
								{
						 			printf("\n INVALID SELECTION -- PLEASE TRY AGAIN WITH VALID NUMBERS.\n");
								}			
					 }	 
	 			break;
	 			
	 	case 5:     printf("\n * Our doctors in this unit are listed below. Please choose your doctor to see available reservations for your doctor. \n");
	 				while(docScreen==0) 
					 {	
					 	prefMenu=true; 
	 					printf("\n [1]-Prof. Dr. Faruk TURAN\n [2]-Prof. Dr. Ilkay TAZE \n");
	 					scanf("%d",&doc);
	 					
					if(doc==1) 
						 {
							rez(); 
							printf("\n--------------\n");
							printf(">>Please choose your appointment hour among the given hours: \n");
							printf(" \t _______ \n [1]-\t| 12.30 |\n"); 
							printf(" \t _______ \n [2]-\t| 16.05 |\n"); 
							scanf(" %d", &time); 
							printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
						    docScreen=1;
						 }
						 	else if(doc==2) 
							 {
						 		rez();
						 		printf("\n--------------\n");
								printf(">>Please choose your appointment hour among the given hours: \n");
								printf(" \t _______ \n [1]-\t| 13.15 |\n"); 
								printf(" \t _______ \n [2]-\t| 16.00 |\n"); 
								scanf(" %d", &time); 
								printf("\n\n** Your appointment is succesfully set! Have a nice and healthy day. \n\n \t\t\t |ARSLAN HOSPITAL|\n\n");
								docScreen=1;
							 }
						 		else
								{
						 			printf("\n INVALID SELECTION -- PLEASE TRY AGAIN WITH VALID NUMBERS.\n");
								}			
					 }	 
	 			break;
	 			
	 	
	 			
	 	default:	printf("\n\n <<Sorry! You entered wrong number please choose valid number.>> \n\n");
	 				printf("--------------------------------------\n\n");
		 		break;	
	 		
	 }
	 
 }while(prefMenu == false );
}

else if( mainMenu==2) 
{
	printf("\n >> Email : info.hospital@arslan.edu.tr");
	printf("\n >> Call us : 444 1 428 \n"); 

	printf("\n\n To go back to upper menu please press any key.\n");
	printf("\n---------------------------------\n"); 
	getch();
}


else 
{	
	printf(" \n\n <<Sorry! You entered wrong number please choose a valid number.>> \n\n ");
	printf("--------------------------------------\n\n");
}
 
}

	return 0;
}

int covidTest()
{   
	int risk=0;
	char a; 
	
	printf("\n\n << Answer the questions by entering Y/N >>");
	
	printf("\nQ1: Are you older than 65 ? \n");
	scanf(" %c",&a); 	
	if(a=='y' || a=='Y') risk++;
		
	printf("\nQ2: Are you pregnant ? \n");
	scanf(" %c",&a);	
	if(a=='y' || a=='Y') risk++;
	
	printf("\nQ3: Have you ever contracted with COVID-19 ? \n");
	scanf(" %c",&a);	
	if(a=='y' || a=='Y') risk++;
	
	printf("\nQ4: Have you ever had surgery ? \n");
	scanf(" %c",&a); 	
	if(a=='y' || a=='Y') risk++;
		
	printf("\nQ5: Do you have any diabetic diseases ? \n");
	scanf(" %c",&a);	
	if(a=='y' || a=='Y') risk++;
	
	printf("\nQ6: Do you have any heart diseases ? \n");
	scanf(" %c",&a);	
	if(a=='y' || a=='Y') risk++;
	
	printf("\nQ7: Do you usually smoke or use alcohol ? \n");
	scanf(" %c",&a); 	
	if(a=='y' || a=='Y') risk++;
		
	printf("\nQ8: Are you an asthma or shortness of breath patient ? \n");
	scanf(" %c",&a);	
	if(a=='y' || a=='Y') risk++;
	
	printf("\nQ9: Is there a lack of sense of your smell and taste ? \n");
	scanf(" %c",&a);	
	if(a=='y' || a=='Y') risk++;
	
	printf("\nQ10: Do you have muscle or body aches? \n");
	scanf(" %c",&a);	
	if(a=='y' || a=='Y') risk++;
	
	return risk; 
}

void rez() 
{	
	int dd,mm,yy;
	bool check;
	
	while(!check) 
	{	
		printf("\n Please enter your desired appointment date as dd/mm/yy  e.g 17/01/2021 \n");
		scanf("%d/%d/%d",&dd,&mm,&yy); 
	
			if(dd>31 || mm>12 || yy<2021)
			{
				printf("\n << INVALID DATE, PLEASE TRY AGAIN ! >>\n");
			}
				else 
				{	
					check=1;
					printf("\n --> Available appointments in %d/%d/%d are listed below. \n",dd,mm,yy);
				}
	
	}
}
