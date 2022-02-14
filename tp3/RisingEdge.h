/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : RisingEdge 
* to be used with : RisingEdge.c 
********/
#ifndef _RisingEdge_EC2C_H_FILE
#define _RisingEdge_EC2C_H_FILE
/*-------- Predefined types ---------*/
#ifndef _EC2C_PREDEF_TYPES
#define _EC2C_PREDEF_TYPES
typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef double _real;
typedef double _double;
typedef float _float;
#define _false 0
#define _true 1
#endif
/*--------- Pragmas ----------------*/
//MODULE: RisingEdge 1 1
//IN: _boolean val
//OUT: _boolean rising
#ifndef _RisingEdge_EC2C_SRC_FILE
/*--------Context type -------------*/
struct RisingEdge_ctx;
/*-------- Input procedures -------------*/
extern void RisingEdge_I_val(struct RisingEdge_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void RisingEdge_reset(struct RisingEdge_ctx* ctx);
/*--------Context copy -------------*/
extern void RisingEdge_copy_ctx(struct RisingEdge_ctx* dest, struct 
RisingEdge_ctx* src);
/*--------Context allocation --------*/
extern struct RisingEdge_ctx* RisingEdge_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void RisingEdge_step(struct RisingEdge_ctx* ctx);
#endif
#endif
