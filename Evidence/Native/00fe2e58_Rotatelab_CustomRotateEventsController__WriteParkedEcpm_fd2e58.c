/* IL2CPP: Rotatelab.CustomRotateEventsController$$WriteParkedEcpm
void Rotatelab_CustomRotateEventsController__WriteParkedEcpm (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$WriteParkedEcpm
   void Rotatelab_CustomRotateEventsController__WriteParkedEcpm
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__WriteParkedEcpm_fd2e58(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_00fe2ef0 + 0xfe2e70);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2ef4 + 0xfe2e84));
    *pcVar5 = '\x01';
  }
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(float *)(iVar3 + 0xe0) <= 0.0) {
    Rotatelab_CustomRotateEventsController__SetEcpmProperties_fd2a9c
              (param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
               **(undefined4 **)(_UNK_00fe2ef8 + 0xfe2ec0),0);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),0);
  piVar4 = (int *)(param_1 + 0x2c);
  if (*piVar4 == 0) {
    return;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*piVar4,0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

