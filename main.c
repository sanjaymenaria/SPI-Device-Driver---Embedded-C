#include "types.h"
#include "hw_ioport.h"
#include "spi.h"
#include "hw_spi.h"

int main(void)
{
	Config_SPI();
	Config_SPI_Io();
	SPI_Master_Send(0x55);
	
}
