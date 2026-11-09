/* IL2CPP: Rotatelab.CloudRush.CloudRushInfoController$$<ShowPopup>b__9_1
void Rotatelab_CloudRush_CloudRushInfoController___ShowPopup_b__9_1 (Rotatelab_CloudRush_CloudRushInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.CloudRush.CloudRushInfoController$$<ShowPopup>b__9_1
   void Rotatelab_CloudRush_CloudRushInfoController___ShowPopup_b__9_1
   (Rotatelab_CloudRush_CloudRushInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushInfoController___ShowPopup_b__9_1_10df96c(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  char *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam0360d868 + 0x360d7f4);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam0360d86c + 0x360d808),1,0);
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam0360d870 + 0x360d834);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam0360d874 + 0x360d844);
      *(code **)(iRam0360d878 + 0x360d854) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x0360d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

