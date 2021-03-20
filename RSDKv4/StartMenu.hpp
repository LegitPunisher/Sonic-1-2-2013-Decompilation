#ifndef NATIVE_STARTMENU_H
#define NATIVE_STARTMENU_H

#if !RETRO_USE_ORIGINAL_CODE

enum StartMenuStates { STSTATES_INVALID, STSTATES_TITLE, STSTATES_MAIN, STSTATES_SAVE };
struct NativeEntity_StartMenu : NativeEntityBase {
    void (*state)(NativeEntity_StartMenu *);
    bool changingStates;

    bool transition    = false;
    bool transitioning = false;
    bool back          = false;
    int transPos       = 0; // trans rights
    int transTimer     = 0;

    int timers[10]; // LOL i really do not wanna do what i did with pause menu
    int variables[10];

    int offset = 0;

    int selected;
};

void StartMenu_Create(void *objPtr);
void StartMenu_Main(void *objPtr);

#endif

#endif // !NATIVE_RETROGAMELOOP_H
