#include <stdio.h>
#include <stdlib.h>

/*
 *
2. ������ �ணࠬ��, ����� �㤥� ��訢��� � ���짮��⥫� ��� �᫠
	�����.

	�� 祬 ᭠砫� �ணࠬ�� ��訢��� ��ࢮ� �᫮, �᫨ ��� ����⥫쭮�
	��� ࠢ�� ���, �ணࠬ�� ᮮ�頥� �� �訡�� � �����蠥���.

	��᫥ �⮣� �ணࠬ�� ��訢��� ��஥ �᫮. � ᭮�� �஢���� �᫮. �᫨
	��஥ �᫮ ����⥫쭮� ��� ࠢ�� ���, �ணࠬ�� ᮮ�頥� �� �訡�� �
	�����蠥���.

	�᫨ ��� �᫠ ��諨 �஢���, �ணࠬ�� �뢮��� �ந�������� ��� �ᥫ.

 */
int main() {
    // ��६����
    int a = 0, b = 0, c = 0;

    // ��ࢮ� �᫮
    printf("������ ��ࢮ� �᫮:");
    printf("\n");
    scanf("%d", &a);

    //��஥ �᫮
    if(a > 0)
    {
        printf("������ ��஥ �᫮:");
        printf("\n");
        scanf("%d", &b);
    }
     if(b > 0)
    {
        c = a * b;
        printf("%i * %i = %i\n", a, b, c);
    }
    else if(a <= 0 || b <= 0)
    {
        printf("������ ������⥫쭮� �᫮, ����� ���\n");
    }
    system("pause");

    return 0;
}