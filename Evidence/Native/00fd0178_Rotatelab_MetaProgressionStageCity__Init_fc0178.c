/* IL2CPP: Rotatelab.MetaProgressionStageCity$$Init
void Rotatelab_MetaProgressionStageCity__Init (Rotatelab_MetaProgressionStageCity_o* __this, MetaProgressionSo_MetaProgressData_o* data, int32_t dividerCount, int32_t stageIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageCity$$Init
   void Rotatelab_MetaProgressionStageCity__Init (Rotatelab_MetaProgressionStageCity_o* __this,
   MetaProgressionSo_MetaProgressData_o* data, int32_t dividerCount, int32_t stageIndex, const
   MethodInfo* method); */

void Rotatelab_MetaProgressionStageCity__Init_fc0178
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint in_fpscr;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_00fd0324 + 0xfd0198);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0328 + 0xfd01b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd032c + 0xfd01bc));
    *pcVar4 = '\x01';
  }
  uStack_20 = 0;
  Rotatelab_MetaProgressionBaseStage__Init_fbb7dc(param_1,param_2,param_3,param_4);
  *(int *)(param_1 + 0x58) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x58),param_2);
  piVar6 = *(int **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x5c) = param_4;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar6 + 0x2b0))
            (piVar6,*(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc),*(undefined4 *)(*piVar6 + 0x2b4)
            );
  piVar6 = *(int **)(param_1 + 0x24);
  uVar1 = System_Int32__ToString_2b6b9ec(param_2 + 8,0);
  uVar1 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_00fd0330 + 0xfd0264),uVar1,0);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar6 + 0x2b0))(piVar6,uVar1,*(undefined4 *)(*piVar6 + 0x2b4));
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x34),0,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__GetComponent_object__143f3b0
                    (*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_00fd0334 + 0xfd02cc));
  if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(*(undefined4 *)(*(int *)(param_2 + 0x10) + 0x10),
                              (byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar2,0,uVar1,0);
  pcVar4 = (char *)(_UNK_00fd0628 + 0xfd0350);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd062c + 0xfd0364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0630 + 0xfd0370));
    *pcVar4 = '\x01';
  }
  puVar7 = *(undefined4 **)(_UNK_00fd0634 + 0xfd0384);
  iVar5 = *(int *)(param_1 + 0x18);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_MetaProgressionController__get_CurrentCityIndex_fbbe34(iVar2,0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  iVar3 = 0x30;
  if (iVar2 == *(int *)(param_1 + 0x5c)) {
    iVar3 = 0x2c;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar5,*(undefined4 *)(param_1 + iVar3),0);
  if (*(int *)(**(int **)(_UNK_00fd0638 + 0xfd03ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 < *(int *)(*(int *)(param_1 + 0x58) + 8)) {
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x34),0,0);
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x28),1,0);
    piVar6 = *(int **)(param_1 + 0x1c);
    UnityEngine_Color__get_grey_35e7928(&uStack_34,0);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar6 + 0x178))
              (piVar6,uStack_34,uStack_30,uStack_2c,uStack_28,*(undefined4 *)(*piVar6 + 0x17c));
    piVar6 = *(int **)(param_1 + 0x20);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar6 + 0x178))
              (piVar6,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
               *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
               *(undefined4 *)(*piVar6 + 0x17c));
  }
  else {
    iVar5 = *(int *)(param_1 + 0x5c);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_MetaProgressionController__get_CurrentCityIndex_fbbe34(iVar2,0);
    iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar5 == iVar2) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar3,0,0);
      piVar6 = *(int **)(param_1 + 0x20);
      puVar7 = (undefined4 *)(param_1 + 0x3c);
      uVar1 = *(undefined4 *)(param_1 + 0x38);
    }
    else {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
      piVar6 = *(int **)(param_1 + 0x20);
      puVar7 = (undefined4 *)(param_1 + 0x4c);
      uVar1 = *(undefined4 *)(param_1 + 0x48);
    }
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar6 + 0x178))
              (piVar6,uVar1,*puVar7,puVar7[1],puVar7[2],*(undefined4 *)(*piVar6 + 0x17c));
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x28),0,0);
    piVar6 = *(int **)(param_1 + 0x1c);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar6 + 0x178))
              (piVar6,0x3f800000,0x3f800000,0x3f800000,0x3f800000,*(undefined4 *)(*piVar6 + 0x17c));
  }
  return;
}

