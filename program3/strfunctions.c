#include<string.h>
#include<stdio.h>
#include<ctype.h>

int findAllJediNames(char * filename, char buffer[50][10])
{
//printf("\nhello");
/* strtok example */
  char * pch;
//  printf ("Splitting string \"%s\" into tokens:\n",str);
     FILE *fp;

   
   int read;
 int lastline=0;

    size_t len = 0;
     char * line = NULL;
  fp = fopen(filename, "r");
  int noLine=0;
    while ((read = getline(&line, &len, fp)) != -1) {
noLine++;
}

 fp = fopen(filename, "r");
 
//char z[noLine][5];


   while ((read = getline(&line, &len, fp)) != -1)
{
          pch = strtok (line,",");
                                        char e[4];
                                        int i;
                                        int j=0;

                                        int x=0;
                                        while (pch != NULL)
                                        {
                                                if(x==0)
                                                {
                                                        for(i=0;i<3;i++)

             					{
                                                           buffer[lastline][j]=pch[i];
                                                                j++;
                                                }
                                                        
                                                }
                                                else if(x==1)
                                                {
                                                        for(i=0;i<2;i++)
                                                        {
                                                                buffer[lastline][j]=tolower(pch[i]);
                                                                j++;
                                                        }
                                                        buffer[lastline][j]='\0';
                           		               // printf(" %s\n",z[lastline]);                            
                                                        /* logic next */
                                                        lastline++;
					         	//printf("lastline->%d",lastline);
                                                        
                                                }

                                                pch = strtok (NULL, " ,.-");
                                                x++;
						//printf("lastline->%d\n",lastline);
                                        }

                                        	//printf("lastline->%d\n",lastline);
                }

//printf("lastline->%d",lastline);
return lastline;
}

void findJediName(char* first, char* last, char buffer[])
{
//first=first_name;
//last=last_name;
//printf("test\n");
int k,l,i=0;
//printf("%s\n",first);
//printf("\n");
//printf("%s\n",last);
//printf("\n");
//printf("%s\n",last);
//printf("\n");
//printf("buffer value -> %c ", buffer[0]);/
//printf("current value of i-> %d",i);
//printf("%s ",buffer[0]);
//printf("current value of k-> %d",k);
//printf("\n");
for(k=0;k<3;k++)
{
//printf("last ->%c ",last[k]);
buffer[i]=last[k];
i++;
}

for(k=0;k<2;k++)
{
//printf("first-> %c ",first[k]);
buffer[i]=first[k];
i++;
//printf("%d\n",i);
}
//printf("\n");
//printf("buffer value -> %c ", buffer[0]);
//printf("current value of i-> %d",i);
//printf("%s ",buffer[0]);
//printf("current value of k-> %d",k);
//printf("\n");
//printf("\n");
//printf("buffer last -> %c",buffer[3]);
//printf((buffer));
//printf("\n");
}

int myStrStr(char haystack[], char needle[], char buffer[])
{
int x=strlen(haystack);
int m;
	for(m=0;m<x;m++)
	{
	buffer[m]=0;
	}

int i=0,flag=0;
int y=strlen(needle),j=0,k=0,l=0,t=0,v,z,o;
int count[20],b=0;
	for(j=0;j<x;j++)
        	{
		if(needle[k]==haystack[j])
                {
		buffer[l]=needle[k];
		k++;
		l++;
		count[b]=1;
		b++; 
		}
	else 
		{
		buffer[l]=0;
		flag=1;
		count[b]=0;
		b++;
     		}
		}
int r,count1=0;
	for(v=0;v<b;v++)
		{
		if(count[v]==0)
		count1++;
		}
int g=count1-1;
//printf("current value of y->%d",y);
		if(g==y)
		{
		flag=2;
		}

//printf("count1 value->%d\n",count1);
		if(count1==b)
		flag=2;

		if(flag==0)
		buffer[l]=0;

		if(flag==1 || flag==0)
		return 1;

		if(flag==2)
		return 0;

return 0;
}

