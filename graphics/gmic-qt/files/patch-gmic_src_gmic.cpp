--- gmic/src/gmic.cpp.orig	2021-07-16 09:15:32 UTC
+++ gmic/src/gmic.cpp
@@ -2443,7 +2443,7 @@ double gmic::mp_store(const Ts *const ptr, const unsig
 // Manage correspondence between abort pointers and thread ids.
 CImgList<void*> gmic::list_p_is_abort = CImgList<void*>();
 bool *gmic::abort_ptr(bool *const p_is_abort) {
-#if defined(__MACOSX__) || defined(__APPLE__)
+#if defined(__MACOSX__) || defined(__APPLE__) || defined(__FreeBSD__)
   void* tid = (void*)(cimg_ulong)getpid();
 #elif cimg_OS==1
   void* tid = (void*)(cimg_ulong)syscall(SYS_gettid);
@@ -2781,7 +2781,7 @@ gmic::~gmic() {
   cimg::exception_mode(cimg_exception_mode);
   cimg_forX(display_windows,l) delete &display_window(l);
   cimg::mutex(21);
-#if defined(__MACOSX__) || defined(__APPLE__)
+#if defined(__MACOSX__) || defined(__APPLE__) || defined(__FreeBSD__)
   void* tid = (void*)(cimg_ulong)getpid();
 #elif cimg_OS==1
   void* tid = (void*)(cimg_ulong)syscall(SYS_gettid);
