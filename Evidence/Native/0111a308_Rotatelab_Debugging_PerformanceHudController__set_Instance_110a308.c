/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$set_Instance
void Rotatelab_Debugging_PerformanceHudController__set_Instance (Rotatelab_Debugging_PerformanceHudController_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.PerformanceHudController$$set_Instance
   void Rotatelab_Debugging_PerformanceHudController__set_Instance
   (Rotatelab_Debugging_PerformanceHudController_o* value, const MethodInfo* method); */

void Rotatelab_Debugging_PerformanceHudController__set_Instance_110a308(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0111a360 + 0x111a31c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a364 + 0x111a330));
    *pcVar5 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0111a368 + 0x111a344);
  **(undefined4 **)(*piVar3 + 0x5c) = param_1;
  uVar4 = *(uint *)(*piVar3 + 0x5c);
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (uVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((uVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

