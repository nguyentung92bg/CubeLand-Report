/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$.ctor
void Rotatelab_Pool_LargeVoxelBreakParticlePool___ctor (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$.ctor
   void Rotatelab_Pool_LargeVoxelBreakParticlePool___ctor
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method); */

int Rotatelab_Pool_LargeVoxelBreakParticlePool___ctor_1102554(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_01112650 + 0x1112568);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112654 + 0x111257c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112658 + 0x1112588));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111265c + 0x1112594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01112660 + 0x11125a0));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_01112664 + 0x11125b8);
  *(undefined4 *)(param_1 + 0x14) = 5;
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_01112668 + 0x11125d0);
  System_Collections_Generic_List_object____ctor_267d274(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Collections_Generic_List_object____ctor_267d274(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0111266c + 0x1112614));
  System_Collections_Generic_Dictionary_object__object____ctor_20688f4
            (uVar1,**(undefined4 **)(_UNK_01112670 + 0x1112628));
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

