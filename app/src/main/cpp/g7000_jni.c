/*
 * g7000_jni.c — JNI-brug VideopacHorse_Android (placeholder v0.0.1-Baer)
 * Bewijst de koppelvorm: elke g7000.h-functie krijgt een dunne JNI-wrapper;
 * framebuffer gaat als IntArray naar een Bitmap/SurfaceView, audio via AudioTrack.
 */
#include <jni.h>
#include <stdlib.h>
#include "g7000.h"

static g7k_sys *g_sys;

JNIEXPORT jboolean JNICALL
Java_nl_icthorse_videopachorse_G7000Bridge_create(JNIEnv *env, jobject thiz)
{
    (void)env; (void)thiz;
    if (!g_sys) g_sys = g7k_create();
    return g_sys != NULL;
}

JNIEXPORT void JNICALL
Java_nl_icthorse_videopachorse_G7000Bridge_destroy(JNIEnv *env, jobject thiz)
{
    (void)env; (void)thiz;
    g7k_destroy(g_sys);
    g_sys = NULL;
}

JNIEXPORT jstring JNICALL
Java_nl_icthorse_videopachorse_G7000Bridge_version(JNIEnv *env, jobject thiz)
{
    (void)thiz;
    return (*env)->NewStringUTF(env, g7k_version());
}
