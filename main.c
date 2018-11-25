/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmraz <mmraz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 12:34:56 by mmraz             #+#    #+#             */
/*   Updated: 2018/11/24 14:38:25 by mmraz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	check_ft_strstr()
{
	// Массив со строкой для поиска
   	char str1 [11]="0123456789";
   	// Набор символов, которые должны входить в искомый сегмент
   	char str2 [10]="345";
   	// Переменная, в которую будет занесен адрес первой найденной строки
   	char *istr;
   	//Поиск строки
   	istr = strstr (str1,str2);
   	//Вывод результата поиска на консоль
   	if ( istr == NULL)
    	printf ("Строка не найдена\n");
   	else
    	printf ("Искомая строка начинается с символа %ld\n",istr-str1+1);

}

void	check_ft_strchr()
{
	// Массив со строкой для поиска
   	char str [11]="0123456789";
   	// Код искомого символа
   	int ch = '6';
   	// Указатель на искомую переменную в строке,
   	// по которой осуществляется поиск.
   	char *ach;
   	// Ищем символ ‘6’
   	ach=ft_strchr(str,ch);
   	// Выводим результат на консоль
   	if (ach==NULL)
    	printf ("Символ в строке не найден\n");
   	else
    	printf ("Искомый символ в строке на позиции # %ld\n",ach-str+1);
}

void	check_ft_strlcat()
{
	printf("\nft_strlcat test\n");
	// Массивы в которые добавляется строка
   	char src1[10]="000";
   	char src2[10]="000";
   	// Добавляемая строка
   	char app[10]="12345";
   	// Вывод добавляемой строки
   	printf ("app:  %s\n",app);
   	// Добавление строки app в строку src1, но не более трех символов
   	ft_strlcat(src1, app,3);
   	// Вывод результата
   	printf ("src1: %s\n",src1);
   	// Добавление строки app в строку src2, но не более семи символов
   	ft_strlcat(src2, app,7);
   	// Вывод результата
   	printf ("src2: %s\n",src2);
	printf("\nstrlcat test\n");
	// Массивы в которые добавляется строка
   	char src3[10]="000";
   	char src4[10]="000";
   	// Добавляемая строка
   	char app1[10]="12345";
   	// Вывод добавляемой строки
   	printf ("app:  %s\n",app);
   	// Добавление строки app в строку src1, но не более трех символов
   	ft_strlcat(src3, app1,3);
   	// Вывод результата
   	printf ("src1: %s\n",src3);
   	// Добавление строки app в строку src2, но не более семи символов
   	ft_strlcat(src4, app1,7);
   	// Вывод результата
   	printf ("src2: %s\n",src4);
}

void	check_ft_strncat()
{
	printf("\nft_strncat test\n");
	// Массивы в которые добавляется строка
   	char src1[10]="000";
   	char src2[10]="000";
   	// Добавляемая строка
   	char app[10]="12345";
   	// Вывод добавляемой строки
   	printf ("app:  %s\n",app);
   	// Добавление строки app в строку src1, но не более трех символов
   	ft_strncat(src1, app,3);
   	// Вывод результата
   	printf ("src1: %s\n",src1);
   	// Добавление строки app в строку src2, но не более семи символов
   	ft_strncat(src2, app,7);
   	// Вывод результата
   	printf ("src2: %s\n",src2);
	printf("\nstrncat test\n");
	// Массивы в которые добавляется строка
   	char src3[10]="000";
   	char src4[10]="000";
   	// Добавляемая строка
   	char app1[10]="12345";
   	// Вывод добавляемой строки
   	printf ("app:  %s\n",app1);
   	// Добавление строки app в строку src1, но не более трех символов
   	strncat(src3, app1,3);
   	// Вывод результата
   	printf ("src1: %s\n",src3);
   	// Добавление строки app в строку src2, но не более семи символов
   	strncat(src4, app1,7);
   	// Вывод результата
   	printf ("src2: %s\n",src4);
}

void	check_ft_strcat()
{
	printf("\nft_strcat test\n");
	// Массив источник данных
	char app[1024]="вторая строка ";
   	// Массив приемник данных
   	char dst[1024]="первая строка";
   	// Добавляем строку из массива src в массив dst. 
   	ft_strcat (dst, app);
   	// Вывод массива dst на консоль
   	printf("dst: %s\n",dst);
}

void	check_ft_strncpy()
{
	printf("\nft_strncpy test\n");
	// Массив источник данных
   	char src[10]="12345\0006789";
   	// Массивы приемники данных
   	char dst1[10]="1111111111";
   	char dst2[10]="1111111111";
   	// Счетчик
   	int i;
   	// Вывод массива src на консоль
   	printf ("src:  ");
   	for (i=0;i < 10;i++)
    	printf (" %2d",(unsigned short) src[i]);
   	printf ("\n ");
   	// Копируем строку длиною не более трех символов из массива src в массив dst1. 
   	ft_strncpy(dst1, src,3);
   	// Вывод массива dst1 на консоль
  	printf ("dst1: ");
   	for (i=0;i<10;i++)
    	printf (" %2d",(unsigned short) dst1[i]);
   	printf ("\n");
   	// Копируем строку длиною не более семи символов из массива src в массив dst2. 
   	ft_strncpy(dst2, src,7);
   	// Вывод массива dst2 на консоль
   	printf ("dst2: ");
   	for (i=0;i<10;i++)
    	printf (" %2d",(unsigned short) dst2[i]);
   	printf ("\n");
}

void	check_ft_strcpy()
{
	printf("\nft_strcpy test\n");
   	// Массив источник данных
   	char src[1024] = "первая строка\0вторая строка";
   	// Массив приемник данных
   	char dst[1024] = "";

   // Копируем строку из массива src в массив dst. Обратите внимание, 
   //что скопируется только строка «первая строка\0». 
   ft_strcpy (dst, src);
   // Вывод массива src на консоль
   printf ("src: %s %s\n",src, &src[14]);
   // Вывод массива dst на консоль
   printf ("dst: %s %s\n",dst, &dst[14]);
}

void	check_ft_strdup()
{
	printf("\nft_strdup test\n");
   	// Исходная строка
   	char str [11]="0123456789";
   	// Переменная, в которую будет помещен указатель на дубликат строки
   	char *istr;
   	// Дублирование строки
   	istr = ft_strdup(str);
   	// Вывод дубликата на консоль
   	printf ("Дубликат: %s\n", istr);
   	// Очищаем память, выделенную под дубликат
   	free(istr);
}

void	check_ft_strlen()
{
	printf("\nft_strlen test\n");
	// Массив с исходной строкой
   	char str [11]="0123456789";

   	//Определение длины строки и вывод результата на консоль
   	printf ("Длина строки «%s» - %d символов", str, (int)ft_strlen(str));

}

void	check_ft_memcmp()
{
	printf("\nft_memcmp test\n");
	   // Исходные массивы
   	unsigned char src[15]="1234567890";
   	unsigned char dst[15]="1234567890";
   	// Сравниваем первые 10 байт массивов
   	// и результат выводим на экран
   	if (memcmp (src, dst, 10) == 0)
		printf("Области памяти идентичные.");
   	else
	   printf("Области памяти отличаются.");

}

void	check_ft_memchr()
{
	printf("\nft_memchr test\n");
	 // Исходный массив
   	unsigned char src[15]= "1234567890";
   	// Переменная, в которую будет сохранен указатель
   	// на искомый символ.
   	char *sym;
   	// Вывод исходного массива
   	printf ("src old: %s\n",src);
   	// Поиск требуемого символа
   	sym = memchr (src, '4', 10);
   	// Если требуемый символ найден, то заменяем его
   	// на символ '!'
   	if (sym != NULL)
	  sym[0]='!';
   	// Вывод исходного массива
   	printf ("src new: %s\n",src);
}

void	check_ft_memmove()
{
	printf("\nft_memmove test\n");
   	// Исходный массив данных
   	unsigned char src[10]="1234567890";
   	// Вывод массива src на консоль
   	printf ("src old: %s\n",src);
   	// Копируем 3 байт
   	memmove (&src[4], &src[3], 3);
   	// Вывод массива src на консоль
   	printf ("src new: %s\n",src);
}

void	check_ft_memccpy() /* TEST FT_MEMCCPY  */
{

	unsigned char src[15]="1234567890";
   // Массив приемник данных
   	unsigned char dst[15]="";
   	// Копируем данные из массива src в массив dst
   	ft_memccpy (dst, src,'5', 10);
   	// Вывод массива dst на консоль
   	printf ("dst: %s\n",dst);
	printf("\nft_memccpy test\n");
}

void	check_ft_memcpy() /* TEST FT_MEMCPY */
{
	printf("\nft_memcpy test\n");
	char test1[] = "vushdk872wfwef3";
	char test2[] = "s4d65f6g7ihg76g";
 	char test3[] = "sourceofthecode";
	printf((strcmp(ft_memcpy(test1, test3, 15), memcpy(test2, test3, 15)) == 0) ? "ok" : "no test 1");
}

void	check_ft_bzero() /* TEST FT_BZERO */
{
	printf("\nft_bzero test\n");
	char test1[] = "123456789";
	char test2[] = "123456789";
	ft_bzero(test1, 6);
	bzero(test2, 6);
	printf((strcmp(test2, test1) == 0) ? "ok " : "no test1");
	char test3[] = "qwdk!sjiw899220";
	char test4[] = "qwdk!sjiw899220";
	ft_bzero(test3, 15);
	bzero(test4, 15);
	printf(strcmp(test3,test4) == 0 ? "ok " : "no test2");
}

void	check_ft_memset() /* TEST FT_MEMSET */
{
	printf("\nft_memset\n");
	char test1[] = "123456789";
	char test2[] = "123456789";
	printf((strcmp(ft_memset(test1, 'a', 6), memset(test2, 'a', 6)) == 0) ? "ok " : "no test1 " );
	char test3[] = "suca";
	char test4[] = "suca";
	printf((strcmp(ft_memset(test3, '/', 4), memset(test4, '/', 4)) == 0) ? "ok " : "no test2 " );
}

int		main(void)
{
	check_ft_memset();
	check_ft_bzero();
	check_ft_memcpy();
	check_ft_memccpy();
	check_ft_memmove();
	check_ft_memchr();
	check_ft_memcmp();
	check_ft_strlen();
	check_ft_strdup();
	check_ft_strcpy();
	check_ft_strncpy();
	check_ft_strcat();
	check_ft_strncat();
	check_ft_strlcat();
	check_ft_strchr();

	return (0);
}
