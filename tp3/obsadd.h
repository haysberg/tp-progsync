/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : obsadd 
* to be used with : obsadd.c 
********/
#ifndef _obsadd_EC2C_H_FILE
#define _obsadd_EC2C_H_FILE
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
//MODULE: obsadd 3 1
//IN: _boolean a
//IN: _boolean b
//IN: _boolean c
//OUT: _boolean O
#ifndef _obsadd_EC2C_SRC_FILE
/*--------Context type -------------*/
struct obsadd_ctx;
/*-------- Input procedures -------------*/
extern void obsadd_I_a(struct obsadd_ctx* ctx, _boolean);
extern void obsadd_I_b(struct obsadd_ctx* ctx, _boolean);
extern void obsadd_I_c(struct obsadd_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void obsadd_reset(struct obsadd_ctx* ctx);
/*--------Context copy -------------*/
extern void obsadd_copy_ctx(struct obsadd_ctx* dest, struct obsadd_ctx* src);
/*--------Context allocation --------*/
extern struct obsadd_ctx* obsadd_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void obsadd_step(struct obsadd_ctx* ctx);
#endif
#endif
