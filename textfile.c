#include<stdio.h>
#define size 50

//Write a computer program that receives your first name, last name, and date of birth and stores them in text file and reads the text file to display the information on console.  
 
int main(){
 	
 	FILE *f=fopen("person.txt","w");
 	
 	/*if ((f=fopen("person.txt", "w+")) == NULL) {
      printf("The file could not be opened!\n");
      exit(1);
   }*/

 	char c[500];
 	char date[size];
 	char f_n[size];
 	char l_n[size];
 	
 	
 	printf("Enter your first name:");
 	scanf("%s",f_n);
 	printf("Enter your last name:");
 	scanf("%s",l_n);
 	printf("Enter your date of birth:");
 	scanf("%s",date);
 	
 	
 	fprintf(f,"%s%s\n%s%s\n%s%s","First name:",f_n,"Last name:",l_n,"Day of birth:",date);
 	f=fopen("person.txt","r");
    fscanf(f, "%s",f_n);
    printf("First name:%s\n",f_n);
    fscanf(f, "%s",l_n);
    printf("Last name:%s\n",l_n);
    fscanf(f, "%s",l_n);
    printf("Day:%s\n",date);
 	fclose(f);
 	
 	return 0;
 }
