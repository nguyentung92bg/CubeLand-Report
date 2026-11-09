/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$BuildDays
void Rotatelab_DailyDelivery_DailyDeliveryController__BuildDays (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$BuildDays
   void Rotatelab_DailyDelivery_DailyDeliveryController__BuildDays
   (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryController__BuildDays_10d6674(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  
  pcVar4 = (char *)(_UNK_010e67e0 + 0x10e668c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e67e4 + 0x10e66a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e67e8 + 0x10e66ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e67ec + 0x10e66b8));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = 0xc;
  if ((*(uint *)(param_1 + 0x2c) & 1) == 0) {
    iVar1 = 0x10;
  }
  iVar7 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x18) + iVar1);
  puVar11 = *(undefined4 **)(_UNK_010e67f0 + 0x10e66f4);
  puVar12 = *(undefined4 **)(_UNK_010e67f4 + 0x10e66fc);
  while( true ) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) <= iVar7) {
      piVar5 = *(int **)(param_1 + 0x20);
      if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      bVar13 = *(char *)(param_1 + 0x34) != '\0';
      pcVar4 = (char *)(_UNK_039d0250 + 0x39d00d8);
      if (*pcVar4 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0254 + 0x39d00ec),bVar13,0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0258 + 0x39d00f8));
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d025c + 0x39d0104));
        *pcVar4 = '\x01';
      }
      iVar1 = UnityEngine_UI_SetPropertyUtility__SetStruct_bool__15b5538
                        (piVar5 + 0x27,bVar13,**(undefined4 **)(_UNK_039d0260 + 0x39d0120));
      if (iVar1 != 0) {
        if ((char)piVar5[0x27] == '\0') {
          piVar10 = *(int **)(_UNK_039d0264 + 0x39d0148);
          if (*(int *)(*piVar10 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
          uVar3 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
          piVar9 = *(int **)(_UNK_039d0268 + 0x39d0170);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
          iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar3,0,0);
          if (iVar1 != 0) {
            if (*(int *)(*piVar10 + 0x74) == 0) {
              thunk_FUN_00ec3934();
            }
            iVar1 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar6 = *(undefined4 *)(iVar1 + 0x24);
            uVar3 = UnityEngine_Component__get_gameObject_35fe360(piVar5,0);
            if (*(int *)(*piVar9 + 0x74) == 0) {
              thunk_FUN_00ec3934();
            }
            iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar6,uVar3,0);
            if (iVar1 != 0) {
              if (*(int *)(*piVar10 + 0x74) == 0) {
                thunk_FUN_00ec3934();
              }
              iVar1 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_39cce54(iVar1,0,0);
            }
          }
        }
        iVar1 = (**(code **)(*piVar5 + 0x180))(piVar5,*(undefined4 *)(*piVar5 + 0x184));
        uVar8 = 4;
        if (((iVar1 != 0) && (uVar8 = 2, *(char *)((int)piVar5 + 0xad) == '\0')) &&
           (uVar8 = 3, *(char *)((int)piVar5 + 0xae) == '\0')) {
          uVar8 = (undefined1)piVar5[0x2b];
        }
                    /* WARNING: Could not recover jumptable at 0x039cfdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar5 + 400))(piVar5,uVar8,0,*(undefined4 *)(*piVar5 + 0x194));
        return;
      }
      return;
    }
    uVar8 = 2;
    if (*(int *)(param_1 + 0x30) <= iVar7) {
      uVar8 = *(char *)(param_1 + 0x34) != '\0' && iVar7 == *(int *)(param_1 + 0x30);
    }
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x1c),iVar7,*puVar11);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = System_Collections_Generic_List_object___get_Item_267d814(iVar1,iVar7,*puVar12);
    if (iVar2 == 0) break;
    iVar7 = iVar7 + 1;
    Rotatelab_DailyDelivery_DailyDeliveryDayBase__Initialize_10d6c50(iVar2,uVar3,iVar7,uVar8);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

