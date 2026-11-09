/* IL2CPP: Rotatelab.Pool.VoxelPool$$OnInstanceRecycled
void Rotatelab_Pool_VoxelPool__OnInstanceRecycled (Rotatelab_Pool_VoxelPool_o* __this, Rotatelab_Scripts_VoxelController_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.VoxelPool$$OnInstanceRecycled
   void Rotatelab_Pool_VoxelPool__OnInstanceRecycled (Rotatelab_Pool_VoxelPool_o* __this,
   Rotatelab_Scripts_VoxelController_o* instance, const MethodInfo* method); */

void Rotatelab_Pool_VoxelPool__OnInstanceRecycled_1103900(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01113970 + 0x1113918);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113974 + 0x111392c));
    *pcVar1 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___OnInstanceRecycled_1857d90
            (param_1,param_2,**(undefined4 **)(_UNK_01113978 + 0x1113944));
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0111396c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))(param_2,*(undefined4 *)(*param_2 + 0x14c));
  return;
}

