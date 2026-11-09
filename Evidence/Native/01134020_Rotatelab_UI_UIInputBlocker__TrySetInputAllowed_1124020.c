/* IL2CPP: Rotatelab.UI.UIInputBlocker$$TrySetInputAllowed
void Rotatelab_UI_UIInputBlocker__TrySetInputAllowed (Rotatelab_UI_UIInputBlocker_o* __this, bool isAllowed, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIInputBlocker$$TrySetInputAllowed
   void Rotatelab_UI_UIInputBlocker__TrySetInputAllowed (Rotatelab_UI_UIInputBlocker_o* __this, bool
   isAllowed, Il2CppObject* source, const MethodInfo* method); */

void Rotatelab_UI_UIInputBlocker__TrySetInputAllowed_1124020
               (int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iStack_1c;
  
  pcVar6 = (char *)(_UNK_011343f0 + 0x1134040);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011343f4 + 0x1134054));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011343f8 + 0x1134060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011343fc + 0x113406c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134400 + 0x1134078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134404 + 0x1134084));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134408 + 0x1134090));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113440c + 0x113409c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134410 + 0x11340a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134414 + 0x11340b4));
    *pcVar6 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x10);
  iStack_1c = 0;
  if (param_2 == 0) {
    if (*(int *)(**(int **)(_UNK_0113441c + 0x1134104) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__AddUnique_object__1484964
              (iVar7,param_3,**(undefined4 **)(_UNK_01134420 + 0x1134124));
  }
  else {
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___Remove_267f138
              (iVar7,param_3,**(undefined4 **)(_UNK_01134418 + 0x11340ec));
  }
  iVar7 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_GameObject__get_activeSelf_360212c(iVar7,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar1 != 0 < *(int *)(*(int *)(param_1 + 0x10) + 0xc)) {
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar7,param_2 ^ 1,0);
    if (param_2 == 0) {
      piVar4 = *(int **)(_UNK_01134424 + 0x11341c0);
      if (*(int *)(*piVar4 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar7 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar5 = *(int **)(_UNK_01134428 + 0x11341f4);
      uVar2 = *(undefined4 *)(iVar7 + 0x24);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar7 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0);
      if (iVar7 == 0) {
        if (*(int *)(*piVar4 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar7 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar7 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar7 = UnityEngine_GameObject__TryGetComponent_object__1491628
                          (*(int *)(iVar7 + 0x24),&iStack_1c,
                           **(undefined4 **)(_UNK_0113442c + 0x113426c));
        if (iVar7 != 0) {
          if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(char *)(iStack_1c + 0x198) != '\0') {
            return;
          }
        }
      }
      if (*(int *)(*piVar4 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar7 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar3 = *(int **)(iVar7 + 0x14);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar7 = UnityEngine_Object__op_Equality_36033f4(piVar3,0,0);
      if (iVar7 != 0) {
        uVar2 = **(undefined4 **)(_UNK_01134434 + 0x113430c);
        if (*(int *)(*(int *)(*(int *)(_UNK_01134430 + 0x1134300) + 0x70) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar7 = System_Type__GetTypeFromHandle_2b80928(uVar2,0);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar7 = System_Type__GetMethod_2b8d9b0
                          (iVar7,**(undefined4 **)(_UNK_01134438 + 0x113434c),0x24,0);
        if (*(int *)(*piVar4 + 0x74) == 0) {
          FUN_00ec3934();
        }
        uVar2 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Reflection_MethodBase__Invoke_2a95b24(iVar7,uVar2,0,0);
        iVar7 = UnityEngine_EventSystems_EventSystem__get_current_39d2e2c(0);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar3 = *(int **)(iVar7 + 0x14);
      }
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar3 + 0x170))(piVar3,*(undefined4 *)(*piVar3 + 0x174));
      (**(code **)(*piVar3 + 0x178))(piVar3,*(undefined4 *)(*piVar3 + 0x17c));
    }
  }
  return;
}

