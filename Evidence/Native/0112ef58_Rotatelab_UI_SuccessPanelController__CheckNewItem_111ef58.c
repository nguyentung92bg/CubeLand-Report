/* IL2CPP: Rotatelab.UI.SuccessPanelController$$CheckNewItem
void Rotatelab_UI_SuccessPanelController__CheckNewItem (Rotatelab_UI_SuccessPanelController_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$CheckNewItem
   void Rotatelab_UI_SuccessPanelController__CheckNewItem (Rotatelab_UI_SuccessPanelController_o*
   __this, int32_t level, const MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController__CheckNewItem_111ef58(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  
  pcVar4 = (char *)(_UNK_0112f6b8 + 0x112ef7c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6bc + 0x112ef90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6c0 + 0x112ef9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6c4 + 0x112efa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6c8 + 0x112efb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6cc + 0x112efc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6d0 + 0x112efcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6d4 + 0x112efd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6d8 + 0x112efe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6dc + 0x112eff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6e0 + 0x112effc));
    *pcVar4 = '\x01';
  }
  puStack_44 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_sizeDelta_3613710(&uStack_58,*(int *)(param_1 + 100),0);
  uVar1 = uStack_58;
  puVar6 = *(undefined4 **)(_UNK_0112f6e4 + 0x112f040);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x18) + 0xc);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar2,*(int *)(iVar2 + 0xc) + -1,**(undefined4 **)(_UNK_0112f6e8 + 0x112f080));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(param_1 + 0x70);
  if (param_2 < *(int *)(iVar2 + 0x24)) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar5,1,0);
    if (*(int *)(param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x6c),0,0);
    iVar2 = *(int *)(param_1 + 0x74);
    if (*(char *)(_UNK_0112f6ec + 0x112f100) == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0112f6f0 + 0x112f114));
      *(undefined1 *)(_UNK_0112f6f4 + 0x112f124) = 1;
    }
    iVar5 = *(int *)(**(int **)(_UNK_0112f6f8 + 0x112f134) + 0x5c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar2,*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),
               *(undefined4 *)(iVar5 + 0x14),0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x18) + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_58,iVar2,**(undefined4 **)(_UNK_0112f6fc + 0x112f1b0));
    uStack_48 = uStack_58;
    puStack_44 = puStack_54;
    uStack_40 = uStack_50;
    iStack_3c = iStack_4c;
    uStack_58 = 0;
    puVar6 = *(undefined4 **)(_UNK_0112f700 + 0x112f1d8);
    iVar2 = 0;
    puStack_54 = &uStack_48;
    do {
      iVar3 = iVar2;
      iVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_48,*puVar6);
      iVar5 = iStack_3c;
      if (iVar2 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_48,**(undefined4 **)(_UNK_0112f704 + 0x112f300));
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iStack_3c + 0x24);
    } while (*(int *)(iStack_3c + 0x24) <= param_2);
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_48,**(undefined4 **)(_UNK_0112f740 + 0x112f214));
    if (iVar3 != 0) {
      param_2 = (param_2 - iVar3) + 1;
    }
    pcVar4 = (char *)(_UNK_0112f70c + 0x112f330);
    piVar7 = *(int **)(_UNK_0112f710 + 0x112f334);
    fVar9 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
    iVar2 = *(int *)(iVar5 + 0x24) - iVar3;
    if (iVar3 == 0) {
      iVar2 = iVar2 + -1;
    }
    fVar11 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
    fVar9 = fVar9 / fVar11;
    uVar8 = in_fpscr & 0xfffffff | (uint)(fVar9 < 0.0) << 0x1f;
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    if (SUB41(uVar8 >> 0x1f,0)) {
      fVar9 = _UNK_0112f6ac;
    }
    if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (*(int *)(param_1 + 0x78),*(undefined4 *)(iVar5 + 0x10),0);
    if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x78),0);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0112f714 + 0x112f3c8));
      *pcVar4 = '\x01';
    }
    fVar11 = *(float *)(iVar5 + 0x14);
    iVar3 = *(int *)(*piVar7 + 0x5c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar2,*(float *)(iVar3 + 0xc) * fVar11,*(float *)(iVar3 + 0x10) * fVar11,
               *(float *)(iVar3 + 0x14) * fVar11,0);
    if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (*(int *)(param_1 + 0x7c),*(undefined4 *)(iVar5 + 0x10),0);
    if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x7c),0);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0112f718 + 0x112f488));
      *pcVar4 = '\x01';
    }
    fVar11 = *(float *)(iVar5 + 0x14);
    iVar5 = *(int *)(*piVar7 + 0x5c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar2,*(float *)(iVar5 + 0xc) * fVar11,*(float *)(iVar5 + 0x10) * fVar11,
               *(float *)(iVar5 + 0x14) * fVar11,0);
    if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_fillAmount_3721d6c(*(int *)(param_1 + 0x7c),1.0 - fVar9,0);
    piVar7 = *(int **)(param_1 + 0x80);
    if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar7 + 0x238))(piVar7,fVar9,*(undefined4 *)(*piVar7 + 0x23c));
    fVar11 = _UNK_0112f6b0;
    pcVar4 = (char *)(_UNK_0112f71c + 0x112f544);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0112f720 + 0x112f558));
      *pcVar4 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0112f724 + 0x112f570) + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar9 = (float)FUN_01f4f1b4(fVar9 * fVar11);
    uVar8 = uVar8 & 0xfffffff | (uint)(fVar9 == _UNK_0112f6b4) << 0x1e;
    iVar2 = (int)fVar9;
    if (SUB41(uVar8 >> 0x1e,0)) {
      iVar2 = -0x80000000;
    }
    if (*(int *)(param_1 + 0x84) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = VectorSignedToFloat(iVar2,(byte)(uVar8 >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34
              (*(int *)(param_1 + 0x84),**(undefined4 **)(_UNK_0112f728 + 0x112f5cc),uVar10,0);
    puVar6 = *(undefined4 **)(_UNK_0112f730 + 0x112f5f0);
    if (iVar2 == 100) {
      puVar6 = *(undefined4 **)(_UNK_0112f72c + 0x112f5e8);
    }
    if (*(int *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    TMPro_TMP_Text__SetText_34ffb2c(*(int *)(param_1 + 0x88),*puVar6,0);
    uVar10 = 0x44f3c000;
  }
  else {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar5,0,0);
    if (*(int *)(param_1 + 0x6c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x6c),1,0);
    iVar2 = *(int *)(param_1 + 0x74);
    pcVar4 = (char *)(_UNK_0112f734 + 0x112f270);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0112f738 + 0x112f284));
      *pcVar4 = '\x01';
    }
    iVar5 = *(int *)(**(int **)(_UNK_0112f73c + 0x112f29c) + 0x5c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar2,*(float *)(iVar5 + 0xc) * _UNK_0112f658,
               *(float *)(iVar5 + 0x10) * _UNK_0112f658,*(float *)(iVar5 + 0x14) * _UNK_0112f658,0);
    uVar10 = 0x44c80000;
  }
  if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_sizeDelta_3613820(*(int *)(param_1 + 100),uVar1,uVar10,0);
  return;
}

