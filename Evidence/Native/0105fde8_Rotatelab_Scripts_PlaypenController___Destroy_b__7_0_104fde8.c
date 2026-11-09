/* IL2CPP: Rotatelab.Scripts.PlaypenController$$<Destroy>b__7_0
void Rotatelab_Scripts_PlaypenController___Destroy_b__7_0 (Rotatelab_Scripts_PlaypenController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaypenController$$<Destroy>b__7_0
   void Rotatelab_Scripts_PlaypenController___Destroy_b__7_0 (Rotatelab_Scripts_PlaypenController_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_PlaypenController___Destroy_b__7_0_104fde8(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0105fecc + 0x105fdfc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105fed0 + 0x105fe10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105fed4 + 0x105fe1c));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105fed8 + 0x105fe30));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,0x1a,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105fedc + 0x105fe60));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Grid_GridManager__RemoveFromGrid_1107024
            (iVar1,param_1,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c),0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
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

