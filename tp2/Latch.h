/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Latch 
* to be used with : Latch.c 
********/
#ifndef _Latch_EC2C_H_FILE
#define _Latch_EC2C_H_FILE
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
//MODULE: Latch 2 1
//IN: _boolean on
//IN: _boolean off
//OUT: _boolean running
#ifndef _Latch_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Latch_ctx;
/*-------- Input procedures -------------*/
extern void Latch_I_on(struct Latch_ctx* ctx, _boolean);
extern void Latch_I_off(struct Latch_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Latch_reset(struct Latch_ctx* ctx);
/*--------Context copy -------------*/
extern void Latch_copy_ctx(struct Latch_ctx* dest, struct Latch_ctx* src);
/*--------Context allocation --------*/
extern struct Latch_ctx* Latch_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Latch_step(struct Latch_ctx* ctx);
#endif
#endif
