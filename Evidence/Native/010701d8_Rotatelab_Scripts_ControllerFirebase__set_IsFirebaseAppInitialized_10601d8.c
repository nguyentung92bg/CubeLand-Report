/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$set_IsFirebaseAppInitialized
void Rotatelab_Scripts_ControllerFirebase__set_IsFirebaseAppInitialized (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$set_IsFirebaseAppInitialized
   void Rotatelab_Scripts_ControllerFirebase__set_IsFirebaseAppInitialized (bool value, const
   MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__set_IsFirebaseAppInitialized_10601d8(undefined1 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01070234 + 0x10701ec);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070238 + 0x1070200));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0107023c + 0x1070214);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4) = param_1;
  return;
}

