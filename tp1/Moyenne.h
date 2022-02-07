/********
* ec2c version 0.68
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : Moyenne 
* to be used with : Moyenne.c 
********/
#ifndef _Moyenne_EC2C_H_FILE
#define _Moyenne_EC2C_H_FILE
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
//MODULE: Moyenne 1 1
//IN: _integer input
//OUT: _integer moyenne
#ifndef _Moyenne_EC2C_SRC_FILE
/*--------Context type -------------*/
struct Moyenne_ctx;
/*-------- Input procedures -------------*/
extern void Moyenne_I_input(struct Moyenne_ctx* ctx, _integer);
/*-------- Reset procedure -----------*/
extern void Moyenne_reset(struct Moyenne_ctx* ctx);
/*--------Context copy -------------*/
extern void Moyenne_copy_ctx(struct Moyenne_ctx* dest, struct Moyenne_ctx
* src);
/*--------Context allocation --------*/
extern struct Moyenne_ctx* Moyenne_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void Moyenne_step(struct Moyenne_ctx* ctx);
#endif
#endif
