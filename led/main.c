#include <reg52.h>//����52ϵ�е�Ƭ��ͷ�ļ�

//λ���壬sbit ��ʶ�� = ��ֵַ
sbit led1=P2^0;
sbit led2=P2^1;
sbit led3=P2^2;
sbit led4=P2^3;
sbit led5=P2^4;
sbit led6=P2^5;
sbit led7=P2^6;
sbit led8=P2^7;

//�ӳٺ���,��λԼ10΢�룬�˴����õ���CPU�������ʱ������׼ȷ
//11.0952MHz���ִ��ʱ��Ϊ0.000009771593��ԼΪ9.771593΢��
void delay(int us)
{
	while(us--);//ѭ��ִ�У��ݼ�
}

void main()
{
	while(1)
	{
		led1=0;//���õ͵�ƽ����LED���ϵ㿪ʼʱ��0.00042318
		delay(10000);//1��Ϊ1000����1000000΢�룬�˴�Ϊ0.1�룬�ϵ����ʱ��0.09813911
		led1=1;//���øߵ�ƽϨ��LED
		delay(10000);
		
		led2=0;
		delay(10000);
		led2=1;
		delay(10000);
		
		led3=0;
		delay(10000);
		led3=1;
		delay(10000);
		
		led4=0;
		delay(10000);
		led4=1;
		delay(10000);
		
		led5=0;
		delay(10000);
		led5=1;
		delay(10000);
		
		led6=0;
		delay(10000);
		led6=1;
		delay(10000);
		
		led7=0;
		delay(10000);
		led7=1;
		delay(10000);
		
		led8=0;
		delay(10000);
		led8=1;
		delay(10000);
	}
}