/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$get_IsFirebaseAppInitialized
bool Rotatelab_Scripts_ControllerFirebase__get_IsFirebaseAppInitialized (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$get_IsFirebaseAppInitialized
   bool Rotatelab_Scripts_ControllerFirebase__get_IsFirebaseAppInitialized (const MethodInfo*
   method); */

undefined1 Rotatelab_Scripts_ControllerFirebase__get_IsFirebaseAppInitialized_1060174(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010701cc + 0x1070184);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010701d0 + 0x1070198));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_010701d4 + 0x10701ac);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  return *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4);
}

