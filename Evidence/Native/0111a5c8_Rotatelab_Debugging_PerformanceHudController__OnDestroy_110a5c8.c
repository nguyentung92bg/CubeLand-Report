/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$OnDestroy
void Rotatelab_Debugging_PerformanceHudController__OnDestroy (Rotatelab_Debugging_PerformanceHudController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$OnDestroy
   void Rotatelab_Debugging_PerformanceHudController__OnDestroy
   (Rotatelab_Debugging_PerformanceHudController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_PerformanceHudController__OnDestroy_110a5c8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_0111a6b0 + 0x111a5dc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a6b4 + 0x111a5f0));
    *pcVar4 = '\x01';
  }
  pcVar4 = (char *)(_UNK_0111a6b8 + 0x111a604);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a6bc + 0x111a618));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_0111a6c0 + 0x111a62c);
  uVar5 = **(undefined4 **)(*piVar6 + 0x5c);
  if (*(int *)(**(int **)(_UNK_0111a6c4 + 0x111a638) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar5,param_1,0);
  if (iVar3 != 0) {
    pcVar4 = (char *)(_UNK_0111a6c8 + 0x111a674);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0111a6cc + 0x111a688));
      *pcVar4 = '\x01';
    }
    **(undefined4 **)(*piVar6 + 0x5c) = 0;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(*piVar6 + 0x5c) >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << ((*(uint *)(*piVar6 + 0x5c) & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
  return;
}

