/*printf�÷�*/
# include <stdio.h>

int main(void)
{
    printf("����ַ�����\n");  //\n��ʾ����
    printf("Hello Bad boy!\n");
    printf("---------------\n");

    int i = 5;  //��i��ֵΪ5���ǽ�5�Ķ����ƴ��븳ֵ��i
    printf("������Ʒ� ���������\n");
    printf("%d\n",i);  //%d��ʾʮ�����������i����Ķ����ƴ���ת��Ϊʮ�������
    printf("---------------\n");
    /*
        %x��ʾ��Сд��ʮ���������
        %X��ʾ�Դ�д��ʮ���������
        %o��ʾ�԰˽������
    */

    int a = 3;
    int b = 5;
    printf("���������Ʒ������������\n");
    printf("a = %d, b = %d\n", a, b);  //�������
    //printf("%d\n", a, b);  //error,������Ʒ����������������ƥ��
    printf("---------------\n");
    
    int x = 47;
    
    printf("�������ʮ����������\n");
    printf("%x\n",x);  //���2f
    printf("%X\n",x);  //���2F
    printf("%#x\n",x);  //���0x2f
    printf("%#X\n",x);  //���0X2F���Ƽ�ʹ��
    
    return 0;
}