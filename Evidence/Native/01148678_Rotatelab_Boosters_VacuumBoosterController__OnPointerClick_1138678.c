/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$OnPointerClick
void Rotatelab_Boosters_VacuumBoosterController__OnPointerClick (Rotatelab_Boosters_VacuumBoosterController_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$OnPointerClick
   void Rotatelab_Boosters_VacuumBoosterController__OnPointerClick
   (Rotatelab_Boosters_VacuumBoosterController_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void Rotatelab_Boosters_VacuumBoosterController__OnPointerClick_1138678
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  int *piStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01148870 + 0x1148694);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148874 + 0x11486a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148878 + 0x11486b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114887c + 0x11486c0));
    *pcVar5 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(param_2 + 0x131) == '\0') {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01148880 + 0x114870c));
    iVar2 = UnityEngine_Camera__get_main_35aede4(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Camera__ScreenPointToRay_35aedac
              (&piStack_60,iVar2,*(undefined4 *)(param_2 + 0x100),*(undefined4 *)(param_2 + 0x104),0
               ,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Grid_GridManager__Raycast_1107a90
                      (iVar1,piStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,&uStack_48
                       ,0,0);
    if (iVar1 != 0) {
      Rotatelab_Grid_GridRaycastHit__get_Cell_1108cf0(&piStack_60,&uStack_48,0);
      if (*(int *)(**(int **)(_UNK_01148884 + 0x11487c8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_Object__op_Inequality_36018e4(uStack_5c,0,0);
      if (iVar1 == 0) {
        Rotatelab_Grid_GridRaycastHit__get_Cell_1108cf0(&piStack_60,&uStack_48,0);
        if (piStack_60 != (int *)0x0) {
          uVar4 = (uint)*(byte *)(**(int **)(_UNK_01148888 + 0x114881c) + 0xb8);
          if (((uVar4 <= *(byte *)(*piStack_60 + 0xb8)) &&
              (*(int *)(*(int *)(*piStack_60 + 100) + uVar4 * 4 + -4) ==
               **(int **)(_UNK_01148888 + 0x114881c))) && (piStack_60[5] != 0x15)) {
            uVar3 = Rotatelab_Boosters_VacuumBoosterController__VacuumVoxelsCoroutine_113888c
                              (param_1);
            UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar3,0);
          }
        }
      }
    }
  }
  return;
}

