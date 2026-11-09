/* IL2CPP: Rotatelab.WinStreak.Chest$$Initialize
void Rotatelab_WinStreak_Chest__Initialize (Rotatelab_WinStreak_Chest_o* __this, Rotatelab_WinStreak_WinStreakSo_StageData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Chest$$Initialize
   void Rotatelab_WinStreak_Chest__Initialize (Rotatelab_WinStreak_Chest_o* __this,
   Rotatelab_WinStreak_WinStreakSo_StageData_o* data, const MethodInfo* method); */

void Rotatelab_WinStreak_Chest__Initialize_1090030(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  
  pcVar6 = (char *)(_UNK_010a031c + 0x10a004c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0320 + 0x10a0060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0324 + 0x10a006c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0328 + 0x10a0078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a032c + 0x10a0084));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0330 + 0x10a0090));
    *pcVar6 = '\x01';
  }
  *(int *)(param_1 + 0x3c) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x3c),param_2);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x18),0);
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_GridLayoutGroup__set_constraint_39abfd0
            (*(int *)(param_1 + 0x1c),(uint)(*(int *)(*(int *)(param_2 + 0x10) + 0xc) < 4) << 1,0);
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = FUN_00ec388c(**(undefined4 **)(_UNK_010a0334 + 0x10a013c),
                       *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc));
  piVar10 = (int *)(param_1 + 0x20);
  *piVar10 = iVar1;
  thunk_FUN_00ec5080(piVar10,iVar1);
  iVar1 = 4;
  iVar11 = 0x10;
  while( true ) {
    if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = iVar1 - 4;
    if (*(int *)(*piVar10 + 0xc) <= (int)uVar9) {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0xb4);
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a0340 + 0x10a02d0));
      UnityEngine_Events_UnityAction___ctor_361afc4
                (uVar7,param_1,**(undefined4 **)(_UNK_010a0344 + 0x10a02f0),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar7,uVar7,0);
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar6 = (char *)(_UNK_0362a14c + 0x362a0a8);
      if (*pcVar6 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
        *pcVar6 = '\x01';
      }
      iVar11 = *(int *)(iVar1 + 0xc);
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(iVar11 + 8);
      uVar9 = *(uint *)(iVar11 + 0xc);
      piVar10 = *(int **)(_UNK_0362a154 + 0x362a0f4);
      *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar9 < *(uint *)(iVar3 + 0xc)) {
        *(uint *)(iVar11 + 0xc) = uVar9 + 1;
        puVar5 = (undefined4 *)(iVar3 + uVar9 * 4 + 0x10);
        *puVar5 = uVar7;
        thunk_FUN_00ec5080(puVar5,uVar7);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar11,uVar7,*(undefined4 *)(*(int *)(*(int *)(*piVar10 + 0x10) + 0x60) + 0x38));
      }
      *(undefined1 *)(iVar1 + 0x14) = 1;
      return;
    }
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    piVar8 = *(int **)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x1c),0);
    if (*(int *)(**(int **)(_UNK_010a0338 + 0x10a01b8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__Instantiate_object__14d4e4c
                      (uVar7,uVar2,0,**(undefined4 **)(_UNK_010a033c + 0x10a01dc));
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((iVar3 != 0) &&
       (iVar4 = thunk_FUN_00f00bc8(iVar3,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)) {
      uVar7 = thunk_FUN_00f08b98();
      func_0x00ec3920(uVar7,0);
    }
    if ((uint)piVar8[3] <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(int *)((int)piVar8 + iVar11) = iVar3;
    thunk_FUN_00ec5080((int *)((int)piVar8 + iVar11),iVar3);
    iVar3 = *piVar10;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar9) break;
    iVar4 = *(int *)(iVar3 + iVar1 * 4);
    iVar3 = *(int *)(param_2 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_BundleOffer__Initialize_10c03d8(iVar4,*(undefined4 *)(iVar3 + iVar1 * 4),0);
    iVar11 = iVar11 + 4;
    iVar1 = iVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

