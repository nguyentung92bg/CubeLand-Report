/* IL2CPP: Rotatelab.UI.FavIconSetter$$SetFavIcon
void Rotatelab_UI_FavIconSetter__SetFavIcon (Rotatelab_UI_FavIconSetter_o* __this, UnityEngine_Texture2D_o* icon, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FavIconSetter$$SetFavIcon
   void Rotatelab_UI_FavIconSetter__SetFavIcon (Rotatelab_UI_FavIconSetter_o* __this,
   UnityEngine_Texture2D_o* icon, const MethodInfo* method); */

void Rotatelab_UI_FavIconSetter__SetFavIcon_11102ec(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar3;
  undefined4 unaff_r6;
  char *pcVar4;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_011203c8 + 0x1120304);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011203cc + 0x1120318));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011203d0 + 0x112032c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_2,0,0);
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
    piVar3 = *(int **)(param_1 + 0x10);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar4 = (char *)(_UNK_039c6c90 + 0x39c6bf8);
    if (*pcVar4 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039c6c94 + 0x39c6c0c),param_2,0,extraout_r3_00,
                         unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r11,unaff_lr);
      *pcVar4 = '\x01';
    }
    iVar1 = piVar3[0x20];
    if (*(int *)(**(int **)(_UNK_039c6c98 + 0x39c6c24) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Equality_36033f4(iVar1,param_2,0);
    if (iVar1 != 0) {
      return;
    }
    piVar3[0x20] = param_2;
    thunk_FUN_00ec5080(piVar3 + 0x20,param_2);
    (**(code **)(*piVar3 + 0x1a0))(piVar3,*(undefined4 *)(*piVar3 + 0x1a4));
                    /* WARNING: Could not recover jumptable at 0x039c6c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0x1a8))(piVar3,*(undefined4 *)(*piVar3 + 0x1ac));
    return;
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0,extraout_r3,unaff_r4,unaff_r5,
                       unaff_r6,unaff_lr);
    *pcVar4 = '\x01';
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar2 + 8);
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

