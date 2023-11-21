
#define ONE_OF_ELEVEN_VER

/*
#ifdef GIT_HASH
	#define VER     GIT_HASH
#else
	#define VER     "231004"
#endif*/

#define VER     "231120"

#ifndef ONE_OF_ELEVEN_VER
	const char Version[]      = "OEFW-"VER;
	const char UART_Version[] = "UV-K5 Firmware, Open Edition, OEFW-"VER"\r\n";
#else
	//const char Version[]      = "1o11+fagci-"VER;
	const char Version[]      = VER" JOAQUIM";
	const char UART_Version[] = "UV-K5 Firmware, Open Edition, 1o11+fagci-"VER"\r\n";
#endif
