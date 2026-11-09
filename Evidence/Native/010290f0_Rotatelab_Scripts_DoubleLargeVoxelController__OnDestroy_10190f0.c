/* IL2CPP: Rotatelab.Scripts.DoubleLargeVoxelController$$OnDestroy
void Rotatelab_Scripts_DoubleLargeVoxelController__OnDestroy (Rotatelab_Scripts_DoubleLargeVoxelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DoubleLargeVoxelController$$OnDestroy
   void Rotatelab_Scripts_DoubleLargeVoxelController__OnDestroy
   (Rotatelab_Scripts_DoubleLargeVoxelController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_DoubleLargeVoxelController__OnDestroy_10190f0(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar5 = (char *)(_UNK_0102919c + 0x1029104);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010291a0 + 0x1029118));
    *pcVar5 = '\x01';
  }
  Rotatelab_Scripts_MergedBlockController__CleanupGeneratedAssets_1019274(param_1);
  piVar7 = *(int **)(_UNK_010291a4 + 0x1029134);
  puVar4 = (undefined4 *)(param_1 + 0x3c);
  uVar6 = *puVar4;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
  if (iVar3 == 0) {
    return;
  }
  uVar6 = *puVar4;
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__Destroy_3609820(uVar6,0);
  *puVar4 = 0;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

