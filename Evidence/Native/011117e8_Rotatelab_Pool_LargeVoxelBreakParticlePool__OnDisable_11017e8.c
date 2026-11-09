/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$OnDisable
void Rotatelab_Pool_LargeVoxelBreakParticlePool__OnDisable (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$OnDisable
   void Rotatelab_Pool_LargeVoxelBreakParticlePool__OnDisable
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method); */

void Rotatelab_Pool_LargeVoxelBreakParticlePool__OnDisable_11017e8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_011118c4 + 0x11117fc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011118c8 + 0x1111810));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011118cc + 0x111181c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011118d0 + 0x1111828));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011118d4 + 0x1111834));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_011118d8 + 0x1111848);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x68);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011118dc + 0x111186c));
  System_Action_Int32Enum__Vector3__int__float__float____ctor_1f1bfc8
            (uVar4,param_1,**(undefined4 **)(_UNK_011118e0 + 0x111188c),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__Vector3__int__float__float___op_Subtraction_23a7cec
                    (uVar7,uVar4,**(undefined4 **)(_UNK_011118e4 + 0x11118a4));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x68);
  *puVar5 = uVar4;
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

