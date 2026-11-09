/* IL2CPP: Rotatelab.Scripts.LevelManager$$get_IsInRoundMode
bool Rotatelab_Scripts_LevelManager__get_IsInRoundMode (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.LevelManager$$get_IsInRoundMode
   bool Rotatelab_Scripts_LevelManager__get_IsInRoundMode (const MethodInfo* method); */

bool Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68(void)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4
                    (*(undefined4 *)(iVar1 + 0x1c),0,extraout_r2,extraout_r3,unaff_r4,unaff_lr);
  return 0 < iVar1;
}

