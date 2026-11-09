/* IL2CPP: Rotatelab.MetaProgressionController$$<ShowJourney>g__SetContentHeight|34_2
void Rotatelab_MetaProgressionController___ShowJourney_g__SetContentHeight_34_2 (Rotatelab_MetaProgressionController_o* __this, int32_t progressLevel, bool isAnimated, float moveDuration, float moveDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$<ShowJourney>g__SetContentHeight|34_2
   void Rotatelab_MetaProgressionController___ShowJourney_g__SetContentHeight_34_2
   (Rotatelab_MetaProgressionController_o* __this, int32_t progressLevel, bool isAnimated, float
   moveDuration, float moveDelay, const MethodInfo* method); */

void Rotatelab_MetaProgressionController___ShowJourney_g__SetContentHeight_34_2_fbe234
               (int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uStack_70;
  float fStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  
  pcVar4 = (char *)(_UNK_00fce69c + 0xfce260);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce6a0 + 0xfce274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce6a4 + 0xfce280));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce6a8 + 0xfce28c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce6ac + 0xfce298));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce6b0 + 0xfce2a4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = 0;
  UnityEngine_RectTransform__get_sizeDelta_3613710(&uStack_70,*(int *)(param_1 + 0x28),0);
  fVar1 = fStack_6c;
  fVar14 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  puVar9 = *(undefined4 **)(_UNK_00fce6b4 + 0xfce2f4);
  puVar10 = *(undefined4 **)(_UNK_00fce6b8 + 0xfce2fc);
  fVar13 = _UNK_00fce690;
  do {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 0xc) <= iVar8) {
      iVar8 = *(int *)(param_1 + 0x28);
      fVar14 = _UNK_00fce698 - fVar13;
      if (_UNK_00fce698 - fVar13 < _UNK_00fce694 - fVar1) {
        fVar14 = _UNK_00fce694 - fVar1;
      }
      if (param_3 == 0) {
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar8,0,fVar14,0);
      }
      else {
        PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_70,1,0);
        if (*(int *)(**(int **)(_UNK_00fce6c4 + 0xfce608) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__UIAnchoredPosition_2ce6e40
                  (&uStack_70,iVar8,0,fVar14,param_4,uStack_70,fStack_6c,uStack_68,uStack_64,
                   uStack_60,1,0,param_5,0,0,0);
      }
      return;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = System_Collections_Generic_List_object___get_Item_267d814(iVar5,iVar8,*puVar9);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(iVar5 + 8);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x14) + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar6 <= *(int *)(iVar2 + 0xc)) {
      if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x40),iVar8,**(undefined4 **)(_UNK_00fce6bc + 0xfce3d0))
      ;
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar3 = (float)Rotatelab_MetaProgressionBaseStage__GetHeight_fbbd1c(iVar2);
      if (param_2 < *(int *)(iVar5 + 8)) {
        iVar5 = *(int *)(param_1 + 0x14);
        if (iVar8 == 0) {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                            (*(int *)(iVar5 + 0x10),0,*puVar9);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          fVar11 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 8),
                                              (byte)(in_fpscr >> 0x16) & 3);
          fVar13 = fVar13 + (fVar3 / fVar11) * fVar14;
        }
        else {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = iVar8 + -1;
          iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                            (*(int *)(iVar5 + 0x10),iVar2,*puVar9);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (0 < param_2 - *(int *)(iVar5 + 8)) {
            if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar5 = System_Collections_Generic_List_object___get_Item_267d814(iVar5,iVar8,*puVar9);
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar5 = *(int *)(iVar5 + 8);
            if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar6 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar6 = System_Collections_Generic_List_object___get_Item_267d814(iVar6,iVar2,*puVar9);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar6 = *(int *)(iVar6 + 8);
            if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
            if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar2 = System_Collections_Generic_List_object___get_Item_267d814(iVar7,iVar2,*puVar9);
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            fVar11 = (float)VectorSignedToFloat(iVar5 - iVar6,(byte)(in_fpscr >> 0x16) & 3);
            puVar10 = *(undefined4 **)(_UNK_00fce6c0 + 0xfce54c);
            fVar12 = (float)VectorSignedToFloat(param_2 - *(int *)(iVar2 + 8),
                                                (byte)(in_fpscr >> 0x16) & 3);
            fVar13 = fVar13 + (fVar3 / fVar11) * fVar12;
          }
        }
      }
      else {
        fVar13 = fVar13 + fVar3;
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

