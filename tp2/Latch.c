/********
* ec2c version 0.68
* c file generated for node : Latch 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Latch_EC2C_SRC_FILE
#include "Latch.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _on;
   _boolean _off;
   //OUTPUTS
   _boolean _running;
   //REGISTERS
   _boolean M8;
   _boolean M8_nil;
   _boolean M3;
} Latch_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Latch_I_on(Latch_ctx* ctx, _boolean V){
   ctx->_on = V;
}
void Latch_I_off(Latch_ctx* ctx, _boolean V){
   ctx->_off = V;
}
extern void Latch_O_running(void* cdata, _boolean);
#ifdef CKCHECK
extern void Latch_BOT_running(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Latch_reset_input(Latch_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Latch_reset(Latch_ctx* ctx){
   ctx->M8_nil = _true;
   ctx->M3 = _true;
   Latch_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Latch_copy_ctx(Latch_ctx* dest, Latch_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Latch_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Latch_ctx* Latch_new_ctx(void* cdata){
   Latch_ctx* ctx = (Latch_ctx*)calloc(1, sizeof(Latch_ctx));
   ctx->client_data = cdata;
   Latch_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Latch_step(Latch_ctx* ctx){
//LOCAL VARIABLES
   _boolean L7;
   _boolean L6;
   _boolean L2;
   _boolean T8;
//CODE
   if (ctx->_on) {
      L7 = _true;
   } else {
      L7 = ctx->M8;
   }
   if (ctx->_off) {
      L6 = _false;
   } else {
      L6 = L7;
   }
   if (ctx->M3) {
      L2 = _false;
   } else {
      L2 = L6;
   }
   Latch_O_running(ctx->client_data, L2);
   T8 = L2;
   ctx->M8 = T8;
   ctx->M8_nil = _false;
   ctx->M3 = ctx->M3 && !(_true);
}
