/* IL2CPP: Rotatelab.Scripts.InputManager$$OnPointerDown
void Rotatelab_Scripts_InputManager__OnPointerDown (Rotatelab_Scripts_InputManager_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.InputManager$$OnPointerDown
   void Rotatelab_Scripts_InputManager__OnPointerDown (Rotatelab_Scripts_InputManager_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method); */

void Rotatelab_Scripts_InputManager__OnPointerDown_10121ac(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
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
  
  pcVar3 = (char *)(_UNK_010223f8 + 0x10221cc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010223fc + 0x10221e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022400 + 0x10221ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022404 + 0x10221f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01022408 + 0x1022204));
    *pcVar3 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_44 = 0;
  uStack_64 = 0;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_40 = uStack_5c;
  uStack_3c = uStack_58;
  uStack_38 = uStack_54;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x134) == 0) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0102240c + 0x1022254));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar1);
    if ((iVar1 == 0) &&
       (iVar1 = Rotatelab_Boosters_ShuffleBoosterController__get_IsActive_1137808(0), iVar1 == 0)) {
      puVar4 = *(undefined4 **)(_UNK_01022410 + 0x1022294);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar1 + 0x38) == '\0') {
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(char *)(iVar1 + 0x39) == '\0') {
          iVar1 = UnityEngine_Camera__get_main_35aede4(0);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Camera__ScreenPointToRay_35aedac
                    (&uStack_7c,iVar1,*(undefined4 *)(param_2 + 0xf0),
                     *(undefined4 *)(param_2 + 0xf4),0,0);
          iVar1 = UnityEngine_Camera__get_main_35aede4(0);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar2 = UnityEngine_Camera__get_farClipPlane_35abc24(iVar1,0);
          if (*(int *)(**(int **)(_UNK_01022414 + 0x1022368) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar1 = UnityEngine_Physics__Raycast_3692cac
                            (uStack_7c,uStack_78,uStack_74,uStack_70,uStack_6c,uStack_68,&uStack_60,
                             uVar2,0);
          if (iVar1 != 0) {
            iVar1 = UnityEngine_RaycastHit__get_transform_36961e0(&uStack_60,0);
            if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar1 = UnityEngine_Component__TryGetComponent_object__14402fc
                              (iVar1,&uStack_64,**(undefined4 **)(_UNK_01022418 + 0x10223d4));
            if (iVar1 != 0) {
              Rotatelab_Scripts_InputManager__OnPlaceableClicked_101241c(iVar1,uStack_64);
            }
          }
        }
      }
    }
  }
  return;
}

