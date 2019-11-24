#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt","wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}

int main()
{
	FILE * pFile;
	pFile = fopen("myfile.txt", "w");
	if (pFile != NULL)
	{
		fputs("fopen example", pFile);
		fclose(pFile);
	}

	return 0;
}

int main()
{
	FILE * pFile;
	pFile = fopen("example.txt", "wb");
	fputs("This is an apple.", pFile);
	fseek(pFile, 9, SEEK_SET);
	fputs(" sam ", pFile);
	fclose(pFile);
	return 0;
}

int main()
{
	FILE * pFile;
	long size;

	pFile = fopen("myfile.txt", "rb");
	if (pFile == NULL) perror("Error opening file");
	else
	{
		fseek(pFile, 0, SEEK_END);
		size = ftell(pFile);
		fclose(pFile);
		printf("Size of myfile.txt:%ld bytes.\n", size);
	}
	return 0;
}

int main()
{
	int n;
	FILE * pFile;
	char buffer[27];

	pFile = fopen("myfile.txt", "w+");
	for (n = 'A'; n <= 'Z'; n++)
	{
		fputc(n, pFile);
	}
	rewind(pFile);
	fread(buffer, 1, 26, pFile);
	fclose(pFile);
	buffer[26] = '\0';
	puts(buffer);
	return 0;
}

#include <stdlib.h>
int main(void) 
{
	int c; 
	FILE* fp = fopen("test.txt", "r");
	if (!fp) 
	{
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	while ((c = fgetc(fp)) != EOF) 
	{
		putchar(c);
	}
	//判断是什么原因结束的
	if (ferror(fp))
		puts("I/O error when reading");
	else if (feof(fp))
		puts("End of file reached successfully");
	fclose(fp);
}

enum { SIZE = 5};
int main(void)
{
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE * fp = fopen("test.bin", "wb");
	fwrite(a, sizeof(*a), SIZE, fp);
	fclose(fp);

	fp = fopen("test.bin", "rb");
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1)
	{
		printf("%lf\n", b);
	}
	if (feop(fp))
	{
		printf("Error reading test.bin:unexpected end of file\n");
	}
	else if (ferror(fp))
	{
		perror("Error reading test.bin");
	}
	fclose(fp);
	fp = NULL;
	return 0;
}