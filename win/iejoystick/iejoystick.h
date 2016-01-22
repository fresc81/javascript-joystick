

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __iejoystick_h__
#define __iejoystick_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IJoystickCtl_FWD_DEFINED__
#define __IJoystickCtl_FWD_DEFINED__
typedef interface IJoystickCtl IJoystickCtl;

#endif 	/* __IJoystickCtl_FWD_DEFINED__ */


#ifndef __JoystickCtl_FWD_DEFINED__
#define __JoystickCtl_FWD_DEFINED__

#ifdef __cplusplus
typedef class JoystickCtl JoystickCtl;
#else
typedef struct JoystickCtl JoystickCtl;
#endif /* __cplusplus */

#endif 	/* __JoystickCtl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IJoystickCtl_INTERFACE_DEFINED__
#define __IJoystickCtl_INTERFACE_DEFINED__

/* interface IJoystickCtl */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IJoystickCtl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB2C9EE4-54EB-4891-A9C4-3E5F89483EF3")
    IJoystickCtl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getNumDevices( 
            /* [retval][out] */ UINT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setDevice( 
            /* [in] */ UINT device,
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getDevice( 
            /* [retval][out] */ UINT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE isConnected( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setAutoPoll( 
            /* [in] */ VARIANT_BOOL autoPoll) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE poll( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE hasZAxis( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE hasRAxis( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE hasUAxis( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE hasVAxis( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE hasPOV( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getNumButtons( 
            /* [retval][out] */ UINT *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setButtonA( 
            /* [in] */ UINT button) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE setButtonB( 
            /* [in] */ UINT button) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE calibrate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getProductName( 
            /* [retval][out] */ BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_x( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_y( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_z( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_r( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_u( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_v( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_a( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_b( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_buttons( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_pov( 
            /* [retval][out] */ DWORD *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_up( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_down( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_left( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_right( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IJoystickCtlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IJoystickCtl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IJoystickCtl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IJoystickCtl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IJoystickCtl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IJoystickCtl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IJoystickCtl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IJoystickCtl * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getNumDevices )( 
            IJoystickCtl * This,
            /* [retval][out] */ UINT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setDevice )( 
            IJoystickCtl * This,
            /* [in] */ UINT device,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getDevice )( 
            IJoystickCtl * This,
            /* [retval][out] */ UINT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *isConnected )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setAutoPoll )( 
            IJoystickCtl * This,
            /* [in] */ VARIANT_BOOL autoPoll);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *poll )( 
            IJoystickCtl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *hasZAxis )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *hasRAxis )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *hasUAxis )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *hasVAxis )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *hasPOV )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getNumButtons )( 
            IJoystickCtl * This,
            /* [retval][out] */ UINT *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setButtonA )( 
            IJoystickCtl * This,
            /* [in] */ UINT button);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *setButtonB )( 
            IJoystickCtl * This,
            /* [in] */ UINT button);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *calibrate )( 
            IJoystickCtl * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getProductName )( 
            IJoystickCtl * This,
            /* [retval][out] */ BSTR *pName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_x )( 
            IJoystickCtl * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_y )( 
            IJoystickCtl * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_z )( 
            IJoystickCtl * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_r )( 
            IJoystickCtl * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_u )( 
            IJoystickCtl * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_v )( 
            IJoystickCtl * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_a )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_b )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_buttons )( 
            IJoystickCtl * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_pov )( 
            IJoystickCtl * This,
            /* [retval][out] */ DWORD *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_up )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_down )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_left )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_right )( 
            IJoystickCtl * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IJoystickCtlVtbl;

    interface IJoystickCtl
    {
        CONST_VTBL struct IJoystickCtlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IJoystickCtl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IJoystickCtl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IJoystickCtl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IJoystickCtl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IJoystickCtl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IJoystickCtl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IJoystickCtl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IJoystickCtl_getNumDevices(This,pVal)	\
    ( (This)->lpVtbl -> getNumDevices(This,pVal) ) 

#define IJoystickCtl_setDevice(This,device,pVal)	\
    ( (This)->lpVtbl -> setDevice(This,device,pVal) ) 

#define IJoystickCtl_getDevice(This,pVal)	\
    ( (This)->lpVtbl -> getDevice(This,pVal) ) 

#define IJoystickCtl_isConnected(This,pVal)	\
    ( (This)->lpVtbl -> isConnected(This,pVal) ) 

#define IJoystickCtl_setAutoPoll(This,autoPoll)	\
    ( (This)->lpVtbl -> setAutoPoll(This,autoPoll) ) 

#define IJoystickCtl_poll(This)	\
    ( (This)->lpVtbl -> poll(This) ) 

#define IJoystickCtl_hasZAxis(This,pVal)	\
    ( (This)->lpVtbl -> hasZAxis(This,pVal) ) 

#define IJoystickCtl_hasRAxis(This,pVal)	\
    ( (This)->lpVtbl -> hasRAxis(This,pVal) ) 

#define IJoystickCtl_hasUAxis(This,pVal)	\
    ( (This)->lpVtbl -> hasUAxis(This,pVal) ) 

#define IJoystickCtl_hasVAxis(This,pVal)	\
    ( (This)->lpVtbl -> hasVAxis(This,pVal) ) 

#define IJoystickCtl_hasPOV(This,pVal)	\
    ( (This)->lpVtbl -> hasPOV(This,pVal) ) 

#define IJoystickCtl_getNumButtons(This,pVal)	\
    ( (This)->lpVtbl -> getNumButtons(This,pVal) ) 

#define IJoystickCtl_setButtonA(This,button)	\
    ( (This)->lpVtbl -> setButtonA(This,button) ) 

#define IJoystickCtl_setButtonB(This,button)	\
    ( (This)->lpVtbl -> setButtonB(This,button) ) 

#define IJoystickCtl_calibrate(This)	\
    ( (This)->lpVtbl -> calibrate(This) ) 

#define IJoystickCtl_getProductName(This,pName)	\
    ( (This)->lpVtbl -> getProductName(This,pName) ) 

#define IJoystickCtl_get_x(This,pVal)	\
    ( (This)->lpVtbl -> get_x(This,pVal) ) 

#define IJoystickCtl_get_y(This,pVal)	\
    ( (This)->lpVtbl -> get_y(This,pVal) ) 

#define IJoystickCtl_get_z(This,pVal)	\
    ( (This)->lpVtbl -> get_z(This,pVal) ) 

#define IJoystickCtl_get_r(This,pVal)	\
    ( (This)->lpVtbl -> get_r(This,pVal) ) 

#define IJoystickCtl_get_u(This,pVal)	\
    ( (This)->lpVtbl -> get_u(This,pVal) ) 

#define IJoystickCtl_get_v(This,pVal)	\
    ( (This)->lpVtbl -> get_v(This,pVal) ) 

#define IJoystickCtl_get_a(This,pVal)	\
    ( (This)->lpVtbl -> get_a(This,pVal) ) 

#define IJoystickCtl_get_b(This,pVal)	\
    ( (This)->lpVtbl -> get_b(This,pVal) ) 

#define IJoystickCtl_get_buttons(This,pVal)	\
    ( (This)->lpVtbl -> get_buttons(This,pVal) ) 

#define IJoystickCtl_get_pov(This,pVal)	\
    ( (This)->lpVtbl -> get_pov(This,pVal) ) 

#define IJoystickCtl_get_up(This,pVal)	\
    ( (This)->lpVtbl -> get_up(This,pVal) ) 

#define IJoystickCtl_get_down(This,pVal)	\
    ( (This)->lpVtbl -> get_down(This,pVal) ) 

#define IJoystickCtl_get_left(This,pVal)	\
    ( (This)->lpVtbl -> get_left(This,pVal) ) 

#define IJoystickCtl_get_right(This,pVal)	\
    ( (This)->lpVtbl -> get_right(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IJoystickCtl_INTERFACE_DEFINED__ */



#ifndef __iejoystickLib_LIBRARY_DEFINED__
#define __iejoystickLib_LIBRARY_DEFINED__

/* library iejoystickLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_iejoystickLib;

EXTERN_C const CLSID CLSID_JoystickCtl;

#ifdef __cplusplus

class DECLSPEC_UUID("3AE9ED90-4B59-47A0-873B-7B71554B3C3E")
JoystickCtl;
#endif
#endif /* __iejoystickLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


