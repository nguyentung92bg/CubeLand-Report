/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$Start
void Rotatelab_Currency_UI_HeartPurchasePopup__Start (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$Start
   void Rotatelab_Currency_UI_HeartPurchasePopup__Start (Rotatelab_Currency_UI_HeartPurchasePopup_o*
   __this, const MethodInfo* method); */

void Rotatelab_Currency_UI_HeartPurchasePopup__Start_10860f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  
  pcVar3 = (char *)(_UNK_010962d4 + 0x1096104);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010962d8 + 0x1096118));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010962dc + 0x1096124));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010962e0 + 0x1096130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010962e4 + 0x109613c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010962e8 + 0x1096148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010962ec + 0x1096154));
    *pcVar3 = '\x01';
  }
  Rotatelab_UI_PopupController__Start_11246e8(param_1,0);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_010962f0 + 0x1096184);
  iVar4 = *(int *)(*(int *)(param_1 + 0x48) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_010962f4 + 0x10961a4),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar4,uVar1,0);
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x4c) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_010962f8 + 0x10961fc),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar4,uVar1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_010962fc + 0x1096254),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar4,uVar1,0);
  iVar2 = *(int *)(param_1 + 0x54);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01096300 + 0x1096288));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc64
            (iVar2,**(undefined4 **)(_UNK_01096304 + 0x10962c4),uVar1,0,0,0,0,0,0,0);
  return;
}

