/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$GetProjectedCheckPoint
int32_t Rotatelab_SeasonPass_SeasonPassController__GetProjectedCheckPoint (Rotatelab_SeasonPass_SeasonPassController_o* __this, int32_t* projectedBarFill, int32_t* projectedBonusBank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$GetProjectedCheckPoint
   int32_t Rotatelab_SeasonPass_SeasonPassController__GetProjectedCheckPoint
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, int32_t* projectedBarFill, int32_t*
   projectedBonusBank, const MethodInfo* method); */

int Rotatelab_SeasonPass_SeasonPassController__GetProjectedCheckPoint_10a5734
              (int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  pcVar6 = (char *)(_UNK_010b595c + 0x10b5754);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5960 + 0x10b5768));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5964 + 0x10b5774));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5968 + 0x10b5780));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(*(int *)(param_1 + 0x20) + 0xc);
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_010b596c + 0x10b57bc);
  iVar1 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(*(int *)(param_1 + 0x34),*puVar7);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(*(int *)(param_1 + 0x3c),*puVar7);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(*(int *)(param_1 + 0x38),*puVar7);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(*(int *)(param_1 + 0x40),*puVar7);
  if (0 < iVar3) {
    puVar7 = *(undefined4 **)(_UNK_010b5970 + 0x10b5834);
    do {
      while( true ) {
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar9 + 0xc) <= iVar1) break;
        iVar5 = System_Collections_Generic_List_object___get_Item_267d814(iVar9,iVar1,*puVar7);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar2 + iVar3 < *(int *)(iVar5 + 0xc)) goto LAB_010b5930;
        iVar1 = iVar1 + 1;
        iVar3 = (iVar2 - *(int *)(iVar5 + 0xc)) + iVar3;
        iVar2 = 0;
        if (iVar3 < 1) goto LAB_010b5930;
      }
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x20) + 0x14) <= iVar4) break;
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(*(int *)(param_1 + 0x20) + 0x1c);
      if (iVar2 + iVar3 < iVar5) break;
      iVar8 = *(int *)(param_1 + 0x20);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = (iVar2 + iVar3) - iVar5;
      iVar2 = 0;
      iVar5 = *(int *)(iVar8 + 0x18) + iVar4;
      iVar4 = *(int *)(iVar8 + 0x14);
      if (iVar5 < *(int *)(iVar8 + 0x14)) {
        iVar4 = iVar5;
      }
    } while (0 < iVar3);
  }
LAB_010b5930:
  *param_2 = iVar2 + iVar3;
  *param_3 = iVar4;
  return iVar1;
}

