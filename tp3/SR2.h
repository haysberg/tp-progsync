/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : SR2 
* to be used with : SR2.c 
********/
#ifndef _SR2_EC2C_H_FILE
#define _SR2_EC2C_H_FILE
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
//MODULE: SR2 3 1
//IN: _boolean init
//IN: _boolean S
//IN: _boolean R
//OUT: _boolean Q
#ifndef _SR2_EC2C_SRC_FILE
/*--------Context type -------------*/
struct SR2_ctx;
/*-------- Input procedures -------------*/
extern void SR2_I_init(struct SR2_ctx* ctx, _boolean);
extern void SR2_I_S(struct SR2_ctx* ctx, _boolean);
extern void SR2_I_R(struct SR2_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void SR2_reset(struct SR2_ctx* ctx);
/*--------Context copy -------------*/
extern void SR2_copy_ctx(struct SR2_ctx* dest, struct SR2_ctx* src);
/*--------Context allocation --------*/
extern struct SR2_ctx* SR2_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void SR2_step(struct SR2_ctx* ctx);
#endif
#endif
