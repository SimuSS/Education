//#include <stdio.h>
//main()
//{
//	//1. �ݺ����� ����ؼ� 1 ~ 100���� ���
//	int num = 1;
//	int tic = 0;
//	while(num <= 100)
//	{
//		printf("%d\n",num);
//		num++;
//	}
//
//	//2. �ݺ����� �̿��ؼ� 1 ~ 10������ ���� ���
//	num = 0;
//	tic = 1;
//	while(tic <= 10)
//	{
//		num=tic+num;
//		//num =+tic;
//		tic++;
//	}
//	printf("%d\n",num);
//
//	//3. �ݺ����� �̿��ؼ� 0 ~ 100���� ¦���� ���
//	//���� 0�� ¦����....
//	num = 0;
//	while(num < 100)
//	{
//		printf("%d\n",num);
//		num=num+2;
//		//num=+2;
//	}
//	getchar();
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//main()
//{
//	int dan = 0;
//	int count = 0;
//	int ret = 0;
//	int temp = 0;
//	int row = 0;
//	int colume = 0;
//	//Scanf�Լ��� ��(�������� ��)�� �Է� �޾� �ش� �������� ����Ͻÿ�. for�� �̿�
//	printf("�������� ���� �Է��� �ּ��� : ");
//	scanf("%d",&temp);
//	for (dan = temp; count<10; count++)
//	{
//		ret = dan * count;
//		printf("%d * %d  = %d \n",dan,count,ret);
//	}
//
//	//1~100���� Ȧ���� ���� for������ ����
//	ret = 0;
//	for (count=1; count<100; count++)
//	{
//		ret = ret + count;
//	}
//	printf("%d \n",ret);
//
//	//��ø �� For���� ����Ͽ� 
//	//*****
//	//*****
//	//*****
//	//*****
//	//�� ����Ͻÿ�.
//	for (colume = 0; colume<4; colume++)
//	{
//		for (row = 0; row <6; row++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//��ø�� for�� ����Ͽ� ������ ��ü�� ����Ͻÿ�.
//	for (dan =1; dan<=9; dan++)
//	{
//		for (count=1; count<=9; count++)
//		{
//			ret = dan * count;
//			printf("%d * %d  = %d \n",dan,count,ret);
//		}
//	}
//	getchar();
//	getchar();
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
main()
{
	int dan = 0;
	int count = 0;
	int ret = 0;
	int temp1 = 0;
	int temp2 = 0;
	int row = 0;
	int colume = 0;

	//�� ���� �Է� �޾� A�� B���� ū��, B�� A���� ū��, A,B�� ������ ����� ����.
	printf("ù��° ���ڸ� �Է��� �ּ���. : ");
	scanf("%d",&temp1);
	printf("\n�ι�° ���ڸ� �Է��� �ּ���. : ");
	scanf("%d",&temp2);

	if (temp1 < temp2)
	{
		printf("\n�ι�° ������ ũ�Ⱑ �� Ů�ϴ�.");
	}else if (temp1 > temp2)
	{
		printf("\nù��° ������ ũ�Ⱑ �� Ů�ϴ�.");
	}else
	{
		printf("\n�� ������ ũ�Ⱑ �����ϴ�.");
	}

	// �� ���� �Է� �޾� ������ ���� ������ ū������ ���ʷ� ����Ͻÿ�.
	printf("\nù��° ���ڸ� �Է��� �ּ���. : ");
	scanf("%d",&temp1);
	printf("\n�ι�° ���ڸ� �Է��� �ּ���. : ");
	scanf("%d",&temp2);

	if (temp1 < temp2)
	{
		for (count=temp1; count<=temp2; count++)
		{
			printf("\n%d ",count);
		}
	}else if (temp1 > temp2)
	{
		for (count=temp2; count<=temp1; count++)
		{
			printf("\n%d ",count);
		}
	}else
	{
		printf("\n�� ������ ũ�Ⱑ �����ϴ�.");
	}

	// �Էµ� ���� ¦������ Ȧ �� ���� �����Ͽ� ����Ͻÿ�.
	// �Է� 2 -> ¦���Դϴ�.

	printf("\nù��° ���ڸ� �Է��� �ּ���. : ");
	scanf("%d",&temp1);

	if (0==temp1%2)
	{
		printf("\n¦���Դϴ�.");
	}else
	{
		printf("\nȦ�� �Դϴ�.");
	}
	//1~100���� �ݺ��Ǵ� �ݺ��� �ȿ��� if���� ����Ͽ� ¦���� ����Ͻÿ�.
	for (count=1; count<=100; count++)
	{
		if (count%2 == 0)
		{
			printf("\n¦�� : %d",count);
		}
	}
	//1~100���� �ݺ��Ǵ� �ݺ��� �ȿ��� if���� ����Ͽ� 5�� ����� ����Ͻÿ�.
	for (count=1; count<=100; count++)
	{
		if (count%5 == 0)
		{
			printf("\n5�� ��� : %d",count);
		}
	}

	//1~100���� �ݺ��Ǵ� �ݺ��� �ȿ��� if���� ����Ͽ� 5�� ����� 3�� ����� ����Ͻÿ�.
	for (count=1; count<=100; count++)
	{
		if (count%5 == 0 || count%3 ==0)
		{
			printf("\n3,5�� ��� : %d",count);
		}
	}

	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
	getchar();
}