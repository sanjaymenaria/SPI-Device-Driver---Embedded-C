#include "types.h"
#include "hw_ioport.h"
#include "spi.h"
#include "hw_spi.h"

//SET SPI MODE

void Set_SPI_Mode(u8_t spi_mode)
{
	MSTR = spi_mode;
}

void Set_SPI(u8_t spi_set)
{
	SPE=spi_set;
}

// SET INTERRUPT MODE

 void Set_SPI_Interrupt(u8_t spi_Int)
{
	SPIE=spi_Int;
}

//SET DATA ORDER

void Set_SPI_DataOrder(u8_t spi_dord)
{
	DORD=spi_dord;
}

void Set_SPI_Clock(u8_t spi_clk)
{
	switch(spi_clk)
	{
		case SPI_Fosc_DIV_2:
							SPI2X=1;
							SPR0=0;
							SPR1=0;
							break;

		case SPI_Fosc_DIV_4:
							SPI2X=0;
							SPR0=0;
							SPR1=0;
							break;

		case SPI_Fosc_DIV_8:
							SPI2X=1;
							SPR0=0;
							SPR1=1;
							break;

		case SPI_Fosc_DIV_16:
							SPI2X=0;
							SPR0=1;
							SPR1=0;
							break;

		case SPI_Fosc_DIV_32:
							SPI2X=1;
							SPR0=0;
							SPR1=1;
							break;

		case SPI_Fosc_DIV_64:
							SPI2X=0;
							SPR0=0;
							SPR1=1;
							break;

		case SPI_Fosc_DIV_128:
							SPI2X=0;
							SPR0=1;
							SPR1=1;
							break;


	}

}

void Reset_SPI_Flag(void)
{
	SPIF=1;
}

//SPI DEVICE DRIVER  GET FUNCTION

bool_t Get_SPI_Status(void)
{
	bool_t status=0;
	status=SPIF;
	return(status);

}

void Config_SPI(void)
{
	Set_SPI_Mode(MASTER);
	Set_SPI_Interrupt(DISABLE);
	Set_SPI_Clock(SPI_Fosc_DIV_64);
	Set_SPI(ENABLE);
	Set_SPI_DataOrder(LSB_FIRST);
}

void SPI_Master_Send(u8_t spi_data)
{	
	SPDR=spi_data;
	while(!Get_SPI_Status());
}

void Config_SPI_Io(void)
{
	DDB7=1;
	DDB5=1;
	DDB6=0;
	DDB4=1;
}












