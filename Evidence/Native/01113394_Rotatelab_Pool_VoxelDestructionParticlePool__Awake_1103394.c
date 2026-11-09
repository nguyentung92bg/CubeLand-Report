/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$Awake
void Rotatelab_Pool_VoxelDestructionParticlePool__Awake (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$Awake
   void Rotatelab_Pool_VoxelDestructionParticlePool__Awake
   (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, const MethodInfo* method); */

void Rotatelab_Pool_VoxelDestructionParticlePool__Awake_1103394(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_0111351c + 0x11133a8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113520 + 0x11133bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113524 + 0x11133c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113528 + 0x11133d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111352c + 0x11133e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113530 + 0x11133ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113534 + 0x11133f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113538 + 0x1113404));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111353c + 0x1113410));
    *pcVar6 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___Awake_1857874
            (param_1,**(undefined4 **)(_UNK_01113540 + 0x1113424));
  piVar8 = *(int **)(_UNK_01113544 + 0x1113438);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x5c);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01113548 + 0x111345c));
  System_Action_Vector3__Int32Enum____ctor_1f1a068
            (uVar4,param_1,**(undefined4 **)(_UNK_0111354c + 0x111347c),0);
  uVar4 = Rotatelab_GameAction_Vector3__Int32Enum___op_Addition_23a5490
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01113550 + 0x1113494));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x5c) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01113554 + 0x11134c4));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_01113558 + 0x11134e4),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar4,**(undefined4 **)(_UNK_0111355c + 0x11134fc));
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

