#ifndef HW_SPI_H
#define HW_SPI_H

#define SPI_CONTROL_REG (*(volatile Register_t*)0x2D)

#define	SPCR	SPI_CONTROL_REG.Byte
#define	SPR0	SPI_CONTROL_REG.Bit.B0
#define	SPR1	SPI_CONTROL_REG.Bit.B1
#define	CPHA	SPI_CONTROL_REG.Bit.B2
#define	CPOL	SPI_CONTROL_REG.Bit.B3
#define	MSTR	SPI_CONTROL_REG.Bit.B4
#define	DORD	SPI_CONTROL_REG.Bit.B5
#define	SPE		SPI_CONTROL_REG.Bit.B6
#define	SPIE	SPI_CONTROL_REG.Bit.B7



#define SPI_STATUS_REG (*(volatile Register_t*)0x2E)

#define	SPSR	SPI_STATUS_REG.Byte
#define	SPI2X	SPI_STATUS_REG.Bit.B0
#define	WCOL	SPI_STATUS_REG.Bit.B6
#define	SPIF	SPI_STATUS_REG.Bit.B7


#define SPI_DATA_REG (*(volatile Register_t*)0x2F)

#define SPDR	SPI_DATA_REG.Byte



#endif
