package nl.icthorse.videopachorse

/*
 * MainActivity.kt — placeholder v0.0.1-Baer (nog geen Gradle-project).
 * Doel-architectuur: G7000Bridge (JNI) -> SurfaceView-blit van het RGBA-framebuffer,
 * AudioTrack voor mono s16-audio, SAF-file-picker voor BIOS/ROM (blijven op toestel),
 * touch-overlay + gamepad voor joystick/keymatrix.
 */
object G7000Bridge {
    init { System.loadLibrary("g7000") }
    external fun create(): Boolean
    external fun destroy()
    external fun version(): String
}
