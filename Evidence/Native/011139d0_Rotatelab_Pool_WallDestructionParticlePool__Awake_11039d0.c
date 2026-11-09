/* IL2CPP: Rotatelab.Pool.WallDestructionParticlePool$$Awake
void Rotatelab_Pool_WallDestructionParticlePool__Awake (Rotatelab_Pool_WallDestructionParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WallDestructionParticlePool$$Awake
   void Rotatelab_Pool_WallDestructionParticlePool__Awake
   (Rotatelab_Pool_WallDestructionParticlePool_o* __this, const MethodInfo* method); */

void Rotatelab_Pool_WallDestructionParticlePool__Awake_11039d0(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_01113b58 + 0x11139e4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113b5c + 0x11139f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113b60 + 0x1113a04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113b64 + 0x1113a10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113b68 + 0x1113a1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113b6c + 0x1113a28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113b70 + 0x1113a34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113b74 + 0x1113a40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113b78 + 0x1113a4c));
    *pcVar6 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___Awake_1857874
            (param_1,**(undefined4 **)(_UNK_01113b7c + 0x1113a60));
  piVar8 = *(int **)(_UNK_01113b80 + 0x1113a74);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x60);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01113b84 + 0x1113a98));
  System_Action_Vector3____ctor_1f13f7c
            (uVar4,param_1,**(undefined4 **)(_UNK_01113b88 + 0x1113ab8),0);
  uVar4 = Rotatelab_GameAction_Vector3___op_Addition_23a3458
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01113b8c + 0x1113ad0));
  *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x60) = uVar4;
  thunk_FUN_00ec5080();
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x124);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01113b90 + 0x1113b00));
  System_Action_object____ctor_1f11414(uVar4,param_1,**(undefined4 **)(_UNK_01113b94 + 0x1113b20),0)
  ;
  uVar4 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar4,**(undefined4 **)(_UNK_01113b98 + 0x1113b38));
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

