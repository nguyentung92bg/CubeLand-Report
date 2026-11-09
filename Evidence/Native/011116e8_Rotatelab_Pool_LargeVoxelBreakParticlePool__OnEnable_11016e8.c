/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$OnEnable
void Rotatelab_Pool_LargeVoxelBreakParticlePool__OnEnable (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$OnEnable
   void Rotatelab_Pool_LargeVoxelBreakParticlePool__OnEnable
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method); */

void Rotatelab_Pool_LargeVoxelBreakParticlePool__OnEnable_11016e8(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_011117c4 + 0x11116fc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011117c8 + 0x1111710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011117cc + 0x111171c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011117d0 + 0x1111728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011117d4 + 0x1111734));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_011117d8 + 0x1111748);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x68);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011117dc + 0x111176c));
  System_Action_Int32Enum__Vector3__int__float__float____ctor_1f1bfc8
            (uVar4,param_1,**(undefined4 **)(_UNK_011117e0 + 0x111178c),0);
  uVar4 = Rotatelab_GameAction_Int32Enum__Vector3__int__float__float___op_Addition_23a7bd0
                    (uVar7,uVar4,**(undefined4 **)(_UNK_011117e4 + 0x11117a4));
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

