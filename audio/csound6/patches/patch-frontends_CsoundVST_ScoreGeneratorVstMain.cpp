$NetBSD: patch-frontends_CsoundVST_ScoreGeneratorVstMain.cpp,v 1.1 2014/03/06 10:16:53 mrg Exp $

+++ frontends/CsoundVST/ScoreGeneratorVstMain.cpp.orig	2013-01-07 04:49:35.000000000 -0800
--- frontends/CsoundVST/ScoreGeneratorVstMain.cpp	2014-02-12 20:42:30.000000000 -0800
@@ -42,7 +42,7 @@
 #if defined(__GNUC__) && defined(WIN32)
 #define main main_plugin
 extern "C" __declspec(dllexport) AEffect *main_plugin (audioMasterCallback audioMaster)
-#elif defined(LINUX) || defined(MACOSX)
+#elif defined(LINUX) || defined(MACOSX) || defined(__NetBSD__) || defined(__DragonFly__)
   AEffect *main_plugin (audioMasterCallback audioMaster)
 #else
   AEffect *main(audioMasterCallback audioMaster)
