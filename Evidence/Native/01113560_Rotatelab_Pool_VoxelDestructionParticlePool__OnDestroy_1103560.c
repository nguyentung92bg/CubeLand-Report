/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$OnDestroy
void Rotatelab_Pool_VoxelDestructionParticlePool__OnDestroy (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$OnDestroy
   void Rotatelab_Pool_VoxelDestructionParticlePool__OnDestroy
   (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, const MethodInfo* method); */

void Rotatelab_Pool_VoxelDestructionParticlePool__OnDestroy_1103560(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_011136c8 + 0x1113574);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011136cc + 0x1113588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011136d0 + 0x1113594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011136d4 + 0x11135a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011136d8 + 0x11135ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011136dc + 0x11135b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011136e0 + 0x11135c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011136e4 + 0x11135d0));
    *pcVar6 = '\x01';
  }
  piVar8 = *(int **)(_UNK_011136e8 + 0x11135e4);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x5c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011136ec + 0x1113608));
  System_Action_Vector3__Int32Enum____ctor_1f1a068
            (uVar4,param_1,**(undefined4 **)(_UNK_011136f0 + 0x1113628),0);
  uVar4 = Rotatelab_GameAction_Vector3__Int32Enum___op_Subtraction_23a55ac
                    (uVar7,uVar4,**(undefined4 **)(_UNK_011136f4 + 0x1113640));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5c) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011136f8 + 0x1113670));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_011136fc + 0x1113690),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Subtraction_23a307c
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01113700 + 0x11136a8));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124);
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

