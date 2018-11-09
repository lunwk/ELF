/*
 * tkPlatDecls.h --
 *
 *	Declarations of functions in the platform-specific public Tcl API.
 *
 * Copyright (c) 1998-1999 by Scriptics Corporation.
 *
 * See the file "license.terms" for information on usage and redistribution
 * of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 */

#ifndef _TKPLATDECLS
#define _TKPLATDECLS

#ifdef BUILD_tk
#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT
#endif

/*
 * WARNING: This file is automatically generated by the tools/genStubs.tcl
 * script.  Any modifications to the function declarations below should be made
 * in the generic/tk.decls script.
 */

#ifdef __cplusplus
extern "C" {
#endif

/* !BEGIN!: Do not edit below this line. */

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Exported function declarations:
 */

#if defined(_WIN32) || defined(__CYGWIN__) /* WIN */
/* 0 */
EXTERN Window Tk_AttachHWND(Tk_Window tkwin, HWND hwnd);
/* 1 */
EXTERN HINSTANCE Tk_GetHINSTANCE(void);
/* 2 */
EXTERN HWND Tk_GetHWND(Window window);
/* 3 */
EXTERN Tk_Window Tk_HWNDToWindow(HWND hwnd);
/* 4 */
EXTERN void Tk_PointerEvent(HWND hwnd, int x, int y);
/* 5 */
EXTERN int Tk_TranslateWinEvent(
    HWND hwnd,
    UINT message,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT* result);
#endif /* WIN */
#ifdef MAC_OSX_TK /* AQUA */
/* 0 */
EXTERN void Tk_MacOSXSetEmbedHandler(
    Tk_MacOSXEmbedRegisterWinProc* registerWinProcPtr,
    Tk_MacOSXEmbedGetGrafPortProc* getPortProcPtr,
    Tk_MacOSXEmbedMakeContainerExistProc* containerExistProcPtr,
    Tk_MacOSXEmbedGetClipProc* getClipProc,
    Tk_MacOSXEmbedGetOffsetInParentProc* getOffsetProc);
/* 1 */
EXTERN void Tk_MacOSXTurnOffMenus(void);
/* 2 */
EXTERN void Tk_MacOSXTkOwnsCursor(int tkOwnsIt);
/* 3 */
EXTERN void TkMacOSXInitMenus(Tcl_Interp* interp);
/* 4 */
EXTERN void TkMacOSXInitAppleEvents(Tcl_Interp* interp);
/* 5 */
EXTERN void TkGenWMConfigureEvent(
    Tk_Window tkwin,
    int x,
    int y,
    int width,
    int height,
    int flags);
/* 6 */
EXTERN void TkMacOSXInvalClipRgns(Tk_Window tkwin);
/* 7 */
EXTERN void* TkMacOSXGetDrawablePort(Drawable drawable);
/* 8 */
EXTERN void* TkMacOSXGetRootControl(Drawable drawable);
/* 9 */
EXTERN void Tk_MacOSXSetupTkNotifier(void);
/* 10 */
EXTERN int Tk_MacOSXIsAppInFront(void);
#endif /* AQUA */

typedef struct TkPlatStubs {
  int magic;
  void* hooks;

#if defined(_WIN32) || defined(__CYGWIN__) /* WIN */
  Window (*tk_AttachHWND)(Tk_Window tkwin, HWND hwnd); /* 0 */
  HINSTANCE (*tk_GetHINSTANCE)(void); /* 1 */
  HWND (*tk_GetHWND)(Window window); /* 2 */
  Tk_Window (*tk_HWNDToWindow)(HWND hwnd); /* 3 */
  void (*tk_PointerEvent)(HWND hwnd, int x, int y); /* 4 */
  int (*tk_TranslateWinEvent)(
      HWND hwnd,
      UINT message,
      WPARAM wParam,
      LPARAM lParam,
      LRESULT* result); /* 5 */
#endif /* WIN */
#ifdef MAC_OSX_TK /* AQUA */
  void (*tk_MacOSXSetEmbedHandler)(
      Tk_MacOSXEmbedRegisterWinProc* registerWinProcPtr,
      Tk_MacOSXEmbedGetGrafPortProc* getPortProcPtr,
      Tk_MacOSXEmbedMakeContainerExistProc* containerExistProcPtr,
      Tk_MacOSXEmbedGetClipProc* getClipProc,
      Tk_MacOSXEmbedGetOffsetInParentProc* getOffsetProc); /* 0 */
  void (*tk_MacOSXTurnOffMenus)(void); /* 1 */
  void (*tk_MacOSXTkOwnsCursor)(int tkOwnsIt); /* 2 */
  void (*tkMacOSXInitMenus)(Tcl_Interp* interp); /* 3 */
  void (*tkMacOSXInitAppleEvents)(Tcl_Interp* interp); /* 4 */
  void (*tkGenWMConfigureEvent)(
      Tk_Window tkwin,
      int x,
      int y,
      int width,
      int height,
      int flags); /* 5 */
  void (*tkMacOSXInvalClipRgns)(Tk_Window tkwin); /* 6 */
  void* (*tkMacOSXGetDrawablePort)(Drawable drawable); /* 7 */
  void* (*tkMacOSXGetRootControl)(Drawable drawable); /* 8 */
  void (*tk_MacOSXSetupTkNotifier)(void); /* 9 */
  int (*tk_MacOSXIsAppInFront)(void); /* 10 */
#endif /* AQUA */
} TkPlatStubs;

extern const TkPlatStubs* tkPlatStubsPtr;

#ifdef __cplusplus
}
#endif

#if defined(USE_TK_STUBS)

/*
 * Inline function declarations:
 */

#if defined(_WIN32) || defined(__CYGWIN__) /* WIN */
#define Tk_AttachHWND (tkPlatStubsPtr->tk_AttachHWND) /* 0 */
#define Tk_GetHINSTANCE (tkPlatStubsPtr->tk_GetHINSTANCE) /* 1 */
#define Tk_GetHWND (tkPlatStubsPtr->tk_GetHWND) /* 2 */
#define Tk_HWNDToWindow (tkPlatStubsPtr->tk_HWNDToWindow) /* 3 */
#define Tk_PointerEvent (tkPlatStubsPtr->tk_PointerEvent) /* 4 */
#define Tk_TranslateWinEvent (tkPlatStubsPtr->tk_TranslateWinEvent) /* 5 */
#endif /* WIN */
#ifdef MAC_OSX_TK /* AQUA */
#define Tk_MacOSXSetEmbedHandler \
  (tkPlatStubsPtr->tk_MacOSXSetEmbedHandler) /* 0 */
#define Tk_MacOSXTurnOffMenus (tkPlatStubsPtr->tk_MacOSXTurnOffMenus) /* 1 */
#define Tk_MacOSXTkOwnsCursor (tkPlatStubsPtr->tk_MacOSXTkOwnsCursor) /* 2 */
#define TkMacOSXInitMenus (tkPlatStubsPtr->tkMacOSXInitMenus) /* 3 */
#define TkMacOSXInitAppleEvents \
  (tkPlatStubsPtr->tkMacOSXInitAppleEvents) /* 4 */
#define TkGenWMConfigureEvent (tkPlatStubsPtr->tkGenWMConfigureEvent) /* 5 */
#define TkMacOSXInvalClipRgns (tkPlatStubsPtr->tkMacOSXInvalClipRgns) /* 6 */
#define TkMacOSXGetDrawablePort \
  (tkPlatStubsPtr->tkMacOSXGetDrawablePort) /* 7 */
#define TkMacOSXGetRootControl (tkPlatStubsPtr->tkMacOSXGetRootControl) /* 8 \
                                                                           */
#define Tk_MacOSXSetupTkNotifier \
  (tkPlatStubsPtr->tk_MacOSXSetupTkNotifier) /* 9 */
#define Tk_MacOSXIsAppInFront (tkPlatStubsPtr->tk_MacOSXIsAppInFront) /* 10 */
#endif /* AQUA */

#endif /* defined(USE_TK_STUBS) */

/* !END!: Do not edit above this line. */

#ifdef __cplusplus
}
#endif

#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLIMPORT

#endif /* _TKPLATDECLS */
