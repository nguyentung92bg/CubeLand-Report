/* IL2CPP: Rotatelab.Vibration.VibrationManager.<BlastersShootingVibrationCoroutine>d__2$$MoveNext
bool Rotatelab_Vibration_VibrationManager__BlastersShootingVibrationCoroutine_d__2__MoveNext (Rotatelab_Vibration_VibrationManager__BlastersShootingVibrationCoroutine_d__2_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Vibration.VibrationManager.<BlastersShootingVibrationCoroutine>d__2$$MoveNext
   bool Rotatelab_Vibration_VibrationManager__BlastersShootingVibrationCoroutine_d__2__MoveNext
   (Rotatelab_Vibration_VibrationManager__BlastersShootingVibrationCoroutine_d__2_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Vibration_VibrationManager__BlastersShootingVibrationCoroutine_d__2__MoveNext_107ede8
          (int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0108eef4 + 0x108edfc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108eef8 + 0x108ee10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108eefc + 0x108ee1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ef00 + 0x108ee28));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    puVar1 = *(undefined4 **)(_UNK_0108ef08 + 0x108ee64);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Scripts_DockManager__get_ShootingBlasterCount_10044e4(iVar2,0);
    if (0 < iVar2) {
      if (*(int *)(**(int **)(_UNK_0108ef0c + 0x108ee9c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Vibration_VibrationManager__VibrateSelection_107e598();
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  if (*(int *)(**(int **)(_UNK_0108ef04 + 0x108eebc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3e19999a);
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar3);
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}

