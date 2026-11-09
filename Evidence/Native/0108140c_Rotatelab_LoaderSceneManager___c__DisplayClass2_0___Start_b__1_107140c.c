/* IL2CPP: Rotatelab.LoaderSceneManager.<>c__DisplayClass2_0$$<Start>b__1
bool Rotatelab_LoaderSceneManager___c__DisplayClass2_0___Start_b__1 (Rotatelab_LoaderSceneManager___c__DisplayClass2_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.LoaderSceneManager.<>c__DisplayClass2_0$$<Start>b__1
   bool Rotatelab_LoaderSceneManager___c__DisplayClass2_0___Start_b__1
   (Rotatelab_LoaderSceneManager___c__DisplayClass2_0_o* __this, const MethodInfo* method); */

void Rotatelab_LoaderSceneManager___c__DisplayClass2_0___Start_b__1_107140c(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam0360a680 + 0x360a650);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam0360a684 + 0x360a660);
      *(code **)(iRam0360a688 + 0x360a670) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x0360a678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
}

