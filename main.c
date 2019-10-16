#include <stdio.h>
#include <string.h>

int main()
{
	FILE *fp1, *fp2;
	char data[25];
	//~ char str1[] = "mage";
	//~ char *p;
	int result;
	//~ int i,k;
	fp1 = fopen("words","r");
	if (fp1 == NULL)
    {
		printf("Could not open file \"words\"") ;
		return 1;
	}
	printf("Opening the file \"words\"\n");
	
	fp2 = fopen("newwords","w");
	if (fp2 == NULL)
    {
		printf("Could not open file \"newwords\"") ;
		return 1;
	}
	printf("Opening the file \"newwords\"\n");
	
	while(!feof(fp1))
	{
		fgets(data,25,fp1);
		
		//~ result=strlen(data);
		//~ k=0;
		//~ for(i=0;i<result;i++)
		//~ {
			//~ if (data[i] == 'o')
				//~ k++;
		//~ }
		//~ if (k>=5)
			//~ fprintf(fp2,"%s",data);
			
		//~ p = strstr (data,str1);
		//~ if(p)
			//~ fprintf(fp2,"%s",data);
			
		result=strlen(data);
		if(result>20)
			fprintf(fp2,"%s",data);
			
			//~ printf("%d\n",result);
		//~ result = strcmp(str1,data);
		//~ printf("%d\n",result);
		//~ if (!strcmp(str1,data))
			 //~ printf("%s",data);
	}
	printf("Closing the file \"words\"\n");
	fclose(fp1);
	
	printf("Closing the file \"newwords\"\n");
	fclose(fp2);
	return 0;
}
