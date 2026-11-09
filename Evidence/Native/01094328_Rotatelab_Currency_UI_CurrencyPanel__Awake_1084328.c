/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$Awake
void Rotatelab_Currency_UI_CurrencyPanel__Awake (Rotatelab_Currency_UI_CurrencyPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$Awake
   void Rotatelab_Currency_UI_CurrencyPanel__Awake (Rotatelab_Currency_UI_CurrencyPanel_o* __this,
   const MethodInfo* method); */

void Rotatelab_Currency_UI_CurrencyPanel__Awake_1084328(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar3;
  int iVar4;
  undefined4 unaff_r6;
  int *piVar5;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_010944b4 + 0x109433c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010944b8 + 0x1094350));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010944bc + 0x109435c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010944c0 + 0x1094368));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010944c4 + 0x1094374));
    *pcVar3 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_010944c8 + 0x1094388));
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Transform__GetSiblingIndex_3616f78(iVar1,0);
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__GetComponent_object__143f3b0
                    (*(int *)(param_1 + 0x10),**(undefined4 **)(_UNK_010944cc + 0x10943d8));
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),uVar2);
  piVar5 = *(int **)(_UNK_010944d0 + 0x1094400);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar4,**(char **)(iVar1 + 0x5c) != '\0',0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x1c),0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010944d4 + 0x1094470));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar4,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),uVar2,0,extraout_r3,unaff_r4,
                       unaff_r5,unaff_r6,unaff_lr);
    *pcVar3 = '\x01';
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
    (*UNRECOVERED_JUMPTABLE)(iVar1,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

