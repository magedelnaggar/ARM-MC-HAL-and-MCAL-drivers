/****************************************************************
 ************   - SPI_interface.h		       ******************
 ***********					   		       ******************
 ***********   - Created: 3/15/2020			   ******************
 ***********   - Author: Maged Elnaggar        ******************
 ***********   - Version : _1_				   ******************
 ****************************************************************/ 

/****************************************************************
***********  guard of file will call on time in .c  *************
******************************************************************/ 

#ifndef SPI_INTERFACE_H
#define SPI_INTERFACE_H

void MSPI1_voidInit(void);
void SPI_voidInitHardCode(void);
 //	Function Synh = Wait Until Job End 
void MSPI1_voidSendReceiveSynch(u8 Copy_u8DataToTransmit  , u8 *Copy_DataToReceive); // Send & Receive  @ Same Time (It is full doublex ) 
 // Function Asynch = Must have call back here must be u8 becuse it will send as return data  
 void MSPI1_voidSendReceiveSynch(u8 Copy_u8DataToTransmit  , void (*CallBack)(u8));

 void MSPI1_voidInitForTFT(void);

#endif //SPI_INTERFACE_H
