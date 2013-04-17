/*
 * Generated by Bluespec Compiler, version 2012.10.beta2 (build 29674, 2012-10.10)
 * 
 * On Wed Apr 17 15:19:32 EDT 2013
 * 
 */
#include "bluesim_primitives.h"
#include "mkRSAModMultIlvd.h"


/* Constructor */
MOD_mkRSAModMultIlvd::MOD_mkRSAModMultIlvd(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_modmult_i(simHdl, "modmult_i", this, 32u, 0u, (tUInt8)0u),
    INST_modmult_i_val(simHdl, "modmult_i_val", this, 16u),
    INST_modmult_inputFIFO(simHdl, "modmult_inputFIFO", this, 48u, 2u, 1u, 0u),
    INST_modmult_outputFIFO(simHdl, "modmult_outputFIFO", this, 16u, 2u, 1u, 0u),
    INST_modmult_p_val(simHdl, "modmult_p_val", this, 16u, 0u, (tUInt8)0u),
    INST_modmult_state(simHdl, "modmult_state", this, 3u, (tUInt8)0u, (tUInt8)0u),
    PORT_RST_N((tUInt8)1u)
{
  PORT_EN_response_get = false;
  PORT_EN_request_put = false;
  PORT_request_put = 0llu;
  PORT_response_get = 0u;
  PORT_RDY_request_put = false;
  PORT_RDY_response_get = false;
  symbol_count = 34u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkRSAModMultIlvd::init_symbols_0()
{
  init_symbol(&symbols[0u],
	      "CAN_FIRE_RL_modmult_doAddPI",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_modmult_doAddPI,
	      1u);
  init_symbol(&symbols[1u],
	      "CAN_FIRE_RL_modmult_doComplete",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_modmult_doComplete,
	      1u);
  init_symbol(&symbols[2u],
	      "CAN_FIRE_RL_modmult_doPSubM1",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_modmult_doPSubM1,
	      1u);
  init_symbol(&symbols[3u],
	      "CAN_FIRE_RL_modmult_doPSubM2",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_modmult_doPSubM2,
	      1u);
  init_symbol(&symbols[4u],
	      "CAN_FIRE_RL_modmult_doShift",
	      SYM_DEF,
	      &DEF_CAN_FIRE_RL_modmult_doShift,
	      1u);
  init_symbol(&symbols[5u], "CAN_FIRE_RL_modmult_doXiY", SYM_DEF, &DEF_CAN_FIRE_RL_modmult_doXiY, 1u);
  init_symbol(&symbols[6u], "CAN_FIRE_request_put", SYM_DEF, &DEF_CAN_FIRE_request_put, 1u);
  init_symbol(&symbols[7u], "CAN_FIRE_response_get", SYM_DEF, &DEF_CAN_FIRE_response_get, 1u);
  init_symbol(&symbols[8u], "EN_request_put", SYM_PORT, &PORT_EN_request_put, 1u);
  init_symbol(&symbols[9u], "EN_response_get", SYM_PORT, &PORT_EN_response_get, 1u);
  init_symbol(&symbols[10u], "modmult_i", SYM_MODULE, &INST_modmult_i);
  init_symbol(&symbols[11u], "modmult_i_val", SYM_MODULE, &INST_modmult_i_val);
  init_symbol(&symbols[12u], "modmult_inputFIFO", SYM_MODULE, &INST_modmult_inputFIFO);
  init_symbol(&symbols[13u], "modmult_outputFIFO", SYM_MODULE, &INST_modmult_outputFIFO);
  init_symbol(&symbols[14u], "modmult_p_val", SYM_MODULE, &INST_modmult_p_val);
  init_symbol(&symbols[15u], "modmult_state", SYM_MODULE, &INST_modmult_state);
  init_symbol(&symbols[16u], "RDY_request_put", SYM_PORT, &PORT_RDY_request_put, 1u);
  init_symbol(&symbols[17u], "RDY_response_get", SYM_PORT, &PORT_RDY_response_get, 1u);
  init_symbol(&symbols[18u], "RL_modmult_doAddPI", SYM_RULE);
  init_symbol(&symbols[19u], "RL_modmult_doComplete", SYM_RULE);
  init_symbol(&symbols[20u], "RL_modmult_doPSubM1", SYM_RULE);
  init_symbol(&symbols[21u], "RL_modmult_doPSubM2", SYM_RULE);
  init_symbol(&symbols[22u], "RL_modmult_doShift", SYM_RULE);
  init_symbol(&symbols[23u], "RL_modmult_doXiY", SYM_RULE);
  init_symbol(&symbols[24u], "request_put", SYM_PORT, &PORT_request_put, 48u);
  init_symbol(&symbols[25u], "response_get", SYM_PORT, &PORT_response_get, 16u);
  init_symbol(&symbols[26u],
	      "WILL_FIRE_RL_modmult_doAddPI",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_modmult_doAddPI,
	      1u);
  init_symbol(&symbols[27u],
	      "WILL_FIRE_RL_modmult_doComplete",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_modmult_doComplete,
	      1u);
  init_symbol(&symbols[28u],
	      "WILL_FIRE_RL_modmult_doPSubM1",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_modmult_doPSubM1,
	      1u);
  init_symbol(&symbols[29u],
	      "WILL_FIRE_RL_modmult_doPSubM2",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_modmult_doPSubM2,
	      1u);
  init_symbol(&symbols[30u],
	      "WILL_FIRE_RL_modmult_doShift",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_modmult_doShift,
	      1u);
  init_symbol(&symbols[31u],
	      "WILL_FIRE_RL_modmult_doXiY",
	      SYM_DEF,
	      &DEF_WILL_FIRE_RL_modmult_doXiY,
	      1u);
  init_symbol(&symbols[32u], "WILL_FIRE_request_put", SYM_DEF, &DEF_WILL_FIRE_request_put, 1u);
  init_symbol(&symbols[33u], "WILL_FIRE_response_get", SYM_DEF, &DEF_WILL_FIRE_response_get, 1u);
}


/* Rule actions */

void MOD_mkRSAModMultIlvd::RL_modmult_doShift()
{
  tUInt32 DEF_x__h436;
  tUInt32 DEF_modmult_p_val_BITS_14_TO_0___h457;
  DEF_x__h1257 = INST_modmult_p_val.METH_read();
  DEF_modmult_p_val_BITS_14_TO_0___h457 = (tUInt32)(32767u & DEF_x__h1257);
  DEF_x__h436 = 65535u & ((DEF_modmult_p_val_BITS_14_TO_0___h457 << 1u) | (tUInt32)((tUInt8)0u));
  INST_modmult_p_val.METH_write(DEF_x__h436);
  INST_modmult_state.METH_write((tUInt8)1u);
}

void MOD_mkRSAModMultIlvd::RL_modmult_doXiY()
{
  tUInt32 DEF_x__h514;
  tUInt8 DEF_x__h517;
  tUInt8 DEF_modmult_i_1_BITS_3_TO_0___d12;
  tUInt32 DEF_x__h489;
  tUInt32 DEF_x_val__h474;
  tUInt32 DEF_y_val__h475;
  DEF_modmult_inputFIFO_first____d35 = INST_modmult_inputFIFO.METH_first();
  DEF_i__h518 = INST_modmult_i.METH_read();
  DEF_y_val__h475 = (tUInt32)(65535u & (DEF_modmult_inputFIFO_first____d35 >> 16u));
  DEF_x_val__h474 = (tUInt32)(65535u & DEF_modmult_inputFIFO_first____d35);
  DEF_modmult_i_1_BITS_3_TO_0___d12 = (tUInt8)((tUInt8)15u & DEF_i__h518);
  DEF_x__h517 = primExtract8(1u,
			     16u,
			     (tUInt32)(DEF_x_val__h474),
			     4u,
			     (tUInt8)(DEF_modmult_i_1_BITS_3_TO_0___d12),
			     4u,
			     (tUInt8)(DEF_modmult_i_1_BITS_3_TO_0___d12));
  DEF_x__h514 = 65535u & ((tUInt32)(DEF_x__h517));
  DEF_x__h489 = (tUInt32)(65535u & (DEF_x__h514 * DEF_y_val__h475));
  INST_modmult_i_val.METH_write(DEF_x__h489);
  INST_modmult_state.METH_write((tUInt8)2u);
}

void MOD_mkRSAModMultIlvd::RL_modmult_doAddPI()
{
  tUInt32 DEF_x__h835;
  tUInt32 DEF_y__h846;
  DEF_y__h846 = INST_modmult_i_val.METH_read();
  DEF_x__h1257 = INST_modmult_p_val.METH_read();
  DEF_x__h835 = 65535u & (DEF_x__h1257 + DEF_y__h846);
  INST_modmult_p_val.METH_write(DEF_x__h835);
  INST_modmult_state.METH_write((tUInt8)3u);
}

void MOD_mkRSAModMultIlvd::RL_modmult_doPSubM1()
{
  DEF_modmult_inputFIFO_first____d35 = INST_modmult_inputFIFO.METH_first();
  DEF_x__h1257 = INST_modmult_p_val.METH_read();
  DEF_m_val__h1030 = (tUInt32)(DEF_modmult_inputFIFO_first____d35 >> 32u);
  DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25 = !(DEF_x__h1257 < DEF_m_val__h1030);
  DEF_x__h1093 = 65535u & (DEF_x__h1257 - DEF_m_val__h1030);
  if (DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25)
    INST_modmult_p_val.METH_write(DEF_x__h1093);
  INST_modmult_state.METH_write((tUInt8)4u);
}

void MOD_mkRSAModMultIlvd::RL_modmult_doPSubM2()
{
  tUInt8 DEF_IF_modmult_i_1_EQ_15_9_THEN_5_ELSE_0___d30;
  DEF_modmult_inputFIFO_first____d35 = INST_modmult_inputFIFO.METH_first();
  DEF_i__h518 = INST_modmult_i.METH_read();
  DEF_x__h1257 = INST_modmult_p_val.METH_read();
  DEF_m_val__h1030 = (tUInt32)(DEF_modmult_inputFIFO_first____d35 >> 32u);
  DEF_IF_modmult_i_1_EQ_15_9_THEN_5_ELSE_0___d30 = DEF_i__h518 == 15u ? (tUInt8)5u : (tUInt8)0u;
  DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25 = !(DEF_x__h1257 < DEF_m_val__h1030);
  DEF_x__h1093 = 65535u & (DEF_x__h1257 - DEF_m_val__h1030);
  if (DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25)
    INST_modmult_p_val.METH_write(DEF_x__h1093);
  INST_modmult_i.METH_write(1u);
  INST_modmult_state.METH_write(DEF_IF_modmult_i_1_EQ_15_9_THEN_5_ELSE_0___d30);
}

void MOD_mkRSAModMultIlvd::RL_modmult_doComplete()
{
  DEF_x__h1257 = INST_modmult_p_val.METH_read();
  INST_modmult_inputFIFO.METH_deq();
  INST_modmult_i.METH_write(0u);
  INST_modmult_outputFIFO.METH_enq(DEF_x__h1257);
  INST_modmult_p_val.METH_write(0u);
}


/* Methods */

void MOD_mkRSAModMultIlvd::METH_request_put(tUInt64 ARG_request_put)
{
  PORT_EN_request_put = (tUInt8)1u;
  DEF_WILL_FIRE_request_put = (tUInt8)1u;
  PORT_request_put = ARG_request_put;
  INST_modmult_inputFIFO.METH_enq(ARG_request_put);
}

tUInt8 MOD_mkRSAModMultIlvd::METH_RDY_request_put()
{
  DEF_CAN_FIRE_request_put = INST_modmult_inputFIFO.METH_i_notFull();
  PORT_RDY_request_put = DEF_CAN_FIRE_request_put;
  return PORT_RDY_request_put;
}

tUInt32 MOD_mkRSAModMultIlvd::METH_response_get()
{
  tUInt32 DEF_response_get__avValue1;
  PORT_EN_response_get = (tUInt8)1u;
  DEF_WILL_FIRE_response_get = (tUInt8)1u;
  DEF_response_get__avValue1 = INST_modmult_outputFIFO.METH_first();
  INST_modmult_outputFIFO.METH_deq();
  PORT_response_get = DEF_response_get__avValue1;
  return PORT_response_get;
}

tUInt8 MOD_mkRSAModMultIlvd::METH_RDY_response_get()
{
  DEF_CAN_FIRE_response_get = INST_modmult_outputFIFO.METH_i_notEmpty();
  PORT_RDY_response_get = DEF_CAN_FIRE_response_get;
  return PORT_RDY_response_get;
}


/* Reset routines */

void MOD_mkRSAModMultIlvd::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_modmult_state.reset_RST(ARG_rst_in);
  INST_modmult_p_val.reset_RST(ARG_rst_in);
  INST_modmult_outputFIFO.reset_RST(ARG_rst_in);
  INST_modmult_inputFIFO.reset_RST(ARG_rst_in);
  INST_modmult_i.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkRSAModMultIlvd::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkRSAModMultIlvd::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_modmult_i.dump_state(indent + 2u);
  INST_modmult_i_val.dump_state(indent + 2u);
  INST_modmult_inputFIFO.dump_state(indent + 2u);
  INST_modmult_outputFIFO.dump_state(indent + 2u);
  INST_modmult_p_val.dump_state(indent + 2u);
  INST_modmult_state.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkRSAModMultIlvd::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 35u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_modmult_doAddPI", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_modmult_doComplete", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_modmult_doPSubM1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_modmult_doPSubM2", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_modmult_doShift", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_RL_modmult_doXiY", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_request_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "CAN_FIRE_response_get", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_modmult_doAddPI", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_modmult_doComplete", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_modmult_doPSubM1", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_modmult_doPSubM2", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_modmult_doShift", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_RL_modmult_doXiY", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_request_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "WILL_FIRE_response_get", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "i__h518", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "m_val__h1030", 16u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "modmult_inputFIFO_first____d35", 48u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h1093", 16u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "x__h1257", 16u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "EN_request_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "EN_response_get", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "RDY_request_put", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "RDY_response_get", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "request_put", 48u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "response_get", 16u);
  num = INST_modmult_i.dump_VCD_defs(num);
  num = INST_modmult_i_val.dump_VCD_defs(num);
  num = INST_modmult_inputFIFO.dump_VCD_defs(num);
  num = INST_modmult_outputFIFO.dump_VCD_defs(num);
  num = INST_modmult_p_val.dump_VCD_defs(num);
  num = INST_modmult_state.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkRSAModMultIlvd::dump_VCD(tVCDDumpType dt,
				    unsigned int levels,
				    MOD_mkRSAModMultIlvd &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkRSAModMultIlvd::vcd_defs(tVCDDumpType dt, MOD_mkRSAModMultIlvd &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 16u);
    vcd_write_x(sim_hdl, num++, 48u);
    vcd_write_x(sim_hdl, num++, 16u);
    vcd_write_x(sim_hdl, num++, 16u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 48u);
    vcd_write_x(sim_hdl, num++, 16u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.DEF_CAN_FIRE_RL_modmult_doAddPI) != DEF_CAN_FIRE_RL_modmult_doAddPI)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_modmult_doAddPI, 1u);
	backing.DEF_CAN_FIRE_RL_modmult_doAddPI = DEF_CAN_FIRE_RL_modmult_doAddPI;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_modmult_doComplete) != DEF_CAN_FIRE_RL_modmult_doComplete)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_modmult_doComplete, 1u);
	backing.DEF_CAN_FIRE_RL_modmult_doComplete = DEF_CAN_FIRE_RL_modmult_doComplete;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_modmult_doPSubM1) != DEF_CAN_FIRE_RL_modmult_doPSubM1)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_modmult_doPSubM1, 1u);
	backing.DEF_CAN_FIRE_RL_modmult_doPSubM1 = DEF_CAN_FIRE_RL_modmult_doPSubM1;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_modmult_doPSubM2) != DEF_CAN_FIRE_RL_modmult_doPSubM2)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_modmult_doPSubM2, 1u);
	backing.DEF_CAN_FIRE_RL_modmult_doPSubM2 = DEF_CAN_FIRE_RL_modmult_doPSubM2;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_modmult_doShift) != DEF_CAN_FIRE_RL_modmult_doShift)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_modmult_doShift, 1u);
	backing.DEF_CAN_FIRE_RL_modmult_doShift = DEF_CAN_FIRE_RL_modmult_doShift;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_RL_modmult_doXiY) != DEF_CAN_FIRE_RL_modmult_doXiY)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_RL_modmult_doXiY, 1u);
	backing.DEF_CAN_FIRE_RL_modmult_doXiY = DEF_CAN_FIRE_RL_modmult_doXiY;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_request_put) != DEF_CAN_FIRE_request_put)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_request_put, 1u);
	backing.DEF_CAN_FIRE_request_put = DEF_CAN_FIRE_request_put;
      }
      ++num;
      if ((backing.DEF_CAN_FIRE_response_get) != DEF_CAN_FIRE_response_get)
      {
	vcd_write_val(sim_hdl, num, DEF_CAN_FIRE_response_get, 1u);
	backing.DEF_CAN_FIRE_response_get = DEF_CAN_FIRE_response_get;
      }
      ++num;
      if ((backing.DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25) != DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25)
      {
	vcd_write_val(sim_hdl, num, DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25, 1u);
	backing.DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25 = DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25;
      }
      ++num;
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_modmult_doAddPI) != DEF_WILL_FIRE_RL_modmult_doAddPI)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_modmult_doAddPI, 1u);
	backing.DEF_WILL_FIRE_RL_modmult_doAddPI = DEF_WILL_FIRE_RL_modmult_doAddPI;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_modmult_doComplete) != DEF_WILL_FIRE_RL_modmult_doComplete)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_modmult_doComplete, 1u);
	backing.DEF_WILL_FIRE_RL_modmult_doComplete = DEF_WILL_FIRE_RL_modmult_doComplete;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_modmult_doPSubM1) != DEF_WILL_FIRE_RL_modmult_doPSubM1)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_modmult_doPSubM1, 1u);
	backing.DEF_WILL_FIRE_RL_modmult_doPSubM1 = DEF_WILL_FIRE_RL_modmult_doPSubM1;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_modmult_doPSubM2) != DEF_WILL_FIRE_RL_modmult_doPSubM2)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_modmult_doPSubM2, 1u);
	backing.DEF_WILL_FIRE_RL_modmult_doPSubM2 = DEF_WILL_FIRE_RL_modmult_doPSubM2;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_modmult_doShift) != DEF_WILL_FIRE_RL_modmult_doShift)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_modmult_doShift, 1u);
	backing.DEF_WILL_FIRE_RL_modmult_doShift = DEF_WILL_FIRE_RL_modmult_doShift;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_RL_modmult_doXiY) != DEF_WILL_FIRE_RL_modmult_doXiY)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_RL_modmult_doXiY, 1u);
	backing.DEF_WILL_FIRE_RL_modmult_doXiY = DEF_WILL_FIRE_RL_modmult_doXiY;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_request_put) != DEF_WILL_FIRE_request_put)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_request_put, 1u);
	backing.DEF_WILL_FIRE_request_put = DEF_WILL_FIRE_request_put;
      }
      ++num;
      if ((backing.DEF_WILL_FIRE_response_get) != DEF_WILL_FIRE_response_get)
      {
	vcd_write_val(sim_hdl, num, DEF_WILL_FIRE_response_get, 1u);
	backing.DEF_WILL_FIRE_response_get = DEF_WILL_FIRE_response_get;
      }
      ++num;
      if ((backing.DEF_i__h518) != DEF_i__h518)
      {
	vcd_write_val(sim_hdl, num, DEF_i__h518, 32u);
	backing.DEF_i__h518 = DEF_i__h518;
      }
      ++num;
      if ((backing.DEF_m_val__h1030) != DEF_m_val__h1030)
      {
	vcd_write_val(sim_hdl, num, DEF_m_val__h1030, 16u);
	backing.DEF_m_val__h1030 = DEF_m_val__h1030;
      }
      ++num;
      if ((backing.DEF_modmult_inputFIFO_first____d35) != DEF_modmult_inputFIFO_first____d35)
      {
	vcd_write_val(sim_hdl, num, DEF_modmult_inputFIFO_first____d35, 48u);
	backing.DEF_modmult_inputFIFO_first____d35 = DEF_modmult_inputFIFO_first____d35;
      }
      ++num;
      if ((backing.DEF_x__h1093) != DEF_x__h1093)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h1093, 16u);
	backing.DEF_x__h1093 = DEF_x__h1093;
      }
      ++num;
      if ((backing.DEF_x__h1257) != DEF_x__h1257)
      {
	vcd_write_val(sim_hdl, num, DEF_x__h1257, 16u);
	backing.DEF_x__h1257 = DEF_x__h1257;
      }
      ++num;
      if ((backing.PORT_EN_request_put) != PORT_EN_request_put)
      {
	vcd_write_val(sim_hdl, num, PORT_EN_request_put, 1u);
	backing.PORT_EN_request_put = PORT_EN_request_put;
      }
      ++num;
      if ((backing.PORT_EN_response_get) != PORT_EN_response_get)
      {
	vcd_write_val(sim_hdl, num, PORT_EN_response_get, 1u);
	backing.PORT_EN_response_get = PORT_EN_response_get;
      }
      ++num;
      if ((backing.PORT_RDY_request_put) != PORT_RDY_request_put)
      {
	vcd_write_val(sim_hdl, num, PORT_RDY_request_put, 1u);
	backing.PORT_RDY_request_put = PORT_RDY_request_put;
      }
      ++num;
      if ((backing.PORT_RDY_response_get) != PORT_RDY_response_get)
      {
	vcd_write_val(sim_hdl, num, PORT_RDY_response_get, 1u);
	backing.PORT_RDY_response_get = PORT_RDY_response_get;
      }
      ++num;
      if ((backing.PORT_request_put) != PORT_request_put)
      {
	vcd_write_val(sim_hdl, num, PORT_request_put, 48u);
	backing.PORT_request_put = PORT_request_put;
      }
      ++num;
      if ((backing.PORT_response_get) != PORT_response_get)
      {
	vcd_write_val(sim_hdl, num, PORT_response_get, 16u);
	backing.PORT_response_get = PORT_response_get;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_modmult_doAddPI, 1u);
      backing.DEF_CAN_FIRE_RL_modmult_doAddPI = DEF_CAN_FIRE_RL_modmult_doAddPI;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_modmult_doComplete, 1u);
      backing.DEF_CAN_FIRE_RL_modmult_doComplete = DEF_CAN_FIRE_RL_modmult_doComplete;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_modmult_doPSubM1, 1u);
      backing.DEF_CAN_FIRE_RL_modmult_doPSubM1 = DEF_CAN_FIRE_RL_modmult_doPSubM1;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_modmult_doPSubM2, 1u);
      backing.DEF_CAN_FIRE_RL_modmult_doPSubM2 = DEF_CAN_FIRE_RL_modmult_doPSubM2;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_modmult_doShift, 1u);
      backing.DEF_CAN_FIRE_RL_modmult_doShift = DEF_CAN_FIRE_RL_modmult_doShift;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_RL_modmult_doXiY, 1u);
      backing.DEF_CAN_FIRE_RL_modmult_doXiY = DEF_CAN_FIRE_RL_modmult_doXiY;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_request_put, 1u);
      backing.DEF_CAN_FIRE_request_put = DEF_CAN_FIRE_request_put;
      vcd_write_val(sim_hdl, num++, DEF_CAN_FIRE_response_get, 1u);
      backing.DEF_CAN_FIRE_response_get = DEF_CAN_FIRE_response_get;
      vcd_write_val(sim_hdl, num++, DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25, 1u);
      backing.DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25 = DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25;
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_modmult_doAddPI, 1u);
      backing.DEF_WILL_FIRE_RL_modmult_doAddPI = DEF_WILL_FIRE_RL_modmult_doAddPI;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_modmult_doComplete, 1u);
      backing.DEF_WILL_FIRE_RL_modmult_doComplete = DEF_WILL_FIRE_RL_modmult_doComplete;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_modmult_doPSubM1, 1u);
      backing.DEF_WILL_FIRE_RL_modmult_doPSubM1 = DEF_WILL_FIRE_RL_modmult_doPSubM1;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_modmult_doPSubM2, 1u);
      backing.DEF_WILL_FIRE_RL_modmult_doPSubM2 = DEF_WILL_FIRE_RL_modmult_doPSubM2;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_modmult_doShift, 1u);
      backing.DEF_WILL_FIRE_RL_modmult_doShift = DEF_WILL_FIRE_RL_modmult_doShift;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_RL_modmult_doXiY, 1u);
      backing.DEF_WILL_FIRE_RL_modmult_doXiY = DEF_WILL_FIRE_RL_modmult_doXiY;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_request_put, 1u);
      backing.DEF_WILL_FIRE_request_put = DEF_WILL_FIRE_request_put;
      vcd_write_val(sim_hdl, num++, DEF_WILL_FIRE_response_get, 1u);
      backing.DEF_WILL_FIRE_response_get = DEF_WILL_FIRE_response_get;
      vcd_write_val(sim_hdl, num++, DEF_i__h518, 32u);
      backing.DEF_i__h518 = DEF_i__h518;
      vcd_write_val(sim_hdl, num++, DEF_m_val__h1030, 16u);
      backing.DEF_m_val__h1030 = DEF_m_val__h1030;
      vcd_write_val(sim_hdl, num++, DEF_modmult_inputFIFO_first____d35, 48u);
      backing.DEF_modmult_inputFIFO_first____d35 = DEF_modmult_inputFIFO_first____d35;
      vcd_write_val(sim_hdl, num++, DEF_x__h1093, 16u);
      backing.DEF_x__h1093 = DEF_x__h1093;
      vcd_write_val(sim_hdl, num++, DEF_x__h1257, 16u);
      backing.DEF_x__h1257 = DEF_x__h1257;
      vcd_write_val(sim_hdl, num++, PORT_EN_request_put, 1u);
      backing.PORT_EN_request_put = PORT_EN_request_put;
      vcd_write_val(sim_hdl, num++, PORT_EN_response_get, 1u);
      backing.PORT_EN_response_get = PORT_EN_response_get;
      vcd_write_val(sim_hdl, num++, PORT_RDY_request_put, 1u);
      backing.PORT_RDY_request_put = PORT_RDY_request_put;
      vcd_write_val(sim_hdl, num++, PORT_RDY_response_get, 1u);
      backing.PORT_RDY_response_get = PORT_RDY_response_get;
      vcd_write_val(sim_hdl, num++, PORT_request_put, 48u);
      backing.PORT_request_put = PORT_request_put;
      vcd_write_val(sim_hdl, num++, PORT_response_get, 16u);
      backing.PORT_response_get = PORT_response_get;
    }
}

void MOD_mkRSAModMultIlvd::vcd_prims(tVCDDumpType dt, MOD_mkRSAModMultIlvd &backing)
{
  INST_modmult_i.dump_VCD(dt, backing.INST_modmult_i);
  INST_modmult_i_val.dump_VCD(dt, backing.INST_modmult_i_val);
  INST_modmult_inputFIFO.dump_VCD(dt, backing.INST_modmult_inputFIFO);
  INST_modmult_outputFIFO.dump_VCD(dt, backing.INST_modmult_outputFIFO);
  INST_modmult_p_val.dump_VCD(dt, backing.INST_modmult_p_val);
  INST_modmult_state.dump_VCD(dt, backing.INST_modmult_state);
}
