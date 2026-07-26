# CLAUDE.md — VideopacHorse_Android

Android-placeholder van VideopacHorse (familie-regels: `Meta_VideopacHorse/CLAUDE.md` —
lock-step versies, Videopac-pioniers-codenamen, geen ROMs in git, WhatIf, prompts/).

Repo-specifiek:
1. Core komt ALTIJD uit de zusterrepo via CMake (`app/src/main/cpp/CMakeLists.txt`) — nooit core-bestanden hierheen kopiëren (layer integrity, zelfde regel als PhotoVerify).
2. Bij promotie naar bouwbare APK: `JAVA_HOME=/usr/local/opt/openjdk@21/...` (Meta_Master-regel), APK-naamgeving `VideopacHorse-v<versie>-<codenaam>-<type>.apk`, Drive-upload + HorseAPK-flow, release-build-protocol + hardware-smoke vóór release-tag.
3. BIOS/ROMs via SAF-picker; app-sandbox, niets bundelen.
