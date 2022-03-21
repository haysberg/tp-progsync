/********
* ec2c version 0.68
* c file generated for node : faster 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _faster_EC2C_SRC_FILE
#include "faster.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _a;
   _boolean _b;
   //OUTPUTS
   _boolean _faster;
   _integer _cpt;
   //REGISTERS
   _integer M18;
   _boolean M18_nil;
   _boolean M7;
   _boolean M7_nil;
   _boolean M3;
} faster_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void faster_I_a(faster_ctx* ctx, _boolean V){
   ctx->_a = V;
}
void faster_I_b(faster_ctx* ctx, _boolean V){
   ctx->_b = V;
}
extern void faster_O_faster(void* cdata, _boolean);
extern void faster_O_cpt(void* cdata, _integer);
#ifdef CKCHECK
extern void faster_BOT_faster(void* cdata);
extern void faster_BOT_cpt(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void faster_reset_input(faster_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void faster_reset(faster_ctx* ctx){
   ctx->M18_nil = _true;
   ctx->M7_nil = _true;
   ctx->M3 = _true;
   faster_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void faster_copy_ctx(faster_ctx* dest, faster_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(faster_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
faster_ctx* faster_new_ctx(void* cdata){
   faster_ctx* ctx = (faster_ctx*)calloc(1, sizeof(faster_ctx));
   ctx->client_data = cdata;
   faster_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void faster_step(faster_ctx* ctx){
//LOCAL VARIABLES
   _boolean L6;
   _boolean L16;
   _boolean L15;
   _integer L17;
   _integer L20;
   _integer L14;
   _integer L12;
   _boolean L11;
   _boolean L10;
   _boolean L9;
   _boolean L8;
   _boolean L5;
   _boolean L2;
   _integer T18;
   _boolean T7;
//CODE
   L6 = (ctx->_a == ctx->_b);
   L16 = (! ctx->_a);
   L15 = (ctx->_b && L16);
   L17 = (ctx->M18 - 1);
   L20 = (ctx->M18 + 1);
   if (L15) {
      L14 = L17;
   } else {
      L14 = L20;
   }
   if (ctx->M3) {
      L12 = 0;
   } else {
      L12 = L14;
   }
   L11 = (L12 == 0);
   L10 = (L11 && ctx->_b);
   L9 = (L10 && L16);
   L8 = (! L9);
   if (L6) {
      L5 = ctx->M7;
   } else {
      L5 = L8;
   }
   if (ctx->M3) {
      L2 = _true;
   } else {
      L2 = L5;
   }
   faster_O_faster(ctx->client_data, L2);
   faster_O_cpt(ctx->client_data, L12);
   T18 = L12;
   T7 = L2;
   ctx->M18 = T18;
   ctx->M18_nil = _false;
   ctx->M7 = T7;
   ctx->M7_nil = _false;
   ctx->M3 = ctx->M3 && !(_true);
}
