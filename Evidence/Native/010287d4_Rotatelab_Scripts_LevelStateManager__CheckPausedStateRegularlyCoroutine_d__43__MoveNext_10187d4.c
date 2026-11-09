/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<CheckPausedStateRegularlyCoroutine>d__43$$MoveNext
bool Rotatelab_Scripts_LevelStateManager__CheckPausedStateRegularlyCoroutine_d__43__MoveNext (Rotatelab_Scripts_LevelStateManager__CheckPausedStateRegularlyCoroutine_d__43_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<CheckPausedStateRegularlyCoroutine>d__43$$MoveNext
   bool Rotatelab_Scripts_LevelStateManager__CheckPausedStateRegularlyCoroutine_d__43__MoveNext
   (Rotatelab_Scripts_LevelStateManager__CheckPausedStateRegularlyCoroutine_d__43_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_LevelStateManager__CheckPausedStateRegularlyCoroutine_d__43__MoveNext_10187d4
          (int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    bVar1 = *(byte *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(iVar4);
    if (bVar1 != uVar3) {
      uVar2 = Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(iVar4);
      *(undefined1 *)(param_1 + 0x14) = uVar2;
      iVar4 = *(int *)(iVar4 + 0x2c);
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 0xc))
                  (*(undefined4 *)(iVar4 + 0x20),*(undefined1 *)(param_1 + 0x14),
                   *(undefined4 *)(iVar4 + 0x14));
      }
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(iVar4);
    *(undefined1 *)(param_1 + 0x14) = uVar2;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}

