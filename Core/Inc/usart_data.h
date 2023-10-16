//
// Created by 14151 on 2023/10/14.
//

#ifndef KF32A136INP_BOOTLOADER_BOX_USART_DATA_H
#define KF32A136INP_BOOTLOADER_BOX_USART_DATA_H

#include "main.h"

#define BUFFER_SIZE 256

extern uint8_t usart1_rx_buffer[BUFFER_SIZE];
extern uint8_t usart1_dma_buffer[BUFFER_SIZE];
extern volatile uint8_t usart1_rx_len;
extern volatile uint8_t usart1_recv_end_flag;

extern uint8_t usart2_rx_buffer[BUFFER_SIZE];
extern uint8_t usart2_dma_buffer[BUFFER_SIZE];
extern volatile uint8_t usart2_rx_len;
extern volatile uint8_t usart2_recv_end_flag;

#endif //KF32A136INP_BOOTLOADER_BOX_USART_DATA_H
