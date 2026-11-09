/* IL2CPP: Rotatelab.CustomRotateEventsController$$ClearParkedEcpm
void Rotatelab_CustomRotateEventsController__ClearParkedEcpm (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$ClearParkedEcpm
   void Rotatelab_CustomRotateEventsController__ClearParkedEcpm
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__ClearParkedEcpm_fd2de0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x24),0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),0);
  piVar3 = (int *)(param_1 + 0x2c);
  if (*piVar3 == 0) {
    return;
  }
  UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*piVar3,0);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)piVar3 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)piVar3 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

