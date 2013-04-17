/*
 * Generated by Bluespec Compiler, version 2012.10.beta2 (build 29674, 2012-10.10)
 * 
 * On Wed Apr 17 15:19:32 EDT 2013
 * 
 */

/* Generation options: keep-fires */
#ifndef __mkRSAModMultIlvd_h__
#define __mkRSAModMultIlvd_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkRSAModMultIlvd module */
class MOD_mkRSAModMultIlvd : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_Reg<tUInt32> INST_modmult_i;
  MOD_Reg<tUInt32> INST_modmult_i_val;
  MOD_Fifo<tUInt64> INST_modmult_inputFIFO;
  MOD_Fifo<tUInt32> INST_modmult_outputFIFO;
  MOD_Reg<tUInt32> INST_modmult_p_val;
  MOD_Reg<tUInt8> INST_modmult_state;
 
 /* Constructor */
 public:
  MOD_mkRSAModMultIlvd(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
  tUInt8 PORT_EN_response_get;
  tUInt8 PORT_EN_request_put;
  tUInt64 PORT_request_put;
  tUInt32 PORT_response_get;
  tUInt8 PORT_RDY_request_put;
  tUInt8 PORT_RDY_response_get;
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_WILL_FIRE_response_get;
  tUInt8 DEF_WILL_FIRE_request_put;
  tUInt8 DEF_WILL_FIRE_RL_modmult_doComplete;
  tUInt8 DEF_CAN_FIRE_RL_modmult_doComplete;
  tUInt8 DEF_WILL_FIRE_RL_modmult_doPSubM2;
  tUInt8 DEF_CAN_FIRE_RL_modmult_doPSubM2;
  tUInt8 DEF_WILL_FIRE_RL_modmult_doPSubM1;
  tUInt8 DEF_CAN_FIRE_RL_modmult_doPSubM1;
  tUInt8 DEF_WILL_FIRE_RL_modmult_doAddPI;
  tUInt8 DEF_CAN_FIRE_RL_modmult_doAddPI;
  tUInt8 DEF_WILL_FIRE_RL_modmult_doXiY;
  tUInt8 DEF_CAN_FIRE_RL_modmult_doXiY;
  tUInt8 DEF_WILL_FIRE_RL_modmult_doShift;
  tUInt8 DEF_CAN_FIRE_RL_modmult_doShift;
  tUInt8 DEF_CAN_FIRE_response_get;
  tUInt8 DEF_CAN_FIRE_request_put;
 
 /* Local definitions */
 private:
  tUInt64 DEF_modmult_inputFIFO_first____d35;
  tUInt32 DEF_i__h518;
  tUInt32 DEF_x__h1257;
  tUInt32 DEF_m_val__h1030;
  tUInt8 DEF_NOT_modmult_p_val_ULT_modmult_inputFIFO_first__ETC___d25;
  tUInt32 DEF_x__h1093;
 
 /* Rules */
 public:
  void RL_modmult_doShift();
  void RL_modmult_doXiY();
  void RL_modmult_doAddPI();
  void RL_modmult_doPSubM1();
  void RL_modmult_doPSubM2();
  void RL_modmult_doComplete();
 
 /* Methods */
 public:
  void METH_request_put(tUInt64 ARG_request_put);
  tUInt8 METH_RDY_request_put();
  tUInt32 METH_response_get();
  tUInt8 METH_RDY_response_get();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkRSAModMultIlvd &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkRSAModMultIlvd &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkRSAModMultIlvd &backing);
};

#endif /* ifndef __mkRSAModMultIlvd_h__ */
