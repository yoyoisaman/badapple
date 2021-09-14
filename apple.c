#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
#include <assert.h>

void gotoxy(int x, int y)
{
	COORD pos; pos.X = x - 1; pos.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main()
{
	system("color f0");
	long i;
	char FileName[100];
	char hi[254000];
	FILE *in;

	Sleep(300);

	for (i = 0; i <=9720 ; i++)
	{
		sprintf(FileName,pos, i);
		in = fopen(FileName, "r");
		if(in == NULL){
            printf("error");
            exit(1);
		}
		fread(hi, 1, 254000, in);
		printf("\033[u");
		printf("%s",hi);
		gotoxy(1, 1);
		Sleep(29);
		fclose(in);
	}
}
