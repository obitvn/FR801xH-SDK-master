/**
 * Copyright (c) 2019, Freqchip
 * 
 * All rights reserved.
 * 
 * 
 */
 
#ifndef PROJ_ADV_TEST_H
#define PROJ_ADV_TEST_H


 /*
 * INCLUDES (����ͷ�ļ�)
 */

/*
 * MACROS (�궨��)
 */
#define TEST_ADV_MODE_UNDIRECT   (0)
#define TEST_ADV_MODE_DIRECT     (0)
#define TEST_ADV_MODE_HDC_DIRECT (0)

#define TEST_ADV_MODE_EXTEND_CONN_UNDIRECT   (0)
#define TEST_ADV_MODE_EXTEND_CONN_DIRECT     (0)
#define TEST_ADV_MODE_EXTEND_NON_CONN_SCAN   (0)
#define TEST_ADV_MODE_EXTEND_CONN_UNDIRECT_LONGRANGE   (0)
#define TEST_ADV_MODE_EXTEND_CONN_DIRECT_LONGRANGE     (0)
#define TEST_ADV_MODE_EXTEND_NON_CONN_SCAN_LONGRANGE   (0)
#define TEST_ADV_MODE_PER_ADV_UNDIRECT       (0)
#define TEST_ADV_MODE_PER_ADV_DIRECT         (0)

#define TEST_ADV_MODE_UNDIRECT_WHITE_LIST         (0)
#define TEST_ADV_MODE_UNDIRECT_DOUBLE_ADV         (1)


#define TEST_BOARD_ADV                  (1)
#define TEST_BOARD_SCAN_OR_CONN         (0)

/*
 * CONSTANTS (��������)
 */


/*
 * TYPEDEFS (���Ͷ���)
 */
/*
 * GLOBAL VARIABLES (ȫ�ֱ���)
 */

/*
 * LOCAL VARIABLES (���ر���)
 */

/*
 * LOCAL FUNCTIONS (���غ���)
 */

/*
 * EXTERN FUNCTIONS (�ⲿ����)
 */

/*
 * PUBLIC FUNCTIONS (ȫ�ֺ���)
 */
void start_adv(void);
void start_scan_Or_conn(void);


#endif // end of #ifndef PROJ_ADV_TEST_H

