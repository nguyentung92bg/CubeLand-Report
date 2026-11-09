/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$Collect
void Rotatelab_Shop_DailyQuestChest__Collect (Rotatelab_Shop_DailyQuestChest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$Collect
   void Rotatelab_Shop_DailyQuestChest__Collect (Rotatelab_Shop_DailyQuestChest_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_DailyQuestChest__Collect_10bd090(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  uint in_fpscr;
  float fVar15;
  
  pcVar7 = (char *)(_UNK_010cd428 + 0x10cd0b0);
  if (*pcVar7 == '\0') {
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
    *pcVar7 = '\x01';
  }
  fVar1 = _UNK_010cd424;
  if (*(char *)(param_1 + 0x24) != '\0') {
    return;
  }
  iVar8 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x18) + 0xc) <= iVar8) {
      pcVar7 = (char *)(_UNK_010cc048 + 0x10cbfec);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010cc04c + 0x10cc000));
        *pcVar7 = '\x01';
      }
      uVar4 = **(undefined4 **)(_UNK_010cc050 + 0x10cc014);
      *(undefined1 *)(param_1 + 0x24) = 1;
      piVar12 = (int *)UnityEngine_Component__GetComponent_object__143f3b0(param_1,uVar4);
      if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar7 = (char *)(_UNK_039d0250 + 0x39d00d8);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0254 + 0x39d00ec),0,0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0258 + 0x39d00f8));
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d025c + 0x39d0104));
        *pcVar7 = '\x01';
      }
      iVar8 = UnityEngine_UI_SetPropertyUtility__SetStruct_bool__15b5538
                        (piVar12 + 0x27,0,**(undefined4 **)(_UNK_039d0260 + 0x39d0120));
      if (iVar8 == 0) {
        return;
      }
      if ((char)piVar12[0x27] == '\0') {
        piVar14 = *(int **)(_UNK_039d0264 + 0x39d0148);
        if (*(int *)(*piVar14 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        uVar4 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
        piVar13 = *(int **)(_UNK_039d0268 + 0x39d0170);
        if (*(int *)(*piVar13 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar8 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
        if (iVar8 != 0) {
          if (*(int *)(*piVar14 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
          iVar8 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar10 = *(undefined4 *)(iVar8 + 0x24);
          uVar4 = UnityEngine_Component__get_gameObject_35fe360(piVar12,0);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
          iVar8 = UnityEngine_Object__op_Equality_36033f4(uVar10,uVar4,0);
          if (iVar8 != 0) {
            if (*(int *)(*piVar14 + 0x74) == 0) {
              thunk_FUN_00ec3934();
            }
            iVar8 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
            if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_39cce54(iVar8,0,0);
          }
        }
      }
      iVar8 = (**(code **)(*piVar12 + 0x180))(piVar12,*(undefined4 *)(*piVar12 + 0x184));
      uVar6 = 4;
      if (((iVar8 != 0) && (uVar6 = 2, *(char *)((int)piVar12 + 0xad) == '\0')) &&
         (uVar6 = 3, *(char *)((int)piVar12 + 0xae) == '\0')) {
        uVar6 = (undefined1)piVar12[0x2b];
      }
                    /* WARNING: Could not recover jumptable at 0x039cfdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar12 + 400))(piVar12,uVar6,0,*(undefined4 *)(*piVar12 + 0x194));
      return;
    }
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cd454 + 0x10cd184));
    System_Object___ctor_2bb93bc(iVar2,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar2 + 0x10) = param_1;
    thunk_FUN_00ec5080((int *)(iVar2 + 0x10),param_1);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x18),iVar8,**(undefined4 **)(_UNK_010cd458 + 0x10cd1d0));
    piVar12 = (int *)(iVar2 + 8);
    *piVar12 = iVar3;
    thunk_FUN_00ec5080(piVar12,iVar3);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010cd45c + 0x10cd1fc));
    if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(*piVar12 + 0x18);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(*piVar12 + 0x18);
    if (iVar11 == 0) break;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
              (iVar3,*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar11 + 0x10),
               *(undefined4 *)(iVar11 + 0x14),0,0,0);
    if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*piVar12 + 0x18);
    piVar14 = *(int **)(_UNK_010cd460 + 0x10cd2ac);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 8) == 8) {
      iVar3 = *piVar14;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar14;
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 300);
      uVar4 = UnityEngine_Component__GetComponent_object__143f3b0
                        (param_1,**(undefined4 **)(_UNK_010cd464 + 0x10cd2e4));
      if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = *(int *)(*piVar12 + 0x18);
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
                (iVar3,uVar4,*(undefined4 *)(param_1 + 0x20),6,iVar9,
                 **(undefined4 **)(_UNK_010cd468 + 0x10cd344));
      iVar3 = *(int *)(*(int *)(*piVar14 + 0x5c) + 0x16c);
      if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = *(int *)(*piVar12 + 0x18);
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
    *(int *)(iVar2 + 0xc) = iVar8;
    uVar4 = thunk_FUN_00f00cdc(*puVar5);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar4,iVar2,**(undefined4 **)(_UNK_010cd474 + 0x10cd3dc),0);
    fVar15 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
    DG_Tweening_DOVirtual__DelayedCall_11685c0(fVar15 * fVar1,uVar4,1,0);
    iVar8 = iVar8 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

