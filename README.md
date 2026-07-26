# VideopacHorse_Android

Android-frontend (placeholder) van de VideopacHorse G7000-emulator.

**Status: v0.0.1-Baer — JNI-skelet, nog geen bouwbare APK.** De structuur toont hoe de
C11-core (zusterrepo `VideopacHorse_Core`) via NDK/CMake wordt meegecompileerd:

```
app/src/main/cpp/CMakeLists.txt   — compileert ../../../../../VideopacHorse_Core/src/*.c + g7000_jni.c
app/src/main/cpp/g7000_jni.c      — JNI-brug over include/g7000.h
app/src/main/java/nl/icthorse/videopachorse/MainActivity.kt — SurfaceView + audio + input (stub)
```

Volgende stap (aparte release): volledig Gradle-project genereren (Android Studio-template),
JAVA_HOME=/usr/local/opt/openjdk@21 conform Meta_Master, APK via HorseAPK-flow.
Geen ROMs/BIOS in deze repo; de app laadt ze via de Android file-picker (SAF).
