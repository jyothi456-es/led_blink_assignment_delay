void delay_ms(unsigned int userdelay_ms)//here userdelay_ms is userdefined variable 
{
userdelay_ms=userdelay_ms*12000;//Arm microcontroller system frequency 12Mhz its which gives the required Delay
while(userdelay_ms--);//It gives the functionality of the delay in milli seconds
}

/*
void delay_us(unsigned int userdelay_us)
{
userdelay_us=userdelay_us*12;//Arm microcontroller system frequency 12Mhz its which gives the required Delay
while(userdelay_us--);//It gives the functionality of the delay in milli seconds
}
void delay_s(unsigned int userdelay_s)
{
userdelay_s=userdelay_s*12000000;//Arm microcontroller system frequency 12Mhz its which gives the required Delay
while(userdelay_s--);//It gives the functionality of the delay in milli seconds
}
*/