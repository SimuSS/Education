//break문은 반복문을 탈출 하는 경우에 해당함.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// #include <stdio.h>
	// 	int count = 0;
	// 	int tick = 1;
	// 	int main(void)
	// 	{
	// 			//goto문을 사용하여 1~10까지의 합을 출력하시오.
	// 		goto init;
	// 	init:
		
	// 		count += tick;
	// 		tick++;
			
	// 		if (tick == 11)
	// 		{
	// 			goto end;
	// 		}
	// 		goto init;
		
	// 	end:
	// 		printf("%d",count);
	// 	}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// #include <stdio.h>
	// 비밀번호를 일정횟수 이상 틀리면 경고 문구를 보이게 만드시오.
	// char police[20] = "Freeze!!";
	// const int password = 1234;
	// int temp = 0;
	// int count = 2;
	// int success = 0;
	// int main(void)
	// {
	// 		while(!success)
	// 	{
	// 		printf("Please Enter : Password ");
	// 		scanf("%d", &temp);
	// 		if (password != temp)
	// 		{
	// 			printf("Retry again\n");
	// 			printf("%d times left.\n",--count);
	// 			if (count < 0)
	// 			{
	// 				printf("%s",police);
	// 				break;
	// 			}
	// 		}else{
	// 			printf("Welcome~!! master!!\n");
	// 			success = 1;
	// 		}
	// 	}
	// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// #include <stdio.h>
	// int money = 0;
	// int total = 0;
	// int success = 0;
	// int main(void)
	// {
	// 	do 
	// 	{
	// 		printf("\n동전입력 : ");
	// 		scanf("%d",&money);
	// 		if ((money == 100) || (money == 500) || (money == 1000))
	// 		{
	// 			total += money;
	// 			printf("total : %d",total);
	// 		}
	// 		else
	// 		{
	// 			printf("잘못 된 화폐단위 입니다.");
	// 		}
	// 	}while(!success);
	// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// #include <stdio.h>
	// int money = 0;
	// int total = 0;
	// int TRUE = 1;
	// int main(void)
	// {
	// 	do 
	// 	{
	// 		printf("\n동전입력 : ");
	// 		//success = puts("동전입력 : "); //Printf와 다르게 반환값이 없다.
	// 		scanf("%d",&money);
	// 		if ((money == 100) || (money == 500) || (money == 1000))
	// 		{
	// 			total += money;
	// 			printf("total : %d",total);
	// 		}
	// 		else
	// 		{
	// 			printf("잘못 된 화폐 단위 입니다.");
	// 		}
	// 	}while(TRUE);
	// }
	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//#include <stdio.h>
	//int a = 10, b = 5;
	//int TRUE = 1;
	//int main(void)
	//{
	//int Sum_Number(int number1, int number2);
	////int number1=0, number2=0;
	////두수의 합을 출력하시오.
	//
	//printf("%d",Sum_Number(a,b)); 

	//int Sum_Number(int number1, int number2)
	//{
	//	return number1+number2;
	//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int get_num();
int filter_num(int num);
int half_print(int num);

int main(void)
{
	int num;
	num = get_num(); // 이 함수는 Keyboard로 입력 받는다.
	num = filter_num(num);	// num의 값이 1~100 사이 값이면 1000을 더해 리턴한다. 
							// 1~100 사이가 아니면 그대로 리턴한다.
	half_print(num);//1부터 num값의 반까지만 출력하는 함수.

	getchar();
	getchar();
}

int get_num()
{
	int temp = 0;
	printf("숫자를 입력해 주세요.");
	scanf("%d",&temp);
	return temp;
}

int filter_num(int num)
{
	if (1 <= num && num <=100)
	{
		return num +1000;
		printf("%d",num+1000);
	}
	return num;
	printf("%d",num);
}

int half_print(int num)
{
	printf("%d",num/2);
}