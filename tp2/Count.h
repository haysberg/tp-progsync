/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Count 
* to be used with : Count.c 
********/
#ifndef _Count_EC2C_H_FILE
#define _Count_EC2C_H_FILE
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
//MODULE: Count 1 1
//IN: _boolean inp
//OUT: _integer out
#ifndef _Count_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Count_ctx;
/*-------- Input procedures -------------*/
extern void Count_I_inp(struct Count_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void Count_reset(struct Count_ctx* ctx);
/*--------Context copy -------------*/
extern void Count_copy_ctx(struct Count_ctx* dest, struct Count_ctx* src);
/*--------Context allocation --------*/
extern struct Count_ctx* Count_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Count_step(struct Count_ctx* ctx);
#endif
#endif
