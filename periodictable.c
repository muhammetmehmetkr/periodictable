#include <stdio.h>

// MUHAMMET MEHMET KIR 1904010013

void printelement(int selection){	 //the function that prints the elements
	int i;
	char elements[20][15]={"Hydrogen","Helium","Lithium","Beryllium","Boron","Carbon","Nitrogen","Oxygen","Fluorine","Neon","Sodium","Magnesium","Aluminum","Silicon","Phosphorus","Sulfur","Chlorine","Argon","Potassium","Calcium"};
	
	printf("Elements:\n");
	puts("--------------------------------------------------------");		
	for(i=0;i<20;i++){
	printf("%d-%s\n",i+1,elements[i]);	
	}
	puts("--------------------------------------------------------");			
}
void writesymbol(int selection){	//the function that prints the symbols of the elements
	int i;
	char symbol[20][5]={"H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca"};
	
	printf("Symbols:\n\n");
	puts("--------------------------------------------------------");
	for(i=0;i<20;i++){
	printf("%d-%s\n",i+1,symbol[i]);
	}
	puts("--------------------------------------------------------");
}
void findelement(int atomnumber){	//the function that prints the desired element
	char elements[20][15]={"Hydrogen","Helium","Lithium","Beryllium","Boron","Carbon","Nitrogen","Oxygen","Fluorine","Neon","Sodium","Magnesium","Aluminum","Silicon","Phosphorus","Sulfur","Chlorine","Argon","Potassium","Calcium"};
	printf("%s",elements[atomnumber-1]); 
}
int groupname(int atomnumber){	//the function that prints the group number
	int result=0;
	
	if(atomnumber==2){			//Helium is a exception.
		return result=8;
	}
	if(atomnumber>0 && atomnumber<2){
		result+=atomnumber%2;
	}
	else if(atomnumber>2 && atomnumber<11){
		result=atomnumber-2;		
	}
	else if(atomnumber>10 && atomnumber<19){
		result+=atomnumber%10;
	}
	else if(atomnumber>18 && atomnumber<21){
		result+=atomnumber%18;
	}
	return result;
}
int findperiod(int atomnumber){ 	//the function that prints the period
	int period;
	
	if(atomnumber>0 && atomnumber<3){
		period=1;
	}
	if(atomnumber>2 && atomnumber<11){
		period=2;
	}
	if(atomnumber>10 && atomnumber<19){
		period=3;
	}
	if(atomnumber>18 && atomnumber<21){
		period=4;
	}
	return period;
}
void printtable(int selection){			//the function prints the periodic table.
	int i;
	char elements[21][15]={"","Hydrogen  ","Helium    ","Lithium   ","Beryllium ","Boron     ","Carbon    ","Nitrogen  ","Oxygen  ","Fluorine  ","Neon      ","Sodium    ","Magnesium ","Aluminum  ","Silicon   ","Phosphorus","Sulfur    ","Chlorine  ","Argon     ","Potassium ","Calcium   "};
	char symbol[21][3]={"","H","He","Li","Be","B","C","N","O","F","Ne","Na","Mg","Al","Si","P","S","Cl","Ar","K","Ca"};
	
	printf("Elements     Symbols     Groupname       Period\n");	
	puts("--------------------------------------------------------");
	
	for(i=1;i<=20;i++){
	printf("%d-%s\t%s\t    %d-A\t\t%d.period\n",i,elements[i],symbol[i],groupname(i),findperiod(i));	//I would call two functions inside the function.	
	}
	puts("--------------------------------------------------------");
	printf("\n");
}
int main(){	
	int selection;
	int atomnumber,i;
	
	for(i=0;1;i++){		
		printf("\t\tMENU\n");
		printf("1.)Print the name of the elements\n2.)Print the symbol of the elements\n3.)Enter the number of the atom you want to find\n4.)Find the group number and period of the atom\n5.)Print the modern periodic table\n6.)Exit\n");
		puts("");	
		printf("Which process would you like to choose: "); 	// attention for users	
		scanf("%d",&selection);
		puts("");
				
		while(selection<=0 || selection>6){			
			printf("Please enter a value between 0-7\n\n");
			printf("\t\tMENU\n");
			printf("1.)Print the name of the elements\n2.)Print the symbol of the elements\n3.)Enter the number of the atom you want to find\n4.)Find the group number and period of the atom\n5.)Print the modern periodic table\n6.)Exit\n");
			puts("");	
			printf("Which process would you like to choose: "); 	// attention for users	
			scanf("%d",&selection);
			puts("");				
		}		
		if(selection==1){
			printelement(selection);
			printf("\n");
		}
		if(selection==2){
			writesymbol(selection);
			printf("\n");
		}
		if(selection==3){				
			puts("--------------------------------------------------------");
			printf("Enter the number of the atom: ");
			scanf("%d",&atomnumber);
			while(atomnumber<=0 || atomnumber>20){
				printf("Please enter a value between 0-21\n\n");	// attention for users
				scanf("%d",&atomnumber);
			}	
			findelement(atomnumber);
			printf("\n");
			puts("--------------------------------------------------------");
				
		}
		if(selection==4){				
			puts("--------------------------------------------------------");
			printf("Enter the number of the atom: ");
			scanf("%d",&atomnumber);
			while(atomnumber<=0 || atomnumber>20){
				printf("Please enter a value between 0-21\n\n");	// attention for users
				scanf("%d",&atomnumber);
			}	
			printf("%d-A group %d.period\n",groupname(atomnumber),findperiod(atomnumber));
			puts("--------------------------------------------------------");
		}
		if(selection==5){
			printtable(selection);
		}
		if(selection==6){
			break;
		}
	}		
	return 0;
}
