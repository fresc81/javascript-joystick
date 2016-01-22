

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Fri Jan 22 23:47:42 2016
 */
/* Compiler settings for iejoystick.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 440
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "iejoystick.h"

#define TYPE_FORMAT_STRING_SIZE   49                                
#define PROC_FORMAT_STRING_SIZE   835                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _iejoystick_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } iejoystick_MIDL_TYPE_FORMAT_STRING;

typedef struct _iejoystick_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } iejoystick_MIDL_PROC_FORMAT_STRING;

typedef struct _iejoystick_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } iejoystick_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const iejoystick_MIDL_TYPE_FORMAT_STRING iejoystick__MIDL_TypeFormatString;
extern const iejoystick_MIDL_PROC_FORMAT_STRING iejoystick__MIDL_ProcFormatString;
extern const iejoystick_MIDL_EXPR_FORMAT_STRING iejoystick__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IJoystickCtl_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IJoystickCtl_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT40_OR_LATER)
#error You need Windows NT 4.0 or later to run this stub because it uses these features:
#error   -Oif or -Oicf, [wire_marshal] or [user_marshal] attribute.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const iejoystick_MIDL_PROC_FORMAT_STRING iejoystick__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure getNumDevices */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 16 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 18 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 20 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 22 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 24 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 26 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDevice */

/* 28 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 30 */	NdrFcLong( 0x0 ),	/* 0 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
/* 36 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0x22 ),	/* 34 */
/* 42 */	0x4,		/* Oi2 Flags:  has return, */
			0x3,		/* 3 */

	/* Parameter device */

/* 44 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 46 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pVal */

/* 50 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 52 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 54 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 56 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 58 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 60 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getDevice */

/* 62 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 64 */	NdrFcLong( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x9 ),	/* 9 */
/* 70 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x24 ),	/* 36 */
/* 76 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 78 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 80 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 84 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 86 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isConnected */

/* 90 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 92 */	NdrFcLong( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0xa ),	/* 10 */
/* 98 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x22 ),	/* 34 */
/* 104 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 106 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 108 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 110 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 112 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 114 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAutoPoll */

/* 118 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 120 */	NdrFcLong( 0x0 ),	/* 0 */
/* 124 */	NdrFcShort( 0xb ),	/* 11 */
/* 126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 128 */	NdrFcShort( 0x6 ),	/* 6 */
/* 130 */	NdrFcShort( 0x8 ),	/* 8 */
/* 132 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter autoPoll */

/* 134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 138 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure poll */

/* 146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 152 */	NdrFcShort( 0xc ),	/* 12 */
/* 154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 158 */	NdrFcShort( 0x8 ),	/* 8 */
/* 160 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 162 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 164 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 166 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hasZAxis */

/* 168 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 170 */	NdrFcLong( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0xd ),	/* 13 */
/* 176 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x22 ),	/* 34 */
/* 182 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 184 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 186 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 188 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 190 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 192 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hasRAxis */

/* 196 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 198 */	NdrFcLong( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0xe ),	/* 14 */
/* 204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 208 */	NdrFcShort( 0x22 ),	/* 34 */
/* 210 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 212 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 214 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 216 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 218 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 220 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 222 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hasUAxis */

/* 224 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 226 */	NdrFcLong( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0xf ),	/* 15 */
/* 232 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 236 */	NdrFcShort( 0x22 ),	/* 34 */
/* 238 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 240 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 242 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 244 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 246 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 248 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hasVAxis */

/* 252 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 254 */	NdrFcLong( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x10 ),	/* 16 */
/* 260 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */
/* 264 */	NdrFcShort( 0x22 ),	/* 34 */
/* 266 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 268 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 270 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 272 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 274 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 276 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hasPOV */

/* 280 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x11 ),	/* 17 */
/* 288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x22 ),	/* 34 */
/* 294 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 296 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 298 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 300 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 302 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 304 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 306 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getNumButtons */

/* 308 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 310 */	NdrFcLong( 0x0 ),	/* 0 */
/* 314 */	NdrFcShort( 0x12 ),	/* 18 */
/* 316 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 320 */	NdrFcShort( 0x24 ),	/* 36 */
/* 322 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 324 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 326 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 330 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 332 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 334 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setButtonA */

/* 336 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 338 */	NdrFcLong( 0x0 ),	/* 0 */
/* 342 */	NdrFcShort( 0x13 ),	/* 19 */
/* 344 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 350 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter button */

/* 352 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 354 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 358 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 360 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 362 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setButtonB */

/* 364 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 370 */	NdrFcShort( 0x14 ),	/* 20 */
/* 372 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 374 */	NdrFcShort( 0x8 ),	/* 8 */
/* 376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 378 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter button */

/* 380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure calibrate */

/* 392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 398 */	NdrFcShort( 0x15 ),	/* 21 */
/* 400 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 406 */	0x4,		/* Oi2 Flags:  has return, */
			0x1,		/* 1 */

	/* Return value */

/* 408 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 410 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 412 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getProductName */

/* 414 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 416 */	NdrFcLong( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x16 ),	/* 22 */
/* 422 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 426 */	NdrFcShort( 0x8 ),	/* 8 */
/* 428 */	0x5,		/* Oi2 Flags:  srv must size, has return, */
			0x2,		/* 2 */

	/* Parameter pName */

/* 430 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 432 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 434 */	NdrFcShort( 0x26 ),	/* Type Offset=38 */

	/* Return value */

/* 436 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 438 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 440 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_x */

/* 442 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 444 */	NdrFcLong( 0x0 ),	/* 0 */
/* 448 */	NdrFcShort( 0x17 ),	/* 23 */
/* 450 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 452 */	NdrFcShort( 0x0 ),	/* 0 */
/* 454 */	NdrFcShort( 0x24 ),	/* 36 */
/* 456 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 458 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 460 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 464 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 466 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_y */

/* 470 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 472 */	NdrFcLong( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x18 ),	/* 24 */
/* 478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 482 */	NdrFcShort( 0x24 ),	/* 36 */
/* 484 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 488 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 494 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_z */

/* 498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 504 */	NdrFcShort( 0x19 ),	/* 25 */
/* 506 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x24 ),	/* 36 */
/* 512 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 514 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 520 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_r */

/* 526 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 528 */	NdrFcLong( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x1a ),	/* 26 */
/* 534 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 538 */	NdrFcShort( 0x24 ),	/* 36 */
/* 540 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 542 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_u */

/* 554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 560 */	NdrFcShort( 0x1b ),	/* 27 */
/* 562 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 566 */	NdrFcShort( 0x24 ),	/* 36 */
/* 568 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 572 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 578 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_v */

/* 582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x1c ),	/* 28 */
/* 590 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x24 ),	/* 36 */
/* 596 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 598 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_a */

/* 610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x1d ),	/* 29 */
/* 618 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 622 */	NdrFcShort( 0x22 ),	/* 34 */
/* 624 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 626 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 630 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_b */

/* 638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x1e ),	/* 30 */
/* 646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x22 ),	/* 34 */
/* 652 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 654 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 658 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_buttons */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x1f ),	/* 31 */
/* 674 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x24 ),	/* 36 */
/* 680 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 682 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 684 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 688 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 690 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 692 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_pov */

/* 694 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 696 */	NdrFcLong( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x20 ),	/* 32 */
/* 702 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 704 */	NdrFcShort( 0x0 ),	/* 0 */
/* 706 */	NdrFcShort( 0x24 ),	/* 36 */
/* 708 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 710 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 712 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 718 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_up */

/* 722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x21 ),	/* 33 */
/* 730 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0x22 ),	/* 34 */
/* 736 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 738 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 740 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 742 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_down */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x22 ),	/* 34 */
/* 758 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x22 ),	/* 34 */
/* 764 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 766 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 768 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 770 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 774 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_left */

/* 778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x23 ),	/* 35 */
/* 786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 790 */	NdrFcShort( 0x22 ),	/* 34 */
/* 792 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 794 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 798 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 800 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_right */

/* 806 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 808 */	NdrFcLong( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x24 ),	/* 36 */
/* 814 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x22 ),	/* 34 */
/* 820 */	0x4,		/* Oi2 Flags:  has return, */
			0x2,		/* 2 */

	/* Parameter pVal */

/* 822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 826 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const iejoystick_MIDL_TYPE_FORMAT_STRING iejoystick__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  8 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 12 */	NdrFcShort( 0x1a ),	/* Offset= 26 (38) */
/* 14 */	
			0x13, 0x0,	/* FC_OP */
/* 16 */	NdrFcShort( 0xc ),	/* Offset= 12 (28) */
/* 18 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 20 */	NdrFcShort( 0x2 ),	/* 2 */
/* 22 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 24 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 26 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 28 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 30 */	NdrFcShort( 0x8 ),	/* 8 */
/* 32 */	NdrFcShort( 0xfff2 ),	/* Offset= -14 (18) */
/* 34 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 36 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 38 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 40 */	NdrFcShort( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (14) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IJoystickCtl, ver. 0.0,
   GUID={0xDB2C9EE4,0x54EB,0x4891,{0xA9,0xC4,0x3E,0x5F,0x89,0x48,0x3E,0xF3}} */

#pragma code_seg(".orpc")
static const unsigned short IJoystickCtl_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    28,
    62,
    90,
    118,
    146,
    168,
    196,
    224,
    252,
    280,
    308,
    336,
    364,
    392,
    414,
    442,
    470,
    498,
    526,
    554,
    582,
    610,
    638,
    666,
    694,
    722,
    750,
    778,
    806
    };

static const MIDL_STUBLESS_PROXY_INFO IJoystickCtl_ProxyInfo =
    {
    &Object_StubDesc,
    iejoystick__MIDL_ProcFormatString.Format,
    &IJoystickCtl_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IJoystickCtl_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    iejoystick__MIDL_ProcFormatString.Format,
    &IJoystickCtl_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(37) _IJoystickCtlProxyVtbl = 
{
    &IJoystickCtl_ProxyInfo,
    &IID_IJoystickCtl,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::getNumDevices */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::setDevice */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::getDevice */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::isConnected */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::setAutoPoll */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::poll */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::hasZAxis */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::hasRAxis */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::hasUAxis */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::hasVAxis */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::hasPOV */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::getNumButtons */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::setButtonA */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::setButtonB */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::calibrate */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::getProductName */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_x */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_y */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_z */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_r */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_u */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_v */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_a */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_b */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_buttons */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_pov */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_up */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_down */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_left */ ,
    (void *) (INT_PTR) -1 /* IJoystickCtl::get_right */
};


static const PRPC_STUB_FUNCTION IJoystickCtl_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IJoystickCtlStubVtbl =
{
    &IID_IJoystickCtl,
    &IJoystickCtl_ServerInfo,
    37,
    &IJoystickCtl_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    iejoystick__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x20000, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _iejoystick_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IJoystickCtlProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _iejoystick_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IJoystickCtlStubVtbl,
    0
};

PCInterfaceName const _iejoystick_InterfaceNamesList[] = 
{
    "IJoystickCtl",
    0
};

const IID *  const _iejoystick_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _iejoystick_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _iejoystick, pIID, n)

int __stdcall _iejoystick_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_iejoystick_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo iejoystick_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _iejoystick_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _iejoystick_StubVtblList,
    (const PCInterfaceName * ) & _iejoystick_InterfaceNamesList,
    (const IID ** ) & _iejoystick_BaseIIDList,
    & _iejoystick_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

