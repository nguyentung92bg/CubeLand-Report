/* IL2CPP: Rotatelab.SeasonPassTutorialController$$CheckStep
void Rotatelab_SeasonPassTutorialController__CheckStep (Rotatelab_SeasonPassTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassTutorialController$$CheckStep
   void Rotatelab_SeasonPassTutorialController__CheckStep (Rotatelab_SeasonPassTutorialController_o*
   __this, const MethodInfo* method); */

void Rotatelab_SeasonPassTutorialController__CheckStep_fc5bc4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  
  pcVar6 = (char *)(_UNK_00fd5e08 + 0xfd5bdc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5e0c + 0xfd5bf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5e10 + 0xfd5bfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5e14 + 0xfd5c08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5e18 + 0xfd5c14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5e1c + 0xfd5c20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5e20 + 0xfd5c2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5e24 + 0xfd5c38));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(param_1 + 0x24),**(undefined4 **)(_UNK_00fd5e28 + 0xfd5c4c));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar1 == 0 || iVar2 == 0) {
    iVar2 = 0;
    puVar8 = *(undefined4 **)(_UNK_00fd5e2c + 0xfd5c74);
    piVar9 = *(int **)(_UNK_00fd5e30 + 0xfd5c7c);
    puVar10 = *(undefined4 **)(_UNK_00fd5e34 + 0xfd5c84);
    while( true ) {
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) <= iVar2) break;
      if (iVar2 == *(int *)(param_1 + 0x20)) {
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x10),iVar2,*puVar8);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar3 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x10),iVar2,*puVar8);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar4 = 1;
        uVar5 = 0;
      }
      else {
        iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd5e38 + 0xfd5d58));
        System_Object___ctor_2bb93bc(iVar1,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        *(int *)(iVar1 + 0xc) = param_1;
        thunk_FUN_00ec5080((int *)(iVar1 + 0xc),param_1);
        iVar7 = *(int *)(param_1 + 0x10);
        *(int *)(iVar1 + 8) = iVar2;
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar3 = System_Collections_Generic_List_object___get_Item_267d814(iVar7,iVar2,*puVar8);
        uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd5e3c + 0xfd5dbc));
        System_Action___ctor_2b10bac(uVar5,iVar1,*puVar10,0);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar4 = 0;
      }
      Rotatelab_Extensions__SetVisibility_fc2a78(uVar3,uVar4,uVar5);
      iVar2 = iVar2 + 1;
    }
  }
  return;
}

