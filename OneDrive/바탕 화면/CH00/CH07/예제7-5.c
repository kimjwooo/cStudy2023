#include <stdio.h> 

void fruit(void);			// �Լ� ����

int cnt=0;					//�������� �߰�

int main(void)
{
	while (1)
	{
		cnt++;
			if (cnt >= 3000) 
				break;
			
		fruit();				// �Լ� ȣ��


	}


	return 0;
}

void fruit(void)			// ���ȣ�� �Լ� ����
{
	//cnt++;	
	/*if (cnt > 3000)
		return;			
			*/				// �ڽ��� �޸𸮰� ����� ������ �� �ִ� ���� �˰� �� �������� �����ϵ��� ��. (�Լ������� RETURN�� ���)
	printf("apple %d\n",cnt);
	/*fruit();		*/		// �ڽ��� �ٽ� ȣ��
}