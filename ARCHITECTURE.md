# ARCHITECTURE.md — VideopacHorse_Android (placeholder)

## Doel-architectuur

```
MainActivity (Kotlin)
 ├─ G7000Bridge (JNI, object)  ── libg7000.so ── VideopacHorse_Core/src/*.c (zusterrepo)
 ├─ EmulatorView: SurfaceView ◄─ RGBA-framebuffer (IntArray per frame)
 ├─ AudioTrack (mono s16, rate uit g7k_audio_sample_rate)
 ├─ SAF-file-picker → ByteArray → g7k_load_bios/cart (blijft op toestel)
 └─ Input: touch-overlay (joystick+fire) & GamepadEvent → g7k_joystick_set/g7k_key_set
```

## Status v0.0.1-Baer

Alleen de koppelvorm ligt vast (CMakeLists + JNI-stub + Kotlin-bridge). Geen Gradle-wrapper,
geen APK. Promotie naar bouwbaar project is een eigen release (Oranje) met eigen WhatIf.

## Relaties

- **VideopacHorse_Core** — enige bron van emulatie-logica (relatief pad in CMake)
- **HorseAPK** — distributieroute zodra er een APK is
- **RandomRingtone/BeterValys-conventies** — versioning, release-protocol, stable-APK-regels
