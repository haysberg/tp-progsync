/********
* ec2c version 0.68
* c file generated for node : obseqsr 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _obseqsr_EC2C_SRC_FILE
#include "obseqsr.h"
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
   _boolean _O;
   //REGISTERS
   _boolean M14;
   _boolean M14_nil;
   _boolean M10;
   _boolean M10_nil;
   _boolean M5;
} obseqsr_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void obseqsr_I_init(obseqsr_ctx* ctx, _boolean V){
   ctx->_init = V;
}
void obseqsr_I_S(obseqsr_ctx* ctx, _boolean V){
   ctx->_S = V;
}
void obseqsr_I_R(obseqsr_ctx* ctx, _boolean V){
   ctx->_R = V;
}
extern void obseqsr_O_O(void* cdata, _boolean);
#ifdef CKCHECK
extern void obseqsr_BOT_O(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void obseqsr_reset_input(obseqsr_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void obseqsr_reset(obseqsr_ctx* ctx){
   ctx->M14_nil = _true;
   ctx->M10_nil = _true;
   ctx->M5 = _true;
   obseqsr_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void obseqsr_copy_ctx(obseqsr_ctx* dest, obseqsr_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(obseqsr_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
obseqsr_ctx* obseqsr_new_ctx(void* cdata){
   obseqsr_ctx* ctx = (obseqsr_ctx*)calloc(1, sizeof(obseqsr_ctx));
   ctx->client_data = cdata;
   obseqsr_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void obseqsr_step(obseqsr_ctx* ctx){
//LOCAL VARIABLES
   _boolean L8;
   _boolean L7;
   _boolean L4;
   _boolean L13;
   _boolean L12;
   _boolean L11;
   _boolean L3;
   _boolean T14;
   _boolean T10;
//CODE
   if (ctx->_R) {
      L8 = _false;
   } else {
      L8 = ctx->M10;
   }
   if (ctx->_S) {
      L7 = _true;
   } else {
      L7 = L8;
   }
   if (ctx->M5) {
      L4 = ctx->_init;
   } else {
      L4 = L7;
   }
   if (ctx->_S) {
      L13 = _true;
   } else {
      L13 = ctx->M14;
   }
   if (ctx->_R) {
      L12 = _false;
   } else {
      L12 = L13;
   }
   if (ctx->M5) {
      L11 = ctx->_init;
   } else {
      L11 = L12;
   }
   L3 = (L4 && L11);
   obseqsr_O_O(ctx->client_data, L3);
   T14 = L11;
   T10 = L4;
   ctx->M14 = T14;
   ctx->M14_nil = _false;
   ctx->M10 = T10;
   ctx->M10_nil = _false;
   ctx->M5 = ctx->M5 && !(_true);
}
