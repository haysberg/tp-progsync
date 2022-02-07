/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : MinMax 
* to be used with : MinMax.c 
********/
#ifndef _MinMax_EC2C_H_FILE
#define _MinMax_EC2C_H_FILE
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
//MODULE: MinMax 1 2
//IN: _integer input
//OUT: _integer min
//OUT: _integer max
#ifndef _MinMax_EC2C_SRC_FILE
/*--------Context type -------------*/
struct MinMax_ctx;
/*-------- Input procedures -------------*/
extern void MinMax_I_input(struct MinMax_ctx* ctx, _integer);
/*-------- Reset procedure -----------*/
extern void MinMax_reset(struct MinMax_ctx* ctx);
/*--------Context copy -------------*/
extern void MinMax_copy_ctx(struct MinMax_ctx* dest, struct MinMax_ctx* src);
/*--------Context allocation --------*/
extern struct MinMax_ctx* MinMax_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void MinMax_step(struct MinMax_ctx* ctx);
#endif
#endif
