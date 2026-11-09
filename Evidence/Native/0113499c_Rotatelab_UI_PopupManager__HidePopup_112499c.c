/* IL2CPP: Rotatelab.UI.PopupManager$$HidePopup
void Rotatelab_UI_PopupManager__HidePopup (Rotatelab_UI_PopupManager_o* __this, Rotatelab_UI_PopupController_o* popup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PopupManager$$HidePopup
   void Rotatelab_UI_PopupManager__HidePopup (Rotatelab_UI_PopupManager_o* __this,
   Rotatelab_UI_PopupController_o* popup, const MethodInfo* method); */

uint Rotatelab_UI_PopupManager__HidePopup_112499c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  
  pcVar6 = (char *)(_UNK_01134b28 + 0x11349b4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b2c + 0x11349c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b30 + 0x11349d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b34 + 0x11349e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b38 + 0x11349ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b3c + 0x11349f8));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar8 = *(undefined4 **)(_UNK_01134b40 + 0x1134a40);
    uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x10),0,*puVar8);
    if (*(int *)(**(int **)(_UNK_01134b44 + 0x1134a54) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,param_2,0);
    iVar7 = *(int *)(param_1 + 0x10);
    if (iVar2 != 0) {
      if (iVar7 != 0) {
        uVar4 = System_Array__IndexOf_object__16445f0
                          (*(undefined4 *)(iVar7 + 8),param_2,0,*(undefined4 *)(iVar7 + 0xc),
                           *(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_01134b48 +
                                                                                    0x1134a9c) +
                                                                         0x10) + 0x60) + 100) + 0x10
                                              ) + 0x60) + 0xa4));
        if (-1 < (int)uVar4) {
          System_Collections_Generic_List_object___RemoveAt_267f3f8(iVar7,uVar4);
        }
        return ~uVar4 >> 0x1f;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = System_Collections_Generic_List_object___RemoveAt_267f3f8
                      (iVar7,0,**(undefined4 **)(_UNK_01134b4c + 0x1134ac4));
    Rotatelab_UI_PopupManager__SetPopupVisible_1124efc(uVar1,param_2,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 0xc);
    if (0 < (int)uVar4) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar3 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (*(int *)(param_1 + 0x10),0,*puVar8);
      pcVar6 = (char *)(_UNK_01134fac + 0x1134f14);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
        *pcVar6 = '\x01';
      }
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *piVar3;
      uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
            puVar8 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xc0);
            goto LAB_01134f94;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined4 *)FUN_00efdb38(piVar3,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)*puVar8)(piVar3,1,puVar8[1]);
      return uVar4;
    }
  }
  return uVar4;
}

