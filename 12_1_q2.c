#include<stdio.h>

struct employees{

	int emp_id;
	char emp_name[10];
	int emp_age;
	char emp_role[100];
	char emp_city[50];
	int emp_experience[50];
	char emp_companyname[100];
		
};
	
int main(){
	
	int i,n;
	
	printf("Enter the number of employees:");
	scanf("%d",&n);
	
	struct employees emp[n];
	  
		printf("Enter %d Employee Details \n \n",n);
	 
	for(i=0;i<n;i++){
		printf("Employee %d:- \n",i+1);

		printf("Enter the name:");
		scanf("%s",emp[i].emp_name);	   		
		printf("Enter the id:");
		scanf("%d",&emp[i].emp_id);
    	printf("enter the position:");
		scanf("%s",emp[i].emp_role);	   	
		
		printf("Enter the cityname:");
		scanf("%s",emp[i].emp_city);	   	
		
		printf("Enter the companyname:");
		scanf("%s",emp[i].emp_companyname);	   	
		
		printf("Enter the expericence(years):");
		scanf("%d",&emp[i].emp_experience);	   	
		
		printf("Enter the age of employe:");
		scanf("%d",&emp[i].emp_age);	  
	}		 		   		
	
    printf(" Details of all employees\n");
    for(i=0; i<n; i++){
    	
    	printf("Name : ");
		printf("%s \n",emp[i].emp_name);
	
    	printf("Id : ");
    	printf("%d \n",emp[i].emp_id);
		       
    	printf("role : ");
    	printf("%s \n",emp[i].emp_role);
        
		printf("Experience : ");
    	printf("%d \n",emp[i].emp_experience);
	    
    	printf("CompanyName: ");
    	printf("%s \n",emp[i].emp_companyname);
	    
    	printf("age : ");
    	printf("%d \n",emp[i].emp_age);
        
    	printf("City : ");
    	printf("%s \n\n",emp[i].emp_city);
	
	}
 
}
