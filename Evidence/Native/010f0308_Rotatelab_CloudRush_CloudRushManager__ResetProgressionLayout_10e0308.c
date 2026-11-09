/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ResetProgressionLayout
void Rotatelab_CloudRush_CloudRushManager__ResetProgressionLayout (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ResetProgressionLayout
   void Rotatelab_CloudRush_CloudRushManager__ResetProgressionLayout
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__ResetProgressionLayout_10e0308(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(_UNK_010f0494 + 0x10f0320);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0498 + 0x10f0334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f049c + 0x10f0340));
    *pcVar2 = '\x01';
  }
  uVar3 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = *(undefined4 *)(param_1 + 0xb8);
  if (*(int *)(**(int **)(_UNK_010f04a0 + 0x10f0354) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar3,uVar4,0);
  Rotatelab_Extensions__SetSizeDeltaY_fc2054
            (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0xbc),0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x40),1,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x44),1,0);
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_Text__SetText_34ffb2c
            (*(int *)(param_1 + 0x58),**(undefined4 **)(_UNK_010f04a4 + 0x10f03ec),0);
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x58),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x48),1,0);
  if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x5c),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0,extraout_r3,unaff_r4,unaff_r5);
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

