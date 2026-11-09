/* IL2CPP: Rotatelab.Scripts.VoxelController$$.ctor
void Rotatelab_Scripts_VoxelController___ctor (Rotatelab_Scripts_VoxelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.VoxelController$$.ctor
   void Rotatelab_Scripts_VoxelController___ctor (Rotatelab_Scripts_VoxelController_o* __this, const
   MethodInfo* method); */

int Rotatelab_Scripts_VoxelController___ctor_105e048(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_0106e0ac + 0x106e05c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106e0b0 + 0x106e070));
    *pcVar2 = '\x01';
  }
  uVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_0106e0b4 + 0x106e088),1);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  thunk_FUN_00ec5080();
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

