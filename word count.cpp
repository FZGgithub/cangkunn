#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void main()
{
	char line[100], k;
	int i, j;
	int end = 0;
	int characters = 0;
	int words = 0;
	int lines = 0;
	cout << "����������ı������н�����\n" << endl;
	while (end == 0)
	{
		j = 0;
		while ((k = getchar()) != '\n')
			line[j++] = k;
		line[j] = '\0';
		if (line[0] == '\0')
		{
			break;
		}
		else
		{
			words++;
			for (i = 0; line[i] != '\0'; i++)
			if (line[i] == ' ' || line[i] == '\t' || line[i] == '\'')
				words++;
		}
		lines++;
		characters += strlen(line);
	}
	cout << "������\n" << lines << endl;
	cout << "������\n" << words << endl;
	cout << "�ַ���\n" << characters << endl;

}