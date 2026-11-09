/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$OnWinSequenceStartedHandler
void Rotatelab_Grid_GridVisibilityController__OnWinSequenceStartedHandler (Rotatelab_Grid_GridVisibilityController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridVisibilityController$$OnWinSequenceStartedHandler
   void Rotatelab_Grid_GridVisibilityController__OnWinSequenceStartedHandler
   (Rotatelab_Grid_GridVisibilityController_o* __this, const MethodInfo* method); */

void Rotatelab_Grid_GridVisibilityController__OnWinSequenceStartedHandler_1109ee4(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  pcVar3 = (char *)(_UNK_0111a07c + 0x1119efc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a080 + 0x1119f10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111a084 + 0x1119f1c));
    *pcVar3 = '\x01';
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(param_1,0,0);
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar4 + 0xc);
  *(undefined4 *)(iVar4 + 0xc) = 0;
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (0 < iVar2) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar4 + 8),0,iVar2,0);
  }
  uVar6 = 0;
  iVar4 = 0x10;
  while( true ) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) <= (int)uVar6) {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar6) break;
    iVar2 = *(int *)(iVar2 + iVar4);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x18) == '\0')) {
      Rotatelab_Scripts_BaseTargetableController__SetVisibility_ff5974(iVar2,1,0);
      Rotatelab_Scripts_BaseTargetableController__SetVisibleOnScreen_ff59b8(iVar2,1,0);
      iVar5 = *(int *)(param_1 + 0x5c);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(iVar5 + 8);
      uVar8 = *(uint *)(iVar5 + 0xc);
      piVar1 = *(int **)(_UNK_0111a088 + 0x111a01c);
      *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar8 < *(uint *)(iVar7 + 0xc)) {
        *(uint *)(iVar5 + 0xc) = uVar8 + 1;
        piVar1 = (int *)(iVar7 + uVar8 * 4 + 0x10);
        *piVar1 = iVar2;
        thunk_FUN_00ec5080(piVar1,iVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar5,iVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar1 + 0x10) + 0x60) + 0x38));
      }
    }
    iVar4 = iVar4 + 0xc;
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

