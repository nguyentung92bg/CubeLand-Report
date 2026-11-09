/* IL2CPP: Rotatelab.Scripts.IceWrapperController.<>c$$<AnimateCrack>b__21_0
void Rotatelab_Scripts_IceWrapperController___c___AnimateCrack_b__21_0 (Rotatelab_Scripts_IceWrapperController___c_o* __this, Rotatelab_Scripts_IceWrapperController_o* this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController.<>c$$<AnimateCrack>b__21_0
   void Rotatelab_Scripts_IceWrapperController___c___AnimateCrack_b__21_0
   (Rotatelab_Scripts_IceWrapperController___c_o* __this, Rotatelab_Scripts_IceWrapperController_o*
   this, float value, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController___c___AnimateCrack_b__21_0_1011f78
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  
  pcVar4 = (char *)(_UNK_0102202c + 0x1021f90);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022030 + 0x1021fa4));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar6 = *(int **)(_UNK_01022034 + 0x1021fc4);
  iVar5 = *(int *)(param_2 + 0x34);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  if (iVar5 != 0) {
    UnityEngine_MaterialPropertyBlock__SetFloat_35c4024
              (iVar5,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x54),param_3,0);
    iVar5 = *(int *)(param_2 + 0x18);
    iVar1 = *(int *)(param_2 + 0x34);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar4 = (char *)(_UNK_035d4e1c + 0x35d4d94);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035d4e20 + 0x35d4da8),iVar1,0);
      *pcVar4 = '\x01';
    }
    if (iVar5 != 0) {
      iVar2 = *(int *)(iVar5 + 8);
      if (iVar2 != 0) {
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(iVar1 + 8);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035d4e24 + 0x35d4dec);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035d4e28 + 0x35d4dfc);
          *(code **)(_UNK_035d4e2c + 0x35d4e0c) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x035d4e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar2,uVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar5,0);
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

