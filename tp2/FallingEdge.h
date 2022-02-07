/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : FallingEdge 
* to be used with : FallingEdge.c 
********/
#ifndef _FallingEdge_EC2C_H_FILE
#define _FallingEdge_EC2C_H_FILE
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
//MODULE: FallingEdge 1 1
//IN: _boolean val
//OUT: _boolean falling
#ifndef _FallingEdge_EC2C_SRC_FILE
/*--------Context type -------------*/
struct FallingEdge_ctx;
/*-------- Input procedures -------------*/
extern void FallingEdge_I_val(struct FallingEdge_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void FallingEdge_reset(struct FallingEdge_ctx* ctx);
/*--------Context copy -------------*/
extern void FallingEdge_copy_ctx(struct FallingEdge_ctx* dest, struct 
FallingEdge_ctx* src);
/*--------Context allocation --------*/
extern struct FallingEdge_ctx* FallingEdge_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void FallingEdge_step(struct FallingEdge_ctx* ctx);
#endif
#endif
