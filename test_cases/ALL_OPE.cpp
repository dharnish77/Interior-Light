// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Start ALL_OPE
// On start handler "ALL_OPE"
void on_start_ALL_OPE(void) { try { // on start event
s32 FLD = 0;
s32 FRD = 0;
s32 RRD = 0;
s32 RLD = 0;
s32 interior = 0;
app.set_system_var_int32("F_L",1);//door open
app.set_system_var_int32("F_R",1);
app.set_system_var_int32("R_L",1);
app.set_system_var_int32("R_R",1);
app.get_system_var_int32("F_L",&FLD);
app.get_system_var_int32("F_R",&FRD);
app.get_system_var_int32("R_L",&RLD);
app.get_system_var_int32("R_R",&RRD);
app.get_system_var_int32("LED",&interior);
if(FLD==1 && FRD==1 && RRD==1 && RLD==1 && interior==1){
app.wait(1000,"");
test.set_verdict_ok("Test Pass");
}else{
app.wait(1000,"");
test.set_verdict_ok("Test Failed");
}
app.wait(2000,"");
app.set_system_var_int32("F_L",0);
app.set_system_var_int32("F_R",0);
app.set_system_var_int32("R_L",0);
app.set_system_var_int32("R_R",0);
app.wait(1000,"");
app.terminate_application();
app.wait(1000,"");
} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Start ALL_OPE

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

