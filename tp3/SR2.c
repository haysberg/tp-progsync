/********
* ec2c version 0.68
* c file generated for node : SR2 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _SR2_EC2C_SRC_FILE
#include "SR2.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _init;
   _boolean _S;
   _boolean _R;
   //OUTPUTS
   _boolean _Q;
   //REGISTERS
   _boolean M9;
   _boolean M9_nil;
   _boolean M4;
} SR2_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void SR2_I_init(SR2_ctx* ctx, _boolean V){
   ctx->_init = V;
}
void SR2_I_S(SR2_ctx* ctx, _boolean V){
   ctx->_S = V;
}
void SR2_I_R(SR2_ctx* ctx, _boolean V){
   ctx->_R = V;
}
extern void SR2_O_Q(void* cdata, _boolean);
#ifdef CKCHECK
extern void SR2_BOT_Q(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void SR2_reset_input(SR2_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void SR2_reset(SR2_ctx* ctx){
   ctx->M9_nil = _true;
   ctx->M4 = _true;
   SR2_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void SR2_copy_ctx(SR2_ctx* dest, SR2_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(SR2_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
SR2_ctx* SR2_new_ctx(void* cdata){
   SR2_ctx* ctx = (SR2_ctx*)calloc(1, sizeof(SR2_ctx));
   ctx->client_data = cdata;
   SR2_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void SR2_step(SR2_ctx* ctx){
//LOCAL VARIABLES
   _boolean L8;
   _boolean L6;
   _boolean L3;
   _boolean T9;
//CODE
   if (ctx->_S) {
      L8 = _true;
   } else {
      L8 = ctx->M9;
   }
   if (ctx->_R) {
      L6 = _false;
   } else {
      L6 = L8;
   }
   if (ctx->M4) {
      L3 = ctx->_init;
   } else {
      L3 = L6;
   }
   SR2_O_Q(ctx->client_data, L3);
   T9 = L3;
   ctx->M9 = T9;
   ctx->M9_nil = _false;
   ctx->M4 = ctx->M4 && !(_true);
}
