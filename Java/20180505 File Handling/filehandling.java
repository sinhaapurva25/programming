Getchar() and putc(),getc()

Void main()
{
FILE *fp;
Fp=fopen(“new.txt”,”w”);
Printf(“Enter any message...”);
While((ch=getchar())!=EOF)
{
	Putc(ch,fp);
}
	Fclose(fp);


Fp=fopen(“new.txt”,”r”);
Printf(“output from file”);
While((ch=getc(fp))!=EOF)
{
	Printf(“%c”,ch);
}
Fclose(fp);
}



Fgets() & fputs()


Void main()
{
	FILE * fp;
	Char  str[20];
	Fp=fopen(“show.txt”,”w”);
	Printf(Enter a string or any message..);
	Gets(str);
	Fputs(str,fp);
	Fclose(fp);

	Printf(“Output from filee..”);
	Fp=fopen(“show.txt”,”r”);
	Fgets(str,strlen(str),fp);
	Printf(“%s”,str);
}

Fprintf () & fscanf()
 Void main()
{
	Int roll;
	Char name[20]=”Helllo”;
	Fp=fopen(“file.txt”,”w”);
	Roll=89;

	Fprintf(fp,“%d%s”,roll,name);
	Fclose(fp);

	Printf(“Output from file”);
	Fp=fopen(“file.txt”,”r”);
	Fscanf(fp,”%s%d”,name,&roll);
	Printf(“%d”,roll);
	Printf(“%s”,name);
	Fclose(fp);
	
	
}





#include<stdio.h>
void main()
{
	FILE * fp;
	int no;
	/*printf("Enter a number...");
	scanf("%d",&no);
	fp=fopen("file.txt","w");
	putw(no,fp);
	fclose(fp);
	  */


	  fp=fopen("file.txt","r");
	  no=getw(fp);
	  printf("%d",no);
	  fclose(fp);
}



#include<stdio.h>
void main()
{
FILE *pFile;
FILE *pFile2;
char buffer[256];

pFile=fopen("myfile.txt", "r");
pFile2=fopen("myfile2.txt", "a");
if(pFile==NULL) {
	 perror("Error opening file.");
}
else {
	 while(fgets(buffer, sizeof(buffer), pFile)) {
		  fprintf(pFile2, "%s", buffer);
	 }
}
fclose(pFile);
fclose(pFile2);

}