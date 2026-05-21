// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Start FR_RR
// On start handler "FR_RR"
void on_start_FR_RR(void) { try { // on start event
 s32 FRD = 0;
s32 RLD = 0;
s32 interior = 0;
app.set_system_var_int32("F_R",1);//door open
app.set_system_var_int32("R_R",1);
app.get_system_var_int32("F_R",&FRD);
app.get_system_var_int32("R_R",&RLD);
app.get_system_var_int32("LED",&interior);
if(FRD==1&&RLD==1&&interior==1){
app.wait(1000,"");
test.set_verdict_ok("Test Pass");
}else{
app.wait(1000,"");
test.set_verdict_ok("Test Failed");
}
app.wait(2000,"");
app.set_system_var_int32("F_R",0);
app.set_system_var_int32("R_R",0);
app.wait(1000,"");
app.terminate_application();
app.wait(1000,"");

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Start FR_RR

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

