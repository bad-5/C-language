/*ʵ��������ʾ*/
# include <stdio.h>

int main(void)
{
    float a = 3.2;
    float b = 3.24e3;  //b��ֵΪ3240
    float c = 123.4e-2F;  //c��ֵΪ1.234
    /*Ĭ����double���͵����ݣ���ֵ��float�ᵼ�¾��ȶ�ʧ��ʹ��F����ֵ��Ϊfloat����*/
    
    printf("a = %f\n",a);
    printf("b = %f\n",b);
    printf("c = %f\n",c);
    
    return 0;
}