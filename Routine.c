
#include <stdio.h>

int main()
{
    int a ;
    printf("Enter the number according to the day \n 1. Sunday \n 2. Monday \n 3. Tuesday \n 4. Wednesday \n 5. Thrusday \n 6. Friday\n");
    scanf("%d", &a);

    switch(a)
    {
    	
    case 1:
        printf("\n Routine for Sunday: \n Phy-DS \n CSc-PB \n Chem-MRB \n Phy-RH \n Math-AS \n ECML \n Eng-BPP \n Chem-PRP");
        break;
        
    case 2:
        printf("\n Routine for Monday: \n CSc-PB \n Phy-RH \n Chem-MRB \n Math-AS \n Eng-BPP \n Chem-PRP \n ECML \n Phy-DS");
        break;

    case 3:
        printf("\n Routine for Tuesday: \n CSc-PB \n Math-AS \n Phy-SKC \n Eng-BPP \n Nep-CU \n ECML \n Chem-MRB");
        break;

    case 4:
        printf("\n Routine for Wednesday: \n Math-BB \n Chem-KS \n Computer Lab \n Eng-BPP \n Csc-PB \n Phy-SKC \n Nep-CU");
        break;

    case 5:
        printf("\n Routine for Thrusday: \n Math-GA \n Chem-KS \n Physics lab \n Nep-CU \n ECML \n Math BB \n Phy-SKC");
        break;
        
    case 6: 
      	printf("\n Routine for Friday: \n Chem-KS \n Csc-PB \n Chem lab \n Eng-BPP \n Math-GA \n Phy-DS \n Nep-CU");
      	break;
      
     default: 
    	printf("\n Invalid Day Entered");
    }
    
    return 0;
}
