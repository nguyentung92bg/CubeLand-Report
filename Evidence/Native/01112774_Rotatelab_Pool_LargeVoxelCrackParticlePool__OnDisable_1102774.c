/* IL2CPP: Rotatelab.Pool.LargeVoxelCrackParticlePool$$OnDisable
void Rotatelab_Pool_LargeVoxelCrackParticlePool__OnDisable (Rotatelab_Pool_LargeVoxelCrackParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelCrackParticlePool$$OnDisable
   void Rotatelab_Pool_LargeVoxelCrackParticlePool__OnDisable
   (Rotatelab_Pool_LargeVoxelCrackParticlePool_o* __this, const MethodInfo* method); */

void Rotatelab_Pool_LargeVoxelCrackParticlePool__OnDisable_1102774(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_01112850 + 0x1112788);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112854 + 0x111279c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112858 + 0x11127a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111285c + 0x11127b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112860 + 0x11127c0));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_01112864 + 0x11127d4);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 100);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01112868 + 0x11127f8));
  System_Action_Int32Enum__Vector3__Vector3____ctor_1f1a680
            (uVar4,param_1,**(undefined4 **)(_UNK_0111286c + 0x1112818),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__Vector3__Vector3___op_Subtraction_23a60a0
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01112870 + 0x1112830));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 100);
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

