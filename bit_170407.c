/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	srand(time(NULL));
//
//	for (a=0; a<10; a++)
//	{
//		b = rand();
//		printf("%d ",b);
//	}
//	getchar();
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int MyCount = 0;
//	int Ran_num = 0;
//	int m_input = 0;
//	int m_success = 0;
//
//	srand(time(NULL));
//	Ran_num = (rand()%100)+1;
//
//	do 
//	{
//		printf("���ڸ� �Է��� �ּ��� : ");
//		scanf("%d",&m_input);
//		MyCount++;
//
//		if (m_input < Ran_num)
//		{
//			printf("�� ���� Ů�ϴ�.\n");
//		}else if (m_input > Ran_num)
//		{
//			printf("�� ���� �۽��ϴ�.\n");
//		}else if (m_input == Ran_num)
//		{
//			printf("�����Դϴ�.\n");
//			printf("%d ���� ������ϴ�.", MyCount);
//			m_success = 1;
//		}
//	} while (!m_success);
//	getchar();
//	getchar();
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void check(void);	//�Լ��� ����(prototype)
//
//int a;				//�ӽ�����				// ������ �ʱ�ȭ ���� �ʴ� ��� 0���� �ʱ�ȭ �ȴ�.
//int a;				//����					// �����ϳ��� extern�� ������ ����.
//extern int a;		//���������� �����̴�	//���� int a;�� �����ϸ� extern�� �����Ǿ� �ִ�.
//
//int b = 10;			//����
//int b;				//����
//
//int main()
//{
//	printf("%d\n",a);
//	check();
//}
//
//int a = 30;			//���������� ����
//void check(void)	//�Լ��� ���� (definition)
//{
//	puts("check");
//}
/////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void check(void);	//�Լ��� ����(prototype)

int g;
int x;
extern int g;	//���� ���Ǹ� �����ͼ� ���ڴٴ� ����
static int h;	//���� ����(�ٸ����Ͽ� extern���� h�� ���� ����)
				//�� ���� �ȿ����� ���� ������ ���

//register int a;	//error
//auto int b;		//error
int main()
{
	extern int x;	//�����̳�  �ٸ� ������ ���Ǹ� �����ͼ� ���� ����
	static int y;	//������ ���� Ư���� ��� ���� ����

	register int a = 10;	//register�� ���ڸ��� Auto�� ����
	auto int b = 20;		//�Ϲ� ����
}

/////////////////////////////////////////////////////////////////////////////////////////////////
//#include <stdio.h>
//
//int get_passwd(void);
//void chance(int cnt);
//int compare(int a, int b);
//void police(int cnt);
//int temp;
//
////��й�ȣ�Է±� �Լ�4������ �ϼ��ϼ���
//main()
//{
//	int pwd = 1234;//������ ���ص� �н�����
//	int get_pwd; //���� �н�����
//	int cnt=3; //��ȸ�� 3�� ��
//	do{
//		get_pwd = get_passwd();//�н����� �޾� ��
//		if(compare(pwd, get_pwd)) //�κ��� ������ ������ 1 �ٸ��� 0�� �����Ѵ�.
//		{ 
//			puts("���");
//			break;
//		}else{
//			chance(--cnt); //��ȸ�� �����ִ� �Լ�
//		}
//	}while(cnt); //cnt!=0
//	police(cnt); //������ �θ��� �Լ� cnt�� 0�̸� ������ �θ��� �Լ�
//}
//
//int get_passwd(void)
//{
//	printf("���ڸ� �Է��� �ּ��� :");
//	scanf("%d",&temp);
//	return temp;
//}
//
//int compare(int a, int b)
//{
//	if (a == b)
//	{
//		return 1;
//	}else
//	{
//		return 0;
//	}
//}
//
//void chance(int cnt)
//{
//	printf("���� ��ȸ�� %d ���ҽ��ϴ�.\n",cnt);
//}
//
//void police(int cnt)
//{
//	if (cnt == 0)
//	{
//		printf("�����Դϴ�. ���� �����ʴϱ�?");
//		getchar();
//		getchar();
//	}
//}
/////////////////////////////////////////////////////////////////////////////////////////////////