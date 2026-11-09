/* IL2CPP: Rotatelab.Scripts.GameManager$$<ObserveUnhandledTaskExceptions>g__Handler|11_0
void Rotatelab_Scripts_GameManager___ObserveUnhandledTaskExceptions_g__Handler_11_0 (Il2CppObject* sender, System_Threading_Tasks_UnobservedTaskExceptionEventArgs_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$<ObserveUnhandledTaskExceptions>g__Handler|11_0
   void Rotatelab_Scripts_GameManager___ObserveUnhandledTaskExceptions_g__Handler_11_0
   (Il2CppObject* sender, System_Threading_Tasks_UnobservedTaskExceptionEventArgs_o* e, const
   MethodInfo* method); */

void Rotatelab_Scripts_GameManager___ObserveUnhandledTaskExceptions_g__Handler_11_0_1067078
               (undefined4 param_1,int param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (char *)(_UNK_01077100 + 0x107708c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077104 + 0x10770a0));
    *pcVar1 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(param_2 + 0xc) != '\0') {
    return;
  }
  uVar2 = *(undefined4 *)(param_2 + 8);
  if (*(int *)(**(int **)(_UNK_01077108 + 0x10770cc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Utilities__ProcessException_1076464(uVar2,0,0);
  *(undefined1 *)(param_2 + 0xc) = 1;
  return;
}

