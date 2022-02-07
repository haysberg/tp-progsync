/********
* ec2c version 0.68
* c file generated for node : XOR1bit 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _XOR1bit_EC2C_SRC_FILE
#include "XOR1bit.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _X;
   _boolean _Y;
   //OUTPUTS
   _boolean _out;
   //REGISTERS
} XOR1bit_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void XOR1bit_I_X(XOR1bit_ctx* ctx, _boolean V){
   ctx->_X = V;
}
void XOR1bit_I_Y(XOR1bit_ctx* ctx, _boolean V){
   ctx->_Y = V;
}
extern void XOR1bit_O_out(void* cdata, _boolean);
#ifdef CKCHECK
extern void XOR1bit_BOT_out(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void XOR1bit_reset_input(XOR1bit_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void XOR1bit_reset(XOR1bit_ctx* ctx){
   XOR1bit_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void XOR1bit_copy_ctx(XOR1bit_ctx* dest, XOR1bit_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(XOR1bit_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
XOR1bit_ctx* XOR1bit_new_ctx(void* cdata){
   XOR1bit_ctx* ctx = (XOR1bit_ctx*)calloc(1, sizeof(XOR1bit_ctx));
   ctx->client_data = cdata;
   XOR1bit_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void XOR1bit_step(XOR1bit_ctx* ctx){
//LOCAL VARIABLES
   _boolean L2;
//CODE
   L2 = (ctx->_X != ctx->_Y);
   XOR1bit_O_out(ctx->client_data, L2);
}
