/* IL2CPP: Rotatelab.UI.PopupController$$Hide
void Rotatelab_UI_PopupController__Hide (Rotatelab_UI_PopupController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PopupController$$Hide
   void Rotatelab_UI_PopupController__Hide (Rotatelab_UI_PopupController_o* __this, const
   MethodInfo* method); */

uint Rotatelab_UI_PopupController__Hide_1124930(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar7 = (char *)(_UNK_01134990 + 0x1134944);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134994 + 0x1134958));
    *pcVar7 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01134998 + 0x113496c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_01134b28 + 0x11349b4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b2c + 0x11349c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b30 + 0x11349d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b34 + 0x11349e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b38 + 0x11349ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134b3c + 0x11349f8));
    *pcVar7 = '\x01';
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = 0;
  if (*(int *)(*(int *)(iVar1 + 0x10) + 0xc) != 0) {
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar9 = *(undefined4 **)(_UNK_01134b40 + 0x1134a40);
    uVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar1 + 0x10),0,*puVar9);
    if (*(int *)(**(int **)(_UNK_01134b44 + 0x1134a54) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar2,param_1,0);
    iVar8 = *(int *)(iVar1 + 0x10);
    if (iVar3 != 0) {
      if (iVar8 != 0) {
        uVar5 = System_Array__IndexOf_object__16445f0
                          (*(undefined4 *)(iVar8 + 8),param_1,0,*(undefined4 *)(iVar8 + 0xc),
                           *(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_01134b48 +
                                                                                    0x1134a9c) +
                                                                         0x10) + 0x60) + 100) + 0x10
                                              ) + 0x60) + 0xa4),unaff_r5,unaff_r4,unaff_r5,unaff_r11
                           ,unaff_lr);
        if (-1 < (int)uVar5) {
          System_Collections_Generic_List_object___RemoveAt_267f3f8(iVar8,uVar5);
        }
        return ~uVar5 >> 0x1f;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = System_Collections_Generic_List_object___RemoveAt_267f3f8
                      (iVar8,0,**(undefined4 **)(_UNK_01134b4c + 0x1134ac4));
    Rotatelab_UI_PopupManager__SetPopupVisible_1124efc(uVar2,param_1,0);
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(uint *)(*(int *)(iVar1 + 0x10) + 0xc);
    if (0 < (int)uVar5) {
      if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar4 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                (*(int *)(iVar1 + 0x10),0,*puVar9);
      pcVar7 = (char *)(_UNK_01134fac + 0x1134f14);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
        *pcVar7 = '\x01';
      }
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *piVar4;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
            puVar9 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01134f94;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar9 = (undefined4 *)FUN_00efdb38(piVar4,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)*puVar9)(piVar4,1,puVar9[1]);
      return uVar5;
    }
  }
  return uVar5;
}

