/*
 * Generated by Bluespec Compiler, version 2012.10.beta2 (build 29674, 2012-10.10)
 * 
 * On Wed Apr 17 15:19:32 EDT 2013
 * 
 */

/* Generation options: keep-fires */
#ifndef __model_mkBridge_h__
#define __model_mkBridge_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"

#include "bs_model.h"
#include "mkBridge.h"

/* Class declaration for a model of mkBridge */
class MODEL_mkBridge : public Model {
 
 /* Top-level module instance */
 private:
  MOD_mkBridge *mkBridge_instance;
 
 /* Handle to the simulation kernel */
 private:
  tSimStateHdl sim_hdl;
 
 /* Constructor */
 public:
  MODEL_mkBridge();
 
 /* Functions required by the kernel */
 public:
  void create_model(tSimStateHdl simHdl, bool master);
  void destroy_model();
  void reset_model(bool asserted);
  void get_version(unsigned int *year,
		   unsigned int *month,
		   char const **annotation,
		   char const **build);
  time_t get_creation_time();
  void * get_instance();
  void dump_state();
  void dump_VCD_defs();
  void dump_VCD(tVCDDumpType dt);
  tUInt64 skip_license_check();
};

/* Function for creating a new model */
extern "C" {
  void * new_MODEL_mkBridge();
}

#endif /* ifndef __model_mkBridge_h__ */
