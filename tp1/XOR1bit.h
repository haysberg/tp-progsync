/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : XOR1bit 
* to be used with : XOR1bit.c 
********/
#ifndef _XOR1bit_EC2C_H_FILE
#define _XOR1bit_EC2C_H_FILE
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
//MODULE: XOR1bit 2 1
//IN: _boolean X
//IN: _boolean Y
//OUT: _boolean out
#ifndef _XOR1bit_EC2C_SRC_FILE
/*--------Context type -------------*/
struct XOR1bit_ctx;
/*-------- Input procedures -------------*/
extern void XOR1bit_I_X(struct XOR1bit_ctx* ctx, _boolean);
extern void XOR1bit_I_Y(struct XOR1bit_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void XOR1bit_reset(struct XOR1bit_ctx* ctx);
/*--------Context copy -------------*/
extern void XOR1bit_copy_ctx(struct XOR1bit_ctx* dest, struct XOR1bit_ctx
* src);
/*--------Context allocation --------*/
extern struct XOR1bit_ctx* XOR1bit_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void XOR1bit_step(struct XOR1bit_ctx* ctx);
#endif
#endif
