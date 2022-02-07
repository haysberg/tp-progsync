/********
* ec2c version 0.68
* c file generated for node : multiplexeur1bit 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _multiplexeur1bit_EC2C_SRC_FILE
#include "multiplexeur1bit.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   _boolean _sel;
   //OUTPUTS
   _boolean _out;
   //REGISTERS
} multiplexeur1bit_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void multiplexeur1bit_I_a(multiplexeur1bit_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void multiplexeur1bit_I_b(multiplexeur1bit_ctx* ctx, _boolean V){
   ctx->_b = V;
}
void multiplexeur1bit_I_sel(multiplexeur1bit_ctx* ctx, _boolean V){
   ctx->_sel = V;
}
extern void multiplexeur1bit_O_out(void* cdata, _boolean);
#ifdef CKCHECK
extern void multiplexeur1bit_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void multiplexeur1bit_reset_input(multiplexeur1bit_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void multiplexeur1bit_reset(multiplexeur1bit_ctx* ctx){
   multiplexeur1bit_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void multiplexeur1bit_copy_ctx(multiplexeur1bit_ctx* dest, multiplexeur1bit_ctx
* src){
   memcpy((void*)dest, (void*)src, sizeof(multiplexeur1bit_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
multiplexeur1bit_ctx* multiplexeur1bit_new_ctx(void* cdata){
   multiplexeur1bit_ctx* ctx = (multiplexeur1bit_ctx*)calloc(1, sizeof(
multiplexeur1bit_ctx));
   ctx->client_data = cdata;
   multiplexeur1bit_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void multiplexeur1bit_step(multiplexeur1bit_ctx* ctx){
//LOCAL VARIABLES
   _boolean L3;
//CODE
   if (ctx->_sel) {
      L3 = ctx->_a;
   } else {
      L3 = ctx->_b;
   }
   multiplexeur1bit_O_out(ctx->client_data, L3);
}
