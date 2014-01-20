int main(void)
{	
	/* USART1 config 115200 8-N-1 */
	USART1_Config();
	Key_GPIO_Config();	
	while(1)
	{
		if(Key_Scan(GPIOE,GPIO_Pin_5) == KEY_ON)
		{printf("\r\n this is a printf demo \r\n");

		printf("\r\n 欢迎使用野火M3实验板:) \r\n");
			
		USART1_printf(USART1, "\r\n This is a USART1_printf demo \r\n");
		
		USART1_printf(USART1, "\r\n ("__DATE__ " - " __TIME__ ") \r\n");

		}
	}
}
