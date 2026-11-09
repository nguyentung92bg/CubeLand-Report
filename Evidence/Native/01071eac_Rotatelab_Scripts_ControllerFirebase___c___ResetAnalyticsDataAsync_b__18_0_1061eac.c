/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<>c$$<ResetAnalyticsDataAsync>b__18_0
bool Rotatelab_Scripts_ControllerFirebase___c___ResetAnalyticsDataAsync_b__18_0 (Rotatelab_Scripts_ControllerFirebase___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<>c$$<ResetAnalyticsDataAsync>b__18_0
   bool Rotatelab_Scripts_ControllerFirebase___c___ResetAnalyticsDataAsync_b__18_0
   (Rotatelab_Scripts_ControllerFirebase___c_o* __this, const MethodInfo* method); */

undefined1 Rotatelab_Scripts_ControllerFirebase___c___ResetAnalyticsDataAsync_b__18_0_1061eac(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01071f40 + 0x1071ebc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071f44 + 0x1071ed0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01071f48 + 0x1071ee4);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar2 = (char *)(_UNK_01071f4c + 0x1071f00);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01071f50 + 0x1071f14));
    *pcVar2 = '\x01';
  }
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  return *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4);
}

