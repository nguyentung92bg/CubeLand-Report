/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer.<>c$$<ShatterPlank>b__25_1
void Rotatelab_Scripts_ColorBoxPlankLayer___c___ShatterPlank_b__25_1 (Rotatelab_Scripts_ColorBoxPlankLayer___c_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer.<>c$$<ShatterPlank>b__25_1
   void Rotatelab_Scripts_ColorBoxPlankLayer___c___ShatterPlank_b__25_1
   (Rotatelab_Scripts_ColorBoxPlankLayer___c_o* __this, UnityEngine_GameObject_o* go, const
   MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer___c___ShatterPlank_b__25_1_10009e0
               (undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  char *pcVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

