// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Start ALL_CLO
// On start handler "ALL_CLO"
void on_start_ALL_CLO(void) { try { // on start event
s32 FLD = 1;
s32 FRD = 1;
s32 RRD = 1;
s32 RLD = 1;
s32 interior = 1;
app.set_system_var_int32("F_L",0);//door open
app.set_system_var_int32("F_R",0);
app.set_system_var_int32("R_L",0);
app.set_system_var_int32("R_L",0);
app.get_system_var_int32("F_L",&FLD);
app.get_system_var_int32("F_R",&FRD);
app.get_system_var_int32("R_L",&RLD);
app.get_system_var_int32("R_R",&RRD);
app.get_system_var_int32("LED",&interior);
if(FLD==0&&FRD==0&&RRD==0&&RLD==0&&interior==0){
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
app.terminate_application();
app.wait(1000,"");

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Start ALL_CLO

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

