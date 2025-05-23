/*
 * =============================================================================
 *
 *                   Copyright (c) 2025 BSC
 *                             All rights reserved
 *
 * This file contains BSC proprietary and confidential information and has
 * been developed by BSC within the EPI-SGA1 Project (GA 826647).
 * The permission rights for this file are governed by the EPI Grant Agreement
 * and the EPI Consortium Agreement.
 *
 * ===============================[ INFORMATION ]===============================
 *
 * Author(s)  : Rafel Albert Bros Esqueu
                Fabio Banchelli
 * Contact(s) : rafel.brosesqueu@bsc.es
                fabio.banchelli@bsc.es
 */

/*
 * SpacemiT K1 8 RISC-V Core
 */

static const riscv_entry_t riscv_spacemit_k1_8_pe[] = {
/* INSTRUCTION group events */
{.name = "alu_inst",
     .code = 0x0024,
     .desc = "ALU (integer) instructions"},
{.name = "mult_inst",
     .code = 0x0025,
     .desc = "Multiplication instructions"},
{.name = "div_inst",
     .code = 0x0026,
     .desc = "Division instructions"},
{.name = "vector_div_inst",
     .code = 0x0027,
     .desc = "Vector division instructions"},
{.name = "fp_div_inst",
     .code = 0x0028,
     .desc = "Floating-point division instructions"},
{.name = "csr_inst",
     .code = 0x0029,
     .desc = "CSR instructions"},
{.name = "ecall_inst",
     .code = 0x002A,
     .desc = "ECALL instructions"},
{.name = "fp_inst",
     .code = 0x002B,
     .desc = "Floating-point instructions"},
{.name = "store_inst",
     .code = 0x002C,
     .desc = "Store instructions"},
{.name = "load_inst",
     .code = 0x002D,
     .desc = "Load instructions"},
{.name = "unaligned_load_inst",
     .code = 0x002E,
     .desc = "Unaligned load instructions"},
{.name = "unaligned_store_inst",
     .code = 0x002F,
     .desc = "Unaligned store instructions"},
{.name = "atomic_inst",
     .code = 0x0030,
     .desc = "Atomic instructions"},
{.name = "lr_inst",
     .code = 0x0031,
     .desc = "LR instructions"},
{.name = "sc_inst",
     .code = 0x0032,
     .desc = "SC instructions"},
{.name = "amo_inst",
     .code = 0x0033,
     .desc = "AMO instructions"},
{.name = "fence_inst",
     .code = 0x0034,
     .desc = "FENCE instructions"},
{.name = "failed_sc_inst",
     .code = 0x0035,
     .desc = "Failed SC instructions"},
{.name = "bus_fence_inst",
     .code = 0x0036,
     .desc = "Bus FENCE instructions"},
{.name = "fp_load_inst",
     .code = 0x0037,
     .desc = "Floating-point load instructions"},
{.name = "fp_store_inst",
     .code = 0x0038,
     .desc = "Floating-point store instructions"},
{.name = "vector_load_inst",
     .code = 0x0039,
     .desc = "Vector load instructions"},
{.name = "vector_store_inst",
     .code = 0x003A,
     .desc = "Vector store instructions"},
{.name = "vector_inst",
     .code = 0x003B,
     .desc = "Vector instructions"},
/* BRANCH group events */
{.name = "cond_br_inst",
     .code = 0x0001,
     .desc = "Conditional branch instructions"},
{.name = "cond_br_mispred",
     .code = 0x0002,
     .desc = "Conditional branch mispredictions"},
{.name = "br_inst",
     .code = 0x003C,
     .desc = "Branch instructions"},
{.name = "uncond_br_inst",
     .code = 0x003D,
     .desc = "Unconditional branch instructions"},
{.name = "indirect_br_inst",
     .code = 0x003E,
     .desc = "Indirect branch instructions"},
{.name = "indirect_br_mispred",
     .code = 0x0042,
     .desc = "Indirect branch mispredictions"},
{.name = "br_mispred",
     .code = 0x0045,
     .desc = "Branch mispredictions"},
{.name = "uncond_br_mispred",
     .code = 0x0046,
     .desc = "Unconditional branch mispredictions"},
{.name = "taken_br_mispred",
     .code = 0x0047,
     .desc = "Taken branch mispredictions"},
{.name = "taken_cond_br_inst",
     .code = 0x0048,
     .desc = "Taken conditional branch instructions"},
{.name = "taken_cond_br_mispred",
     .code = 0x0049,
     .desc = "Taken conditional branch mispredictions"},
{.name = "long_jump",
     .code = 0x004A,
     .desc = "Long jumps"},
/* CACHE group events */
{.name = "l1d_load_miss",
     .code = 0x0005,
     .desc = "L1 D-cache load misses"},
{.name = "l1d_load_access",
     .code = 0x0006,
     .desc = "L1 D-cache load accesses"},
{.name = "l1d_store_miss",
     .code = 0x0009,
     .desc = "L1 D-cache store misses"},
{.name = "l1d_store_access",
     .code = 0x000A,
     .desc = "L1 D-cache store accesses"},
{.name = "l1i_load_miss",
     .code = 0x000B,
     .desc = "L1 I-cache load misses"},
{.name = "l1i_load_access",
     .code = 0x000C,
     .desc = "L1 I-cache load accesses"},
{.name = "l1i_prefetch_miss",
     .code = 0x000D,
     .desc = "L1 I-cache prefetch misses"},
{.name = "l1i_prefetch",
     .code = 0x000E,
     .desc = "L1 I-cache prefetches"},
{.name = "dtlb_load_miss",
     .code = 0x0015,
     .desc = "DTLB load misses"},
{.name = "dtlb_store_miss",
     .code = 0x0019,
     .desc = "DTLB store misses"},
{.name = "itlb_load_miss",
     .code = 0x001B,
     .desc = "ITLB load misses"},
{.name = "jtlb_miss",
     .code = 0x00A3,
     .desc = "JTLB misses"},
{.name = "l1d_access",
     .code = 0x00AA,
     .desc = "L1 D-cache accesses"},
{.name = "l1d_miss",
     .code = 0x00AB,
     .desc = "L1 D-cache misses"},
{.name = "l1d_excl_evict",
     .code = 0x00AC,
     .desc = "L1 D-cache exclusive evictions to L2"},
{.name = "l1d_amr_active",
     .code = 0x00AD,
     .desc = "L1 D-cache AMR actives"},
{.name = "l1d_prefetch_refill",
     .code = 0x00AE,
     .desc = "L1 D-cache prefetch refills"},
{.name = "l1d_prefetch_hit",
     .code = 0x00AF,
     .desc = "L1 D-cache prefetch hits"},
{.name = "l2_access",
     .code = 0x00B8,
     .desc = "L2 cache accesses"},
{.name = "l2_miss",
     .code = 0x00B9,
     .desc = "L2 cache misses"},
{.name = "l2_load_access",
     .code = 0x00BA,
     .desc = "L2 cache load accesses"},
{.name = "l2_load_stall",
     .code = 0x00BB,
     .desc = "L2 cache load stalls"},
{.name = "l2_store_access",
     .code = 0x00BC,
     .desc = "L2 cache store accesses"},
{.name = "l2_store_stall",
     .code = 0x00BD,
     .desc = "L2 cache store stalls"},
/* MICROARCHITECTURE group events */
{.name = "stalled_cycle_frontend",
     .code = 0x0003,
     .desc = "Stalled cycles frontend"},
{.name = "stalled_cycle_backend",
     .code = 0x0004,
     .desc = "Stalled cycles backend"},
{.name = "m_mode_cycle",
     .code = 0x0020,
     .desc = "M-mode cycles"},
{.name = "s_mode_cycle",
     .code = 0x0021,
     .desc = "S-mode cycles"},
{.name = "u_mode_cycle",
     .code = 0x0022,
     .desc = "U-mode cycles"},
{.name = "pipeline_flush",
     .code = 0x003F,
     .desc = "Pipeline flushes"},
{.name = "interrupt",
     .code = 0x0040,
     .desc = "Interrupts"},
{.name = "exception",
     .code = 0x0041,
     .desc = "Exceptions"},
{.name = "ifu_btb_miss",
     .code = 0x0043,
     .desc = "IFU (Instruction Fetch Unit) BTB misses"},
{.name = "ifu_btb_access",
     .code = 0x0044,
     .desc = "IFU (Instruction Fetch Unit) BTB accesses"},
{.name = "ecc_interrupt",
     .code = 0x004B,
     .desc = "ECC interrupts"},
{.name = "async_abort",
     .code = 0x004C,
     .desc = "Asynchronous aborts"},
{.name = "issued_inst",
     .code = 0x004D,
     .desc = "Issued instructions"},
{.name = "if_stall",
     .code = 0x004E,
     .desc = "IF stalls"},
{.name = "if_mmu_stall",
     .code = 0x004F,
     .desc = "IF-MMU stalls"},
{.name = "if_refill_stall",
     .code = 0x0050,
     .desc = "IF-refill stalls"},
{.name = "ip_stall",
     .code = 0x0051,
     .desc = "IP stalls"},
{.name = "ib_stall",
     .code = 0x0052,
     .desc = "IB stalls"},
{.name = "ib_vsetvl_stall",
     .code = 0x0053,
     .desc = "IB vsetvl stalls"},
{.name = "ib_fifo_stall",
     .code = 0x0054,
     .desc = "IB FIFO stalls"},
{.name = "ib_mispred_stall",
     .code = 0x0055,
     .desc = "IB misprediction stalls"},
{.name = "ib_ind_btd_stall",
     .code = 0x0056,
     .desc = "IB IND BTB stalls"},
{.name = "iq_full",
     .code = 0x0057,
     .desc = "IQ fulls"},
{.name = "id_stall",
     .code = 0x0058,
     .desc = "ID stalls"},
{.name = "id_inst_pipedown",
     .code = 0x0059,
     .desc = "ID instruction pipedowns"},
{.name = "id_one_inst_pipedown",
     .code = 0x005A,
     .desc = "ID one instruction pipedowns"},
{.name = "id_flush_stall",
     .code = 0x005B,
     .desc = "ID flush stalls"},
{.name = "id_vsetvl_fof_stall",
     .code = 0x005C,
     .desc = " "},
{.name = "id_iid_not_vld_stall",
     .code = 0x005D,
     .desc = " "},
{.name = "id_csr_bef_fence_stall",
     .code = 0x005E,
     .desc = " "},
{.name = "id_mispred_stall",
     .code = 0x005F,
     .desc = "ID misprediction stalls"},
{.name = "rf_stall",
     .code = 0x0060,
     .desc = "RF stalls"},
{.name = "rf_inst_pipedown",
     .code = 0x0061,
     .desc = "RF instruction pipedowns"},
{.name = "rf_one_inst_pipedown",
     .code = 0x0062,
     .desc = "RF one instruction pipedowns"},
{.name = "rf_waw_stall",
     .code = 0x0063,
     .desc = "RF WAW stalls"},
{.name = "rf_raw_stall",
     .code = 0x0064,
     .desc = "RF RAW stalls"},
{.name = "rf_csr_aft_fence_stall",
     .code = 0x0065,
     .desc = " "},
{.name = "rf_structure_stall",
     .code = 0x0066,
     .desc = " "},
{.name = "eu_stall",
     .code = 0x0067,
     .desc = "EU (Execution Unit) stalls"},
{.name = "eu_iu_full",
     .code = 0x0068,
     .desc = "EU IU (Integer Unit) fulls"},
{.name = "eu_iu_control_full",
     .code = 0x0069,
     .desc = "EU IU (Integer Unit) control fulls"},
{.name = "eu_bju_full",
     .code = 0x006A,
     .desc = "EU BJU (Branch and Jump Unit) fulls"},
{.name = "eu_lsu_load_full",
     .code = 0x006B,
     .desc = "EU LSU (Load and Store Unit) load fulls"},
{.name = "eu_lsu_store_full",
     .code = 0x006C,
     .desc = "EU LSU (Load and Store Unit) store fulls"},
{.name = "eu_cp0_full",
     .code = 0x006D,
     .desc = "EU CP0 (Coprocessor 0) fulls"},
{.name = "eu_vfpu_full",
     .code = 0x006E,
     .desc = "EU VFPU (Vector and Floating-point Processing Unit)"},
{.name = "iu_dp_stall_pipe0",
     .code = 0x006F,
     .desc = " "},
{.name = "iu_div_ex1_stall_pipe0",
     .code = 0x0071,
     .desc = " "},
{.name = "iu_dp_pipe_stall_pipe1",
     .code = 0x0072,
     .desc = " "},
{.name = "iu_mult_stall_pipe1",
     .code = 0x0073,
     .desc = " "},
{.name = "iu_div_ex1_stall_pipe1",
     .code = 0x0074,
     .desc = " "},
{.name = "iu_dp_uncommit_pipe0",
     .code = 0x0075,
     .desc = " "},
{.name = "iu_dp_wb_conflict_pipe0",
     .code = 0x0076,
     .desc = " "},
{.name = "iu_dp_waw_stall_pipe0",
     .code = 0x0077,
     .desc = " "},
{.name = "iu_dp_uncommit_pipe1",
     .code = 0x0078,
     .desc = " "},
{.name = "iu_dp_wb_conflict_pipe1",
     .code = 0x0079,
     .desc = " "},
{.name = "iu_dp_waw_stall_pipe1",
     .code = 0x007A,
     .desc = " "},
{.name = "iu_mult_wb_stall",
     .code = 0x007B,
     .desc = " "},
{.name = "iu_mult_uncommit",
     .code = 0x007C,
     .desc = " "},
{.name = "iu_div_wb_stall",
     .code = 0x007D,
     .desc = " "},
{.name = "iu_div_uncommit",
     .code = 0x007E,
     .desc = " "},
{.name = "mult_inner_forward",
     .code = 0x007F,
     .desc = " "},
{.name = "div_buffer_hit",
     .code = 0x0080,
     .desc = " "},
{.name = "vpu_stall_pipe0",
     .code = 0x0081,
     .desc = "VPU (Vector Processing Unit) pipe0 stalls"},
{.name = "vpu_stall_pipe1",
     .code = 0x0082,
     .desc = "VPU (Vector Processing Unit) pipe1 stalls"},
{.name = "vpu_hazard_stall_pipe0",
     .code = 0x0083,
     .desc = " "},
{.name = "vpu_uncommit_stall_pipe0",
     .code = 0x0084,
     .desc = " "},
{.name = "vpu_vlsu_stall_pipe0",
     .code = 0x0085,
     .desc = " "},
{.name = "vpu_hazard_stall_pipe1",
     .code = 0x0086,
     .desc = " "},
{.name = "vpu_uncommit_stall_pipe1",
     .code = 0x0087,
     .desc = " "},
{.name = "vpu_vlsu_stall_pipe1",
     .code = 0x0088,
     .desc = " "},
{.name = "vpu_div_busy",
     .code = 0x0089,
     .desc = " "},
{.name = "bju_cp0_stall",
     .code = 0x008A,
     .desc = " "},
{.name = "bju_ibuf_stall",
     .code = 0x008B,
     .desc = " "},
{.name = "bju_wb_stall",
     .code = 0x008C,
     .desc = " "},
{.name = "bju_pipedown",
     .code = 0x008D,
     .desc = " "},
{.name = "vidu_vec0_stall",
     .code = 0x008E,
     .desc = " "},
{.name = "vidu_vec1_stall",
     .code = 0x008F,
     .desc = " "},
{.name = "vidu_vec0_depend_stall",
     .code = 0x0090,
     .desc = " "},
{.name = "vidu_vec0_struct_hazard_stall",
     .code = 0x0091,
     .desc = " "},
{.name = "vidu_vec1_depend_stall",
     .code = 0x0092,
     .desc = " "},
{.name = "vidu_vec1_struct_hazard_stall",
     .code = 0x0093,
     .desc = " "},
{.name = "vidu_total_cycle",
     .code = 0x0094,
     .desc = " "},
{.name = "vidu_vec0_cycle",
     .code = 0x0095,
     .desc = " "},
{.name = "vidu_vec1_cycle",
     .code = 0x0096,
     .desc = " "},
{.name = "vector_micro_op",
     .code = 0x0097,
     .desc = " "},
{.name = "rtu_flush_cycle",
     .code = 0x0098,
     .desc = " "},
{.name = "rtu_only_iu_not_no_op",
     .code = 0x0099,
     .desc = " "},
{.name = "rtu_only_bju_not_no_op",
     .code = 0x009A,
     .desc = " "},
{.name = "rtu_only_cp0_not_no_op",
     .code = 0x009B,
     .desc = " "},
{.name = "rtu_only_lsu_not_no_op",
     .code = 0x009C,
     .desc = " "},
{.name = "rtu_only_vfpu_not_no_op",
     .code = 0x009D,
     .desc = " "},
{.name = "rtu_iu_not_no_op",
     .code = 0x009E,
     .desc = " "},
{.name = "rtu_bju_not_no_op",
     .code = 0x009F,
     .desc = " "},
{.name = "rtu_cp0_not_no_op",
     .code = 0x00A0,
     .desc = " "},
{.name = "rtu_lsu_not_no_op",
     .code = 0x00A1,
     .desc = " "},
{.name = "rtu_vfpu_not_no_op",
     .code = 0x00A2,
     .desc = " "},
{.name = "lsu_fence_stall",
     .code = 0x00A4,
     .desc = " "},
{.name = "lsu_load_waw_stall",
     .code = 0x00A5,
     .desc = " "},
{.name = "lsu_load_commit_stall",
     .code = 0x00A6,
     .desc = " "},
{.name = "lsu_load_raw_stall",
     .code = 0x00A7,
     .desc = " "},
{.name = "lsu_store_commit_stall",
     .code = 0x00A8,
     .desc = " "},
{.name = "vidu_rf_no_pipedown",
     .code = 0x00A9,
     .desc = " "},
};
