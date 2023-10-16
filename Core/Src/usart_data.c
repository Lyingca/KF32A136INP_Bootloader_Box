//
// Created by 14151 on 2023/10/14.
//
#include "usart_data.h"

uint8_t usart1_rx_buffer[BUFFER_SIZE] = {0};
uint8_t usart1_dma_buffer[BUFFER_SIZE] = {0};
volatile uint8_t usart1_rx_len = 0;
volatile uint8_t usart1_recv_end_flag = 0;

uint8_t usart2_rx_buffer[BUFFER_SIZE] = {0};
uint8_t usart2_dma_buffer[BUFFER_SIZE] = {0};
volatile uint8_t usart2_rx_len = 0;
volatile uint8_t usart2_recv_end_flag = 0;

