/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$OnDestroy
void Rotatelab_SeasonPass_SeasonPassManager__OnDestroy (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$OnDestroy
   void Rotatelab_SeasonPass_SeasonPassManager__OnDestroy (Rotatelab_SeasonPass_SeasonPassManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassManager__OnDestroy_10a74b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  pcVar5 = (char *)(_UNK_010b7650 + 0x10b74c4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7654 + 0x10b74d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7658 + 0x10b74e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b765c + 0x10b74f0));
    *pcVar5 = '\x01';
  }
  Rotatelab_Shop_BaseOfferButton__OnDestroy_10cc5bc(param_1,0);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar9 = *(undefined4 **)(_UNK_010b7660 + 0x10b7520);
  iVar6 = *(int *)(*(int *)(param_1 + 0x7c) + 0x3c);
  uVar1 = thunk_FUN_00f00cdc(*puVar9);
  puVar10 = *(undefined4 **)(_UNK_010b7664 + 0x10b7540);
  System_Action_int____ctor_1f105bc(uVar1,param_1,*puVar10,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(_UNK_010b7668 + 0x10b7564);
  Rotatelab_Save_SavedValue_int___remove_OnValueChanged_1a8b74c(iVar6,uVar1,*piVar8);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x7c) + 0x38);
  uVar1 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_int____ctor_1f105bc(uVar1,param_1,*puVar10,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___remove_OnValueChanged_1a8b74c(iVar6,uVar1,*piVar8);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x7c) + 0x34);
  uVar1 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_int____ctor_1f105bc(uVar1,param_1,*puVar10,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___remove_OnValueChanged_1a8b74c(iVar6,uVar1,*piVar8);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x7c) + 0x40);
  uVar1 = thunk_FUN_00f00cdc(*puVar9);
  System_Action_int____ctor_1f105bc(uVar1,param_1,*puVar10,0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *piVar8;
  piVar8 = (int *)(iVar6 + 0x18);
  iVar6 = *piVar8;
  while( true ) {
    iVar2 = System_Delegate__Remove_2bbcc8c(iVar6,uVar1,0);
    iVar7 = *(int *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x10);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = FUN_00efd768(iVar7);
    }
    iVar3 = 0;
    if ((iVar2 != 0) && (iVar3 = thunk_FUN_00f00bc8(iVar2,iVar7), iVar3 == 0)) break;
    iVar2 = FUN_00efd180(piVar8,iVar3,iVar6);
    bVar11 = iVar2 == iVar6;
    iVar6 = iVar2;
    if (bVar11) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(iVar2,iVar7);
}

