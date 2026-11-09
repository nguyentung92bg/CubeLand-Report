/* IL2CPP: Rotatelab.IAP.PurchasesListener$$SetRestoreButton
void Rotatelab_IAP_PurchasesListener__SetRestoreButton (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_UI_Button_o* restoreButton, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$SetRestoreButton
   void Rotatelab_IAP_PurchasesListener__SetRestoreButton (Rotatelab_IAP_PurchasesListener_o*
   __this, UnityEngine_UI_Button_o* restoreButton, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__SetRestoreButton_109a808(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  pcVar5 = (char *)(_UNK_010aa8c0 + 0x10aa820);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa8c4 + 0x10aa834));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aa8c8 + 0x10aa840));
    *pcVar5 = '\x01';
  }
  piVar6 = (int *)(param_1 + 0x14);
  *piVar6 = param_2;
  thunk_FUN_00ec5080(piVar6,param_2);
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*piVar6 + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010aa8cc + 0x10aa878));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_010aa8d0 + 0x10aa898),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar1,uVar1,0);
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
    *pcVar5 = '\x01';
  }
  iVar7 = *(int *)(iVar3 + 0xc);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar7 + 8);
  uVar4 = *(uint *)(iVar7 + 0xc);
  piVar6 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar4 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar7 + 0xc) = uVar4 + 1;
    puVar2 = (undefined4 *)(iVar8 + uVar4 * 4 + 0x10);
    *puVar2 = uVar1;
    thunk_FUN_00ec5080(puVar2,uVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar7,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar3 + 0x14) = 1;
  return;
}

