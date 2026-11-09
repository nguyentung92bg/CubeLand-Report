/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$CalculateScrollFor
UnityEngine_Vector2_o Rotatelab_SeasonPass_SeasonPassManager__CalculateScrollFor (Rotatelab_SeasonPass_SeasonPassManager_o* __this, int32_t cpIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$CalculateScrollFor
   UnityEngine_Vector2_o Rotatelab_SeasonPass_SeasonPassManager__CalculateScrollFor
   (Rotatelab_SeasonPass_SeasonPassManager_o* __this, int32_t cpIndex, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassManager__CalculateScrollFor_10a7d2c
               (undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_48 [4];
  float fStack_44;
  float fStack_3c;
  
  pcVar5 = (char *)(_UNK_010b7f74 + 0x10b7d50);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7f78 + 0x10b7d64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7f7c + 0x10b7d70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7f80 + 0x10b7d7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7f84 + 0x10b7d88));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_2 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_2 + 0x48),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(auStack_48,iVar1,0);
  if (*(int *)(param_2 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(auStack_48,*(int *)(param_2 + 0x44),0);
  if (*(int *)(**(int **)(_UNK_010b7f88 + 0x10b7dfc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (fStack_44 <= fStack_3c) {
    pcVar5 = (char *)(_UNK_010b7f8c + 0x10b7ef8);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010b7f90 + 0x10b7f0c));
      *pcVar5 = '\x01';
    }
    puVar6 = *(undefined4 **)(**(int **)(_UNK_010b7f94 + 0x10b7f20) + 0x5c);
    uVar4 = puVar6[1];
    *param_1 = *puVar6;
    param_1[1] = uVar4;
  }
  else {
    if (*(int *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*(int *)(param_2 + 0x40) + 0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xc) <= param_3) {
      if (*(int *)(param_2 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      param_3 = *(int *)(*(int *)(param_2 + 0x3c) + 0xc) + -1;
    }
    fVar8 = _UNK_010b7f6c;
    if (0 < param_3) {
      iVar1 = 0;
      puVar6 = *(undefined4 **)(_UNK_010b7f98 + 0x10b7e7c);
      fVar8 = _UNK_010b7f70;
      do {
        if (*(int *)(param_2 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_2 + 0x3c) + 0xc) <= iVar1) break;
        if (*(int *)(param_2 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_2 + 0x3c),iVar1,*puVar6);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        fVar3 = (float)Rotatelab_SeasonPass_SeasonPassCheckpointBase__get_Height_10a0a04(iVar2);
        iVar1 = iVar1 + 1;
        fVar8 = fVar8 + fVar3;
      } while (param_3 != iVar1);
      fVar8 = fVar8 + _UNK_010b7f6c;
    }
    fVar3 = _UNK_010b7f70;
    *param_1 = 0;
    fVar7 = fVar8;
    if (fStack_44 - fStack_3c < fVar8) {
      fVar7 = fStack_44 - fStack_3c;
    }
    if (fVar8 < 0.0) {
      fVar7 = fVar3;
    }
    param_1[1] = fVar7;
  }
  return;
}

