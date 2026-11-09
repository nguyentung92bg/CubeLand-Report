/* IL2CPP: Rotatelab.UI.PopupManager$$ShowPopup
void Rotatelab_UI_PopupManager__ShowPopup (Rotatelab_UI_PopupManager_o* __this, Rotatelab_UI_PopupController_o* popup, bool insertAtFront, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PopupManager$$ShowPopup
   void Rotatelab_UI_PopupManager__ShowPopup (Rotatelab_UI_PopupManager_o* __this,
   Rotatelab_UI_PopupController_o* popup, bool insertAtFront, const MethodInfo* method); */

void Rotatelab_UI_PopupManager__ShowPopup_11247a8(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  pcVar5 = (char *)(_UNK_01134908 + 0x11347c4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113490c + 0x11347d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134910 + 0x11347e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134914 + 0x11347f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134918 + 0x11347fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113491c + 0x1134808));
    *pcVar5 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  iVar2 = *(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74);
  if (param_3 == 0) {
    if (iVar2 == 0) {
      FUN_00ec3934();
    }
    iVar2 = Rotatelab_Extensions__AddUnique_object__1484964
                      (uVar6,param_2,**(undefined4 **)(_UNK_0113492c + 0x11348c8));
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 1) goto LAB_011348f4;
    }
  }
  else {
    if (iVar2 == 0) {
      FUN_00ec3934();
    }
    iVar2 = Rotatelab_Extensions__InsertUnique_object__14873f8
                      (uVar6,param_2,**(undefined4 **)(_UNK_01134924 + 0x1134848));
    if (iVar2 != 0) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (1 < *(int *)(*(int *)(param_1 + 0x10) + 0xc)) {
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar6 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x10),1,**(undefined4 **)(_UNK_01134928 + 0x1134894));
        Rotatelab_UI_PopupManager__SetPopupVisible_1124efc(uVar6,uVar6,0);
      }
LAB_011348f4:
      pcVar5 = (char *)(_UNK_01134fac + 0x1134f14);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
        *pcVar5 = '\x01';
      }
      if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *param_2;
      uVar3 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar4[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
            puVar1 = (undefined4 *)(iVar2 + *piVar4 * 8 + 0xc0);
            goto LAB_01134f94;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 2;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined4 *)FUN_00efdb38(param_2,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(param_2,1,puVar1[1]);
      return;
    }
  }
  return;
}

