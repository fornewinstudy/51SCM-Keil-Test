#include <reg52.h>
sbit LED1=P2^4;
sbit LED2=P2^5;
sbit LED3=P2^6;
sbit LED4=P2^7;
sbit KEY1=P3^2;
sbit KEY2=P3^3;
sbit KEY3=P3^4;

static void DelayNms(int nms)
{
  unsigned int i,j;
  for(i=0;i<nms;i++)
  {
    for(j=0;j<123;j++)
    {
      
    }
  }
}

static void LED_0()
{   
   if(KEY1==0)
   {
  while(1)
  {
    LED1=0;
    DelayNms(500);
    LED1=1;
    
    LED2=0;
    DelayNms(500);
    LED2=1;
    
    LED3=0;
    DelayNms(500);
    LED3=1;
    
    LED4=0;
    DelayNms(500);
    LED4=1;
  
    if(KEY1==1)
    {break;}
    
  }
  }

   if(KEY1==1)
   {
     LED1=1;
     LED2=1;
     LED3=1;
   }
}

static void LED_1()
{
  if(KEY2==0)
  {
  while(1)
  {
    LED1=0;
    DelayNms(500);
    
    LED2=0;
    DelayNms(500);
    
    LED3=0;
    DelayNms(500);
    
    LED4=0;
    DelayNms(500);
    LED4=1;
    
    DelayNms(500);
    LED3=1;
    
    DelayNms(500);
    LED2=1;
    
    DelayNms(500);
    LED1=1;
    DelayNms(500);
    
    if(KEY2==1)
    {break;}
  }
  }
}
    
static void LED_2()
{
  if(KEY3==0)
  {
  while(1)
  {
    LED4=0;
    DelayNms(500);
    LED4=1;
    
    LED3=0;
    DelayNms(500);
    LED3=1;
    
    LED2=0;
    DelayNms(500);
    LED2=1;
    
    LED1=0;
    DelayNms(500);
    LED1=1;
    
    if(KEY3==1)
    {
      break;
    }
  }
  }
}

 void main()
{
  while(1)
  {
    if(0==KEY1)
    {
      DelayNms(50);   
        LED_0();
        /*while(0==KEY1);*/
    }
    
    if(0==KEY2)
    {
      DelayNms(50);
        LED_1();
    }
    
    if(0==KEY3)
    {
      DelayNms(50);
        LED_2();
    }
    
  }
}
