#define ENABLE 1
#define DISABLE 0

#define MSB_FIRST 0
#define LSB_FIRST 1

#define MASTER 1
#define SLAVE 0


#define SPI_Fosc_DIV_2   0
#define SPI_Fosc_DIV_4   1
#define SPI_Fosc_DIV_8   2
#define SPI_Fosc_DIV_16  3
#define SPI_Fosc_DIV_32  4
#define SPI_Fosc_DIV_64  5
#define SPI_Fosc_DIV_128 6

#define SET 1
#define RESET 0



void Config_SPI_Io(void);

void Set_SPI_Mode(u8_t spi_mode);

void Set_SPI(u8_t spi_set);

void Set_SPI_Interrupt(u8_t spi_Int);

void Set_SPI_DataOrder(u8_t spi_dord);

void Set_SPI_Clock(u8_t spi_clk);

void Reset_SPI_Flag(void);

bool_t Get_SPI_Status(void);

void Config_SPI(void);

void SPI_Master_Send(u8_t spi_data);
