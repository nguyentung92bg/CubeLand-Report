/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$.ctor
void Rotatelab_Pool_VoxelDestructionParticlePool___ctor (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$.ctor
   void Rotatelab_Pool_VoxelDestructionParticlePool___ctor
   (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, const MethodInfo* method); */

int Rotatelab_Pool_VoxelDestructionParticlePool___ctor_110389c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_011138f4 + 0x11138b0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011138f8 + 0x11138c4));
    *pcVar5 = '\x01';
  }
  piVar1 = *(int **)(_UNK_011138fc + 0x11138e4);
  *(undefined4 *)(param_1 + 0x28) = 0x3e483127;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  iVar4 = *piVar1;
  *(undefined2 *)(param_1 + 0x1c) = 0x101;
  iVar2 = *(int *)(iVar4 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 100;
  *(undefined4 *)(param_1 + 0x18) = 5000;
  if ((*(ushort *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x20) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar3 = thunk_FUN_00f00cdc();
  System_Collections_Generic_Stack_object____ctor_1b04850
            (uVar3,0x80,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x44));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar3);
  pcVar5 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

