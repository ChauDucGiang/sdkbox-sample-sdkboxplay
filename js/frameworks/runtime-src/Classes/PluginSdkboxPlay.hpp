#ifndef __PluginSdkboxPlay_h__
#define __PluginSdkboxPlay_h__

#include "jsapi.h"
#include "jsfriendapi.h"


extern JSClass  *jsb_sdkbox_PluginSdkboxPlay_class;
extern JSObject *jsb_sdkbox_PluginSdkboxPlay_prototype;

#if MOZJS_MAJOR_VERSION >= 33
void js_register_PluginSdkboxPlay_PluginSdkboxPlay(JSContext *cx, JS::HandleObject global);
void register_all_PluginSdkboxPlay(JSContext* cx, JS::HandleObject obj);
#else
void js_register_PluginSdkboxPlay_PluginSdkboxPlay(JSContext *cx, JSObject* global);
void register_all_PluginSdkboxPlay(JSContext* cx, JSObject* obj);
#endif

bool js_PluginSdkboxPlay_PluginSdkboxPlay_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_PluginSdkboxPlay_PluginSdkboxPlay_finalize(JSContext *cx, JSObject *obj);
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_signout(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_signout(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_incrementAchievement(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_incrementAchievement(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_showLeaderboard(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_showLeaderboard(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_isConnected(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_isConnected(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_showAchievements(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_showAchievements(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_signin(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_signin(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_init(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_init(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_submitScore(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_submitScore(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_unlockAchievement(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_unlockAchievement(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_getVersion(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_getVersion(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#if defined(MOZJS_MAJOR_VERSION)
bool js_PluginSdkboxPlay_PluginSdkboxPlay_removeListener(JSContext *cx, uint32_t argc, jsval *vp);
#elif defined(JS_VERSION)
JSBool js_PluginSdkboxPlay_PluginSdkboxPlay_removeListener(JSContext *cx, uint32_t argc, jsval *vp);
#endif
#endif

