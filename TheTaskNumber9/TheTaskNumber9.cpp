// TheTaskNumber9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string.h>


int main()
{
	setlocale(LC_ALL, "Russian");

	char* n;
	char* next = 0;
	char str[] = "- А что это за шаги такие на лестнице? - спросил Коровьев, поигрывая ложечкой в чашке с черным кофе.";

	printf("%s", "Строка:\n");
	printf(str);
	printf("\n");
	printf("%s", "Пословный вывод строки:\n");

	n = strtok_s(str, " -,?.", &next);
	do
	{
		printf("%s", n);
		printf("\n", next);
	} while (n = strtok_s(NULL, " -,?.", &next));

	return 0;






}
