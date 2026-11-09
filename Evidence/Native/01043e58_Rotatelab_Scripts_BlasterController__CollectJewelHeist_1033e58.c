/* IL2CPP: Rotatelab.Scripts.BlasterController$$CollectJewelHeist
void Rotatelab_Scripts_BlasterController__CollectJewelHeist (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$CollectJewelHeist
   void Rotatelab_Scripts_BlasterController__CollectJewelHeist
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__CollectJewelHeist_1033e58(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_01043f04 + 0x1043e6c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01043f08 + 0x1043e80));
    *pcVar4 = '\x01';
  }
  puVar5 = (undefined4 *)(param_1 + 0xa0);
  uVar6 = *puVar5;
  if (*(int *)(**(int **)(_UNK_01043f0c + 0x1043e98) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
  if (iVar3 != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xc5) = 0;
  if (*(int *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_JewelController__Collect_1012c00(*(int *)(param_1 + 0xa0),0);
  *puVar5 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

