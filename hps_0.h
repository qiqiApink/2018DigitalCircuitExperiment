#ifndef _ALTERA_HPS_0_H_
#define _ALTERA_HPS_0_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'hps' in
 * file './hps.sopcinfo'.
 */

/*
 * This file contains macros for module 'hps_0' and devices
 * connected to the following masters:
 *   h2f_axi_master
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'M', class 'altera_avalon_onchip_memory2'
 * The macros are prefixed with 'M_'.
 * The prefix is the slave descriptor.
 */
#define M_COMPONENT_TYPE altera_avalon_onchip_memory2
#define M_COMPONENT_NAME M
#define M_BASE 0x0
#define M_SPAN 16384
#define M_END 0x3fff
#define M_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define M_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define M_CONTENTS_INFO ""
#define M_DUAL_PORT 1
#define M_GUI_RAM_BLOCK_TYPE AUTO
#define M_INIT_CONTENTS_FILE hps_M
#define M_INIT_MEM_CONTENT 1
#define M_INSTANCE_ID NONE
#define M_NON_DEFAULT_INIT_FILE_ENABLED 0
#define M_RAM_BLOCK_TYPE AUTO
#define M_READ_DURING_WRITE_MODE DONT_CARE
#define M_SINGLE_CLOCK_OP 0
#define M_SIZE_MULTIPLE 1
#define M_SIZE_VALUE 16384
#define M_WRITABLE 1
#define M_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define M_MEMORY_INFO_GENERATE_DAT_SYM 1
#define M_MEMORY_INFO_GENERATE_HEX 1
#define M_MEMORY_INFO_HAS_BYTE_LANE 0
#define M_MEMORY_INFO_HEX_INSTALL_DIR QPF_DIR
#define M_MEMORY_INFO_MEM_INIT_DATA_WIDTH 128
#define M_MEMORY_INFO_MEM_INIT_FILENAME hps_M

/*
 * Macros for device 'interrupt', class 'altera_avalon_pio'
 * The macros are prefixed with 'INTERRUPT_'.
 * The prefix is the slave descriptor.
 */
#define INTERRUPT_COMPONENT_TYPE altera_avalon_pio
#define INTERRUPT_COMPONENT_NAME interrupt
#define INTERRUPT_BASE 0x0
#define INTERRUPT_SPAN 16
#define INTERRUPT_END 0xf
#define INTERRUPT_IRQ 9
#define INTERRUPT_BIT_CLEARING_EDGE_REGISTER 0
#define INTERRUPT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define INTERRUPT_CAPTURE 0
#define INTERRUPT_DATA_WIDTH 1
#define INTERRUPT_DO_TEST_BENCH_WIRING 0
#define INTERRUPT_DRIVEN_SIM_VALUE 0
#define INTERRUPT_EDGE_TYPE NONE
#define INTERRUPT_FREQ 50000000
#define INTERRUPT_HAS_IN 1
#define INTERRUPT_HAS_OUT 1
#define INTERRUPT_HAS_TRI 0
#define INTERRUPT_IRQ_TYPE LEVEL
#define INTERRUPT_RESET_VALUE 0

/*
 * Macros for device 'start', class 'altera_avalon_pio'
 * The macros are prefixed with 'START_'.
 * The prefix is the slave descriptor.
 */
#define START_COMPONENT_TYPE altera_avalon_pio
#define START_COMPONENT_NAME start
#define START_BASE 0x10
#define START_SPAN 16
#define START_END 0x1f
#define START_BIT_CLEARING_EDGE_REGISTER 0
#define START_BIT_MODIFYING_OUTPUT_REGISTER 0
#define START_CAPTURE 0
#define START_DATA_WIDTH 1
#define START_DO_TEST_BENCH_WIRING 0
#define START_DRIVEN_SIM_VALUE 0
#define START_EDGE_TYPE NONE
#define START_FREQ 50000000
#define START_HAS_IN 1
#define START_HAS_OUT 1
#define START_HAS_TRI 0
#define START_IRQ_TYPE NONE
#define START_RESET_VALUE 0

/*
 * Macros for device 'h', class 'altera_avalon_pio'
 * The macros are prefixed with 'H_'.
 * The prefix is the slave descriptor.
 */
#define H_COMPONENT_TYPE altera_avalon_pio
#define H_COMPONENT_NAME h
#define H_BASE 0x20
#define H_SPAN 16
#define H_END 0x2f
#define H_BIT_CLEARING_EDGE_REGISTER 0
#define H_BIT_MODIFYING_OUTPUT_REGISTER 0
#define H_CAPTURE 0
#define H_DATA_WIDTH 32
#define H_DO_TEST_BENCH_WIRING 0
#define H_DRIVEN_SIM_VALUE 0
#define H_EDGE_TYPE NONE
#define H_FREQ 50000000
#define H_HAS_IN 1
#define H_HAS_OUT 1
#define H_HAS_TRI 0
#define H_IRQ_TYPE NONE
#define H_RESET_VALUE 0

/*
 * Macros for device 'g', class 'altera_avalon_pio'
 * The macros are prefixed with 'G_'.
 * The prefix is the slave descriptor.
 */
#define G_COMPONENT_TYPE altera_avalon_pio
#define G_COMPONENT_NAME g
#define G_BASE 0x30
#define G_SPAN 16
#define G_END 0x3f
#define G_BIT_CLEARING_EDGE_REGISTER 0
#define G_BIT_MODIFYING_OUTPUT_REGISTER 0
#define G_CAPTURE 0
#define G_DATA_WIDTH 32
#define G_DO_TEST_BENCH_WIRING 0
#define G_DRIVEN_SIM_VALUE 0
#define G_EDGE_TYPE NONE
#define G_FREQ 50000000
#define G_HAS_IN 1
#define G_HAS_OUT 1
#define G_HAS_TRI 0
#define G_IRQ_TYPE NONE
#define G_RESET_VALUE 0

/*
 * Macros for device 'f', class 'altera_avalon_pio'
 * The macros are prefixed with 'F_'.
 * The prefix is the slave descriptor.
 */
#define F_COMPONENT_TYPE altera_avalon_pio
#define F_COMPONENT_NAME f
#define F_BASE 0x40
#define F_SPAN 16
#define F_END 0x4f
#define F_BIT_CLEARING_EDGE_REGISTER 0
#define F_BIT_MODIFYING_OUTPUT_REGISTER 0
#define F_CAPTURE 0
#define F_DATA_WIDTH 32
#define F_DO_TEST_BENCH_WIRING 0
#define F_DRIVEN_SIM_VALUE 0
#define F_EDGE_TYPE NONE
#define F_FREQ 50000000
#define F_HAS_IN 1
#define F_HAS_OUT 1
#define F_HAS_TRI 0
#define F_IRQ_TYPE NONE
#define F_RESET_VALUE 0

/*
 * Macros for device 'e', class 'altera_avalon_pio'
 * The macros are prefixed with 'E_'.
 * The prefix is the slave descriptor.
 */
#define E_COMPONENT_TYPE altera_avalon_pio
#define E_COMPONENT_NAME e
#define E_BASE 0x50
#define E_SPAN 16
#define E_END 0x5f
#define E_BIT_CLEARING_EDGE_REGISTER 0
#define E_BIT_MODIFYING_OUTPUT_REGISTER 0
#define E_CAPTURE 0
#define E_DATA_WIDTH 32
#define E_DO_TEST_BENCH_WIRING 0
#define E_DRIVEN_SIM_VALUE 0
#define E_EDGE_TYPE NONE
#define E_FREQ 50000000
#define E_HAS_IN 1
#define E_HAS_OUT 1
#define E_HAS_TRI 0
#define E_IRQ_TYPE NONE
#define E_RESET_VALUE 0

/*
 * Macros for device 'd', class 'altera_avalon_pio'
 * The macros are prefixed with 'D_'.
 * The prefix is the slave descriptor.
 */
#define D_COMPONENT_TYPE altera_avalon_pio
#define D_COMPONENT_NAME d
#define D_BASE 0x60
#define D_SPAN 16
#define D_END 0x6f
#define D_BIT_CLEARING_EDGE_REGISTER 0
#define D_BIT_MODIFYING_OUTPUT_REGISTER 0
#define D_CAPTURE 0
#define D_DATA_WIDTH 32
#define D_DO_TEST_BENCH_WIRING 0
#define D_DRIVEN_SIM_VALUE 0
#define D_EDGE_TYPE NONE
#define D_FREQ 50000000
#define D_HAS_IN 1
#define D_HAS_OUT 1
#define D_HAS_TRI 0
#define D_IRQ_TYPE NONE
#define D_RESET_VALUE 0

/*
 * Macros for device 'c', class 'altera_avalon_pio'
 * The macros are prefixed with 'C_'.
 * The prefix is the slave descriptor.
 */
#define C_COMPONENT_TYPE altera_avalon_pio
#define C_COMPONENT_NAME c
#define C_BASE 0x70
#define C_SPAN 16
#define C_END 0x7f
#define C_BIT_CLEARING_EDGE_REGISTER 0
#define C_BIT_MODIFYING_OUTPUT_REGISTER 0
#define C_CAPTURE 0
#define C_DATA_WIDTH 32
#define C_DO_TEST_BENCH_WIRING 0
#define C_DRIVEN_SIM_VALUE 0
#define C_EDGE_TYPE NONE
#define C_FREQ 50000000
#define C_HAS_IN 1
#define C_HAS_OUT 1
#define C_HAS_TRI 0
#define C_IRQ_TYPE NONE
#define C_RESET_VALUE 0

/*
 * Macros for device 'b', class 'altera_avalon_pio'
 * The macros are prefixed with 'B_'.
 * The prefix is the slave descriptor.
 */
#define B_COMPONENT_TYPE altera_avalon_pio
#define B_COMPONENT_NAME b
#define B_BASE 0x80
#define B_SPAN 16
#define B_END 0x8f
#define B_BIT_CLEARING_EDGE_REGISTER 0
#define B_BIT_MODIFYING_OUTPUT_REGISTER 0
#define B_CAPTURE 0
#define B_DATA_WIDTH 32
#define B_DO_TEST_BENCH_WIRING 0
#define B_DRIVEN_SIM_VALUE 0
#define B_EDGE_TYPE NONE
#define B_FREQ 50000000
#define B_HAS_IN 1
#define B_HAS_OUT 1
#define B_HAS_TRI 0
#define B_IRQ_TYPE NONE
#define B_RESET_VALUE 0

/*
 * Macros for device 'a', class 'altera_avalon_pio'
 * The macros are prefixed with 'A_'.
 * The prefix is the slave descriptor.
 */
#define A_COMPONENT_TYPE altera_avalon_pio
#define A_COMPONENT_NAME a
#define A_BASE 0x90
#define A_SPAN 16
#define A_END 0x9f
#define A_BIT_CLEARING_EDGE_REGISTER 0
#define A_BIT_MODIFYING_OUTPUT_REGISTER 0
#define A_CAPTURE 0
#define A_DATA_WIDTH 32
#define A_DO_TEST_BENCH_WIRING 0
#define A_DRIVEN_SIM_VALUE 0
#define A_EDGE_TYPE NONE
#define A_FREQ 50000000
#define A_HAS_IN 1
#define A_HAS_OUT 1
#define A_HAS_TRI 0
#define A_IRQ_TYPE NONE
#define A_RESET_VALUE 0

/*
 * Macros for device 'h_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'H_INIT_'.
 * The prefix is the slave descriptor.
 */
#define H_INIT_COMPONENT_TYPE altera_avalon_pio
#define H_INIT_COMPONENT_NAME h_init
#define H_INIT_BASE 0xa0
#define H_INIT_SPAN 16
#define H_INIT_END 0xaf
#define H_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define H_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define H_INIT_CAPTURE 0
#define H_INIT_DATA_WIDTH 32
#define H_INIT_DO_TEST_BENCH_WIRING 0
#define H_INIT_DRIVEN_SIM_VALUE 0
#define H_INIT_EDGE_TYPE NONE
#define H_INIT_FREQ 50000000
#define H_INIT_HAS_IN 1
#define H_INIT_HAS_OUT 1
#define H_INIT_HAS_TRI 0
#define H_INIT_IRQ_TYPE NONE
#define H_INIT_RESET_VALUE 0

/*
 * Macros for device 'g_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'G_INIT_'.
 * The prefix is the slave descriptor.
 */
#define G_INIT_COMPONENT_TYPE altera_avalon_pio
#define G_INIT_COMPONENT_NAME g_init
#define G_INIT_BASE 0xb0
#define G_INIT_SPAN 16
#define G_INIT_END 0xbf
#define G_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define G_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define G_INIT_CAPTURE 0
#define G_INIT_DATA_WIDTH 32
#define G_INIT_DO_TEST_BENCH_WIRING 0
#define G_INIT_DRIVEN_SIM_VALUE 0
#define G_INIT_EDGE_TYPE NONE
#define G_INIT_FREQ 50000000
#define G_INIT_HAS_IN 1
#define G_INIT_HAS_OUT 1
#define G_INIT_HAS_TRI 0
#define G_INIT_IRQ_TYPE NONE
#define G_INIT_RESET_VALUE 0

/*
 * Macros for device 'f_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'F_INIT_'.
 * The prefix is the slave descriptor.
 */
#define F_INIT_COMPONENT_TYPE altera_avalon_pio
#define F_INIT_COMPONENT_NAME f_init
#define F_INIT_BASE 0xc0
#define F_INIT_SPAN 16
#define F_INIT_END 0xcf
#define F_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define F_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define F_INIT_CAPTURE 0
#define F_INIT_DATA_WIDTH 32
#define F_INIT_DO_TEST_BENCH_WIRING 0
#define F_INIT_DRIVEN_SIM_VALUE 0
#define F_INIT_EDGE_TYPE NONE
#define F_INIT_FREQ 50000000
#define F_INIT_HAS_IN 1
#define F_INIT_HAS_OUT 1
#define F_INIT_HAS_TRI 0
#define F_INIT_IRQ_TYPE NONE
#define F_INIT_RESET_VALUE 0

/*
 * Macros for device 'e_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'E_INIT_'.
 * The prefix is the slave descriptor.
 */
#define E_INIT_COMPONENT_TYPE altera_avalon_pio
#define E_INIT_COMPONENT_NAME e_init
#define E_INIT_BASE 0xd0
#define E_INIT_SPAN 16
#define E_INIT_END 0xdf
#define E_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define E_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define E_INIT_CAPTURE 0
#define E_INIT_DATA_WIDTH 32
#define E_INIT_DO_TEST_BENCH_WIRING 0
#define E_INIT_DRIVEN_SIM_VALUE 0
#define E_INIT_EDGE_TYPE NONE
#define E_INIT_FREQ 50000000
#define E_INIT_HAS_IN 1
#define E_INIT_HAS_OUT 1
#define E_INIT_HAS_TRI 0
#define E_INIT_IRQ_TYPE NONE
#define E_INIT_RESET_VALUE 0

/*
 * Macros for device 'd_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'D_INIT_'.
 * The prefix is the slave descriptor.
 */
#define D_INIT_COMPONENT_TYPE altera_avalon_pio
#define D_INIT_COMPONENT_NAME d_init
#define D_INIT_BASE 0xe0
#define D_INIT_SPAN 16
#define D_INIT_END 0xef
#define D_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define D_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define D_INIT_CAPTURE 0
#define D_INIT_DATA_WIDTH 32
#define D_INIT_DO_TEST_BENCH_WIRING 0
#define D_INIT_DRIVEN_SIM_VALUE 0
#define D_INIT_EDGE_TYPE NONE
#define D_INIT_FREQ 50000000
#define D_INIT_HAS_IN 1
#define D_INIT_HAS_OUT 1
#define D_INIT_HAS_TRI 0
#define D_INIT_IRQ_TYPE NONE
#define D_INIT_RESET_VALUE 0

/*
 * Macros for device 'c_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'C_INIT_'.
 * The prefix is the slave descriptor.
 */
#define C_INIT_COMPONENT_TYPE altera_avalon_pio
#define C_INIT_COMPONENT_NAME c_init
#define C_INIT_BASE 0xf0
#define C_INIT_SPAN 16
#define C_INIT_END 0xff
#define C_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define C_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define C_INIT_CAPTURE 0
#define C_INIT_DATA_WIDTH 32
#define C_INIT_DO_TEST_BENCH_WIRING 0
#define C_INIT_DRIVEN_SIM_VALUE 0
#define C_INIT_EDGE_TYPE NONE
#define C_INIT_FREQ 50000000
#define C_INIT_HAS_IN 1
#define C_INIT_HAS_OUT 1
#define C_INIT_HAS_TRI 0
#define C_INIT_IRQ_TYPE NONE
#define C_INIT_RESET_VALUE 0

/*
 * Macros for device 'b_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'B_INIT_'.
 * The prefix is the slave descriptor.
 */
#define B_INIT_COMPONENT_TYPE altera_avalon_pio
#define B_INIT_COMPONENT_NAME b_init
#define B_INIT_BASE 0x100
#define B_INIT_SPAN 16
#define B_INIT_END 0x10f
#define B_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define B_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define B_INIT_CAPTURE 0
#define B_INIT_DATA_WIDTH 32
#define B_INIT_DO_TEST_BENCH_WIRING 0
#define B_INIT_DRIVEN_SIM_VALUE 0
#define B_INIT_EDGE_TYPE NONE
#define B_INIT_FREQ 50000000
#define B_INIT_HAS_IN 1
#define B_INIT_HAS_OUT 1
#define B_INIT_HAS_TRI 0
#define B_INIT_IRQ_TYPE NONE
#define B_INIT_RESET_VALUE 0

/*
 * Macros for device 'a_init', class 'altera_avalon_pio'
 * The macros are prefixed with 'A_INIT_'.
 * The prefix is the slave descriptor.
 */
#define A_INIT_COMPONENT_TYPE altera_avalon_pio
#define A_INIT_COMPONENT_NAME a_init
#define A_INIT_BASE 0x110
#define A_INIT_SPAN 16
#define A_INIT_END 0x11f
#define A_INIT_BIT_CLEARING_EDGE_REGISTER 0
#define A_INIT_BIT_MODIFYING_OUTPUT_REGISTER 0
#define A_INIT_CAPTURE 0
#define A_INIT_DATA_WIDTH 32
#define A_INIT_DO_TEST_BENCH_WIRING 0
#define A_INIT_DRIVEN_SIM_VALUE 0
#define A_INIT_EDGE_TYPE NONE
#define A_INIT_FREQ 50000000
#define A_INIT_HAS_IN 1
#define A_INIT_HAS_OUT 1
#define A_INIT_HAS_TRI 0
#define A_INIT_IRQ_TYPE NONE
#define A_INIT_RESET_VALUE 0

/*
 * Macros for device 'CNT_N', class 'altera_avalon_pio'
 * The macros are prefixed with 'CNT_N_'.
 * The prefix is the slave descriptor.
 */
#define CNT_N_COMPONENT_TYPE altera_avalon_pio
#define CNT_N_COMPONENT_NAME CNT_N
#define CNT_N_BASE 0x120
#define CNT_N_SPAN 16
#define CNT_N_END 0x12f
#define CNT_N_BIT_CLEARING_EDGE_REGISTER 0
#define CNT_N_BIT_MODIFYING_OUTPUT_REGISTER 0
#define CNT_N_CAPTURE 0
#define CNT_N_DATA_WIDTH 8
#define CNT_N_DO_TEST_BENCH_WIRING 0
#define CNT_N_DRIVEN_SIM_VALUE 0
#define CNT_N_EDGE_TYPE NONE
#define CNT_N_FREQ 50000000
#define CNT_N_HAS_IN 1
#define CNT_N_HAS_OUT 1
#define CNT_N_HAS_TRI 0
#define CNT_N_IRQ_TYPE NONE
#define CNT_N_RESET_VALUE 0

/*
 * Macros for device 'K', class 'altera_avalon_onchip_memory2'
 * The macros are prefixed with 'K_'.
 * The prefix is the slave descriptor.
 */
#define K_COMPONENT_TYPE altera_avalon_onchip_memory2
#define K_COMPONENT_NAME K
#define K_BASE 0x4000
#define K_SPAN 256
#define K_END 0x40ff
#define K_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define K_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define K_CONTENTS_INFO ""
#define K_DUAL_PORT 1
#define K_GUI_RAM_BLOCK_TYPE AUTO
#define K_INIT_CONTENTS_FILE hps_K
#define K_INIT_MEM_CONTENT 1
#define K_INSTANCE_ID NONE
#define K_NON_DEFAULT_INIT_FILE_ENABLED 0
#define K_RAM_BLOCK_TYPE AUTO
#define K_READ_DURING_WRITE_MODE DONT_CARE
#define K_SINGLE_CLOCK_OP 0
#define K_SIZE_MULTIPLE 1
#define K_SIZE_VALUE 256
#define K_WRITABLE 1
#define K_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define K_MEMORY_INFO_GENERATE_DAT_SYM 1
#define K_MEMORY_INFO_GENERATE_HEX 1
#define K_MEMORY_INFO_HAS_BYTE_LANE 0
#define K_MEMORY_INFO_HEX_INSTALL_DIR QPF_DIR
#define K_MEMORY_INFO_MEM_INIT_DATA_WIDTH 128
#define K_MEMORY_INFO_MEM_INIT_FILENAME hps_K


#endif /* _ALTERA_HPS_0_H_ */
