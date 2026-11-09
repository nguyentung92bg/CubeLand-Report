/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$SetCollected
void Rotatelab_Shop_DailyQuestChest__SetCollected (Rotatelab_Shop_DailyQuestChest_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestChest$$SetCollected
   void Rotatelab_Shop_DailyQuestChest__SetCollected (Rotatelab_Shop_DailyQuestChest_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestChest__SetCollected_10bbfd8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  
  pcVar5 = (char *)(_UNK_010cc048 + 0x10cbfec);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cc04c + 0x10cc000));
    *pcVar5 = '\x01';
  }
  uVar4 = **(undefined4 **)(_UNK_010cc050 + 0x10cc014);
  *(undefined1 *)(param_1 + 0x24) = 1;
  piVar1 = (int *)UnityEngine_Component__GetComponent_object__143f3b0(param_1,uVar4);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_039d0250 + 0x39d00d8);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0254 + 0x39d00ec),0,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d0258 + 0x39d00f8));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039d025c + 0x39d0104));
    *pcVar5 = '\x01';
  }
  iVar2 = UnityEngine_UI_SetPropertyUtility__SetStruct_bool__15b5538
                    (piVar1 + 0x27,0,**(undefined4 **)(_UNK_039d0260 + 0x39d0120));
  if (iVar2 != 0) {
    if ((char)piVar1[0x27] == '\0') {
      piVar8 = *(int **)(_UNK_039d0264 + 0x39d0148);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      uVar4 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
      piVar7 = *(int **)(_UNK_039d0268 + 0x39d0170);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
      if (iVar2 != 0) {
        if (*(int *)(*piVar8 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar2 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar6 = *(undefined4 *)(iVar2 + 0x24);
        uVar4 = UnityEngine_Component__get_gameObject_35fe360(piVar1,0);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar6,uVar4,0);
        if (iVar2 != 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
          iVar2 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_39cce54(iVar2,0,0);
        }
      }
    }
    iVar2 = (**(code **)(*piVar1 + 0x180))(piVar1,*(undefined4 *)(*piVar1 + 0x184));
    uVar3 = 4;
    if (((iVar2 != 0) && (uVar3 = 2, *(char *)((int)piVar1 + 0xad) == '\0')) &&
       (uVar3 = 3, *(char *)((int)piVar1 + 0xae) == '\0')) {
      uVar3 = (undefined1)piVar1[0x2b];
    }
                    /* WARNING: Could not recover jumptable at 0x039cfdfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 400))(piVar1,uVar3,0,*(undefined4 *)(*piVar1 + 0x194));
    return;
  }
  return;
}

