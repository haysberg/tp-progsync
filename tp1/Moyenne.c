/********
* ec2c version 0.68
* c file generated for node : Moyenne 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _Moyenne_EC2C_SRC_FILE
#include "Moyenne.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _integer _input;
   //OUTPUTS
   _integer _moyenne;
   //REGISTERS
   _integer M13;
   _boolean M13_nil;
   _integer M9;
   _boolean M9_nil;
   _boolean M4;
} Moyenne_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void Moyenne_I_input(Moyenne_ctx* ctx, _integer V){
   ctx->_input = V;
}
extern void Moyenne_O_moyenne(void* cdata, _integer);
#ifdef CKCHECK
extern void Moyenne_BOT_moyenne(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void Moyenne_reset_input(Moyenne_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void Moyenne_reset(Moyenne_ctx* ctx){
   ctx->M13_nil = _true;
   ctx->M9_nil = _true;
   ctx->M4 = _true;
   Moyenne_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void Moyenne_copy_ctx(Moyenne_ctx* dest, Moyenne_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(Moyenne_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
Moyenne_ctx* Moyenne_new_ctx(void* cdata){
   Moyenne_ctx* ctx = (Moyenne_ctx*)calloc(1, sizeof(Moyenne_ctx));
   ctx->client_data = cdata;
   Moyenne_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void Moyenne_step(Moyenne_ctx* ctx){
//LOCAL VARIABLES
   _boolean L8;
   _integer L7;
   _integer L3;
   _boolean L12;
   _integer L11;
   _integer L10;
   _integer L2;
   _integer L1;
   _integer T13;
   _integer T9;
//CODE
   L8 = (ctx->M9 > ctx->_input);
   if (L8) {
      L7 = ctx->_input;
   } else {
      L7 = ctx->M9;
   }
   if (ctx->M4) {
      L3 = 0;
   } else {
      L3 = L7;
   }
   L12 = (ctx->M13 < ctx->_input);
   if (L12) {
      L11 = ctx->_input;
   } else {
      L11 = ctx->M13;
   }
   if (ctx->M4) {
      L10 = 0;
   } else {
      L10 = L11;
   }
   L2 = (L3 + L10);
   L1 = (L2 / 2);
   Moyenne_O_moyenne(ctx->client_data, L1);
   T13 = L10;
   T9 = L3;
   ctx->M13 = T13;
   ctx->M13_nil = _false;
   ctx->M9 = T9;
   ctx->M9_nil = _false;
   ctx->M4 = ctx->M4 && !(_true);
}
