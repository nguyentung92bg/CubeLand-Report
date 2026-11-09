/* IL2CPP: Rotatelab.Pool.LargeVoxelCrackParticlePool$$.ctor
void Rotatelab_Pool_LargeVoxelCrackParticlePool___ctor (Rotatelab_Pool_LargeVoxelCrackParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelCrackParticlePool$$.ctor
   void Rotatelab_Pool_LargeVoxelCrackParticlePool___ctor
   (Rotatelab_Pool_LargeVoxelCrackParticlePool_o* __this, const MethodInfo* method); */

int Rotatelab_Pool_LargeVoxelCrackParticlePool___ctor_1102b74(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_01112bf4 + 0x1112b88);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112bf8 + 0x1112b9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112bfc + 0x1112ba8));
    *pcVar3 = '\x01';
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01112c00 + 0x1112bbc));
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor_1ff9064
            (uVar2,**(undefined4 **)(_UNK_01112c04 + 0x1112bd0));
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar2);
  pcVar3 = (char *)(_UNK_01110258 + 0x11101e0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111025c + 0x11101f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110260 + 0x1110200));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_01110264 + 0x1110218);
  *(undefined4 *)(param_1 + 0x14) = 1;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Collections_Generic_List_UnifiedParticleEmitter_Instance____ctor_27b0474
            (uVar2,**(undefined4 **)(_UNK_01110268 + 0x1110230));
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar2);
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

