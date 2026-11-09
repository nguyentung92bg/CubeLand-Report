/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController.<>c$$<ShowPopup>b__44_2
void Rotatelab_Shop_DailyQuestCanvasController___c___ShowPopup_b__44_2 (Rotatelab_Shop_DailyQuestCanvasController___c_o* __this, Rotatelab_Shop_DailyQuestMemberController_o* i, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController.<>c$$<ShowPopup>b__44_2
   void Rotatelab_Shop_DailyQuestCanvasController___c___ShowPopup_b__44_2
   (Rotatelab_Shop_DailyQuestCanvasController___c_o* __this,
   Rotatelab_Shop_DailyQuestMemberController_o* i, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController___c___ShowPopup_b__44_2_10bd5f8
               (undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  uint in_fpscr;
  float fVar16;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined2 *)(param_2 + 0x24) = 1;
  if (*(int *)(param_2 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuest_10bc9e0
                    (*(int *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x2c));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar12 = *(int *)(param_2 + 0x30);
  *(undefined1 *)(iVar6 + 0x14) = 1;
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Shop_DailyQuestCanvasController__SaveCurrentDailyQuests_10bc1a8(iVar12);
  iVar6 = *(int *)(param_2 + 0x20);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_010cd428 + 0x10cd0b0);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd42c + 0x10cd0c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd430 + 0x10cd0d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd434 + 0x10cd0dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd438 + 0x10cd0e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd43c + 0x10cd0f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd440 + 0x10cd100));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd444 + 0x10cd10c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd448 + 0x10cd118));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd44c + 0x10cd124));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd450 + 0x10cd130));
    *pcVar8 = '\x01';
  }
  fVar1 = _UNK_010cd424;
  if (*(char *)(iVar6 + 0x24) != '\0') {
    return;
  }
  iVar12 = 0;
  while( true ) {
    if (*(int *)(iVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar6 + 0x18) + 0xc) <= iVar12) {
      pcVar8 = (char *)(_UNK_010cc048 + 0x10cbfec);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc04c + 0x10cc000));
        *pcVar8 = '\x01';
      }
      uVar4 = **(undefined4 **)(_UNK_010cc050 + 0x10cc014);
      *(undefined1 *)(iVar6 + 0x24) = 1;
      piVar13 = (int *)UnityEngine_Component__GetComponent_object__143f3b0(iVar6,uVar4);
      if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar8 = (char *)(_UNK_039d0250 + 0x39d00d8);
      if (*pcVar8 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0254 + 0x39d00ec),0,0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0258 + 0x39d00f8));
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d025c + 0x39d0104));
        *pcVar8 = '\x01';
      }
      iVar6 = UnityEngine_UI_SetPropertyUtility__SetStruct_bool__15b5538
                        (piVar13 + 0x27,0,**(undefined4 **)(_UNK_039d0260 + 0x39d0120));
      if (iVar6 == 0) {
        return;
      }
      if ((char)piVar13[0x27] == '\0') {
        piVar15 = *(int **)(_UNK_039d0264 + 0x39d0148);
        if (*(int *)(*piVar15 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        uVar4 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
        piVar14 = *(int **)(_UNK_039d0268 + 0x39d0170);
        if (*(int *)(*piVar14 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar6 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
        if (iVar6 != 0) {
          if (*(int *)(*piVar15 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
          iVar6 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar10 = *(undefined4 *)(iVar6 + 0x24);
          uVar4 = UnityEngine_Component__get_gameObject_35fe360(piVar13,0);
          if (*(int *)(*piVar14 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
          iVar6 = UnityEngine_Object__op_Equality_36033f4(uVar10,uVar4,0);
          if (iVar6 != 0) {
            if (*(int *)(*piVar15 + 0x74) == 0) {
              thunk_FUN_00ec3934();
            }
            iVar6 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_39cce54(iVar6,0,0);
          }
        }
      }
      iVar6 = (**(code **)(*piVar13 + 0x180))(piVar13,*(undefined4 *)(*piVar13 + 0x184));
      uVar7 = 4;
      if (((iVar6 != 0) && (uVar7 = 2, *(char *)((int)piVar13 + 0xad) == '\0')) &&
         (uVar7 = 3, *(char *)((int)piVar13 + 0xae) == '\0')) {
        uVar7 = (undefined1)piVar13[0x2b];
      }
                    /* WARNING: Could not recover jumptable at 0x039cfdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar13 + 400))(piVar13,uVar7,0,*(undefined4 *)(*piVar13 + 0x194));
      return;
    }
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cd454 + 0x10cd184));
    System_Object___ctor_2bb93bc(iVar2,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar2 + 0x10) = iVar6;
    thunk_FUN_00ec5080((int *)(iVar2 + 0x10),iVar6);
    if (*(int *)(iVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar6 + 0x18),iVar12,**(undefined4 **)(_UNK_010cd458 + 0x10cd1d0));
    piVar13 = (int *)(iVar2 + 8);
    *piVar13 = iVar3;
    thunk_FUN_00ec5080(piVar13,iVar3);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010cd45c + 0x10cd1fc));
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(*piVar13 + 0x18);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(*piVar13 + 0x18);
    if (iVar11 == 0) break;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
              (iVar3,*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar11 + 0x10),
               *(undefined4 *)(iVar11 + 0x14),0,0,0);
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*piVar13 + 0x18);
    piVar15 = *(int **)(_UNK_010cd460 + 0x10cd2ac);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 8) == 8) {
      iVar3 = *piVar15;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar15;
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 300);
      uVar4 = UnityEngine_Component__GetComponent_object__143f3b0
                        (iVar6,**(undefined4 **)(_UNK_010cd464 + 0x10cd2e4));
      if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = *(int *)(*piVar13 + 0x18);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = *(int *)(iVar9 + 0x10);
      if (0xb < iVar9) {
        iVar9 = 0xc;
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_object__object__Int32Enum__int___Raise_23a7234
                (iVar3,uVar4,*(undefined4 *)(iVar6 + 0x20),6,iVar9,
                 **(undefined4 **)(_UNK_010cd468 + 0x10cd344));
      iVar3 = *(int *)(*(int *)(*piVar15 + 0x5c) + 0x16c);
      if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = *(int *)(*piVar13 + 0x18);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_int___Raise_23a2a74
                (iVar3,*(undefined4 *)(iVar9 + 0x10),**(undefined4 **)(_UNK_010cd46c + 0x10cd3a4));
    }
    puVar5 = *(undefined4 **)(_UNK_010cd470 + 0x10cd3b8);
    *(int *)(iVar2 + 0xc) = iVar12;
    uVar4 = thunk_FUN_00f00cdc(*puVar5);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar4,iVar2,**(undefined4 **)(_UNK_010cd474 + 0x10cd3dc),0);
    fVar16 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x16) & 3);
    DG_Tweening_DOVirtual__DelayedCall_11685c0(fVar16 * fVar1,uVar4,1,0);
    iVar12 = iVar12 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

