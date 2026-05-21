// GEN BLOCK BEGIN Include
#define TSMP_IMPL
#include "TSMaster.h"
#include "MPLibrary.h"
#include "Database.h"
#include "TSMasterBaseInclude.h"
#include "Configuration.h"
// GEN BLOCK END Include

// CODE BLOCK BEGIN On_Var_Change On_F_R Rl9SLC0x
// On variable change handler "On_F_R" for variable "F_R" [On Written]
void on_var_change_On_F_R(void) { try { // variable = F_R
s32 fl,fr,rl,rr;
app.get_system_var_int32("F_L",&fl);
app.get_system_var_int32("F_R",&fr);
app.get_system_var_int32("R_R",&rl);
app.get_system_var_int32("R_L",&rr);

if((fl==1)||(fr==1)||(rr==1)||(rl==1)){
app.set_system_var_int32("LED",1);
}else{
app.set_system_var_int32("LED",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_F_R

// CODE BLOCK BEGIN On_Var_Change On_F_L Rl9MLC0x
// On variable change handler "On_F_L" for variable "F_L" [On Written]
void on_var_change_On_F_L(void) { try { // variable = F_L
                     s32 fl,fr,rl,rr;
app.get_system_var_int32("F_L",&fl);
app.get_system_var_int32("F_R",&fr);
app.get_system_var_int32("R_R",&rl);
app.get_system_var_int32("R_L",&rr);

if((fl==1)||(fr==1)||(rr==1)||(rl==1)){
app.set_system_var_int32("LED",1);
}else{
app.set_system_var_int32("LED",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_F_L

// CODE BLOCK BEGIN On_Var_Change On_R_R Ul9SLC0x
// On variable change handler "On_R_R" for variable "R_R" [On Written]
void on_var_change_On_R_R(void) { try { // variable = R_R
                  s32 fl,fr,rl,rr;
app.get_system_var_int32("F_L",&fl);
app.get_system_var_int32("F_R",&fr);
app.get_system_var_int32("R_R",&rl);
app.get_system_var_int32("R_L",&rr);

if((fl==1)||(fr==1)||(rr==1)||(rl==1)){
app.set_system_var_int32("LED",1);
}else{
app.set_system_var_int32("LED",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_R_R

// CODE BLOCK BEGIN On_Var_Change On_R_L Ul9MLC0x
// On variable change handler "On_R_L" for variable "R_L" [On Written]
void on_var_change_On_R_L(void) { try { // variable = R_L
 s32 fl,fr,rl,rr;
app.get_system_var_int32("F_L",&fl);
app.get_system_var_int32("F_R",&fr);
app.get_system_var_int32("R_R",&rl);
app.get_system_var_int32("R_L",&rr);

if((fl==1)||(fr==1)||(rr==1)||(rl==1)){
app.set_system_var_int32("LED",1);
}else{
app.set_system_var_int32("LED",0);
}

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END On_Var_Change On_R_L

// CODE BLOCK BEGIN Step_Function  NQ__
// Main step function being executed every 5 ms
void step(void) { try { // interval = 5 ms

} catch (...) { log_nok("CRASH detected"); app.terminate_application(); }}
// CODE BLOCK END Step_Function 

