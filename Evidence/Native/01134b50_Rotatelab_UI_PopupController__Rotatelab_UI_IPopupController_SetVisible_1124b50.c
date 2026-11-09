/* IL2CPP: Rotatelab.UI.PopupController$$Rotatelab.UI.IPopupController.SetVisible
void Rotatelab_UI_PopupController__Rotatelab_UI_IPopupController_SetVisible (Rotatelab_UI_PopupController_o* __this, bool isVisible, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PopupController$$Rotatelab.UI.IPopupController.SetVisible
   void Rotatelab_UI_PopupController__Rotatelab_UI_IPopupController_SetVisible
   (Rotatelab_UI_PopupController_o* __this, bool isVisible, const MethodInfo* method); */

uint Rotatelab_UI_PopupController__Rotatelab_UI_IPopupController_SetVisible_1124b50
               (int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  
  pcVar11 = (char *)(_UNK_01134d80 + 0x1134b68);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134d84 + 0x1134b7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134d88 + 0x1134b88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134d8c + 0x1134b94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134d90 + 0x1134ba0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134d94 + 0x1134bac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134d98 + 0x1134bb8));
    *pcVar11 = '\x01';
  }
  *(char *)(param_1 + 4) = (char)param_2;
  if (param_2 == 0) {
    iVar1 = param_1[5];
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01134da8 + 0x1134cc4));
    System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_01134dac + 0x1134ce4),0);
    if (*(int *)(**(int **)(_UNK_01134db0 + 0x1134cf8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = Rotatelab_Extensions__SetVisibility_fc2a78(iVar1,0,uVar3,0);
    Rotatelab_Extensions__BlockInputDuringAnimation_object__1484cf0
              (uVar3,**(undefined4 **)(_UNK_01134db4 + 0x1134d28));
    puVar4 = (undefined4 *)(*param_1 + 0x104);
    puVar6 = (undefined4 *)(*param_1 + 0x100);
  }
  else {
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01134d9c + 0x1134c20));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = UnityEngine_Component__get_transform_35fe190(iVar2,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__SetParent_3615994(iVar1,uVar3,1,0);
    iVar1 = param_1[5];
    if (*(int *)(**(int **)(_UNK_01134da0 + 0x1134c70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = Rotatelab_Extensions__SetVisibility_fc2a78(iVar1,1,0,0);
    Rotatelab_Extensions__BlockInputDuringAnimation_object__1484cf0
              (uVar3,**(undefined4 **)(_UNK_01134da4 + 0x1134ca4));
    puVar4 = (undefined4 *)(*param_1 + 0xfc);
    puVar6 = (undefined4 *)(*param_1 + 0xf8);
  }
  (*(code *)*puVar6)(param_1,*puVar4);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01134db8 + 0x1134d54));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar11 = (char *)(_UNK_01027be8 + 0x1027b48);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bec + 0x1027b5c),param_2,param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf0 + 0x1027b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027bf4 + 0x1027b74));
    *pcVar11 = '\x01';
  }
  piVar10 = *(int **)(iVar1 + 0x1c);
  iVar1 = *(int *)(**(int **)(_UNK_01027bf8 + 0x1027b8c) + 0x74);
  if (param_2 == 0) {
    if (iVar1 == 0) {
      FUN_00ec3934();
    }
    iVar1 = **(int **)(_UNK_01027c00 + 0x1027bdc);
    if (*(int *)(iVar1 + 0x1c) == 0) {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4));
      if (*(int *)(iVar1 + 0x1c) == 0) {
        FUN_00efd7c4(iVar1);
      }
    }
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = System_Collections_Generic_List_object___IndexOf_267e86c
                      (piVar10,param_1,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 8));
    if (-1 < (int)uVar7) {
      if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__RemoveAtFast_object__14882cc
                (piVar10,uVar7,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0xc));
    }
    return ~uVar7 >> 0x1f;
  }
  if (iVar1 == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_01027bfc + 0x1027bb4);
  if (*(int *)(iVar1 + 0x1c) == 0) {
    FUN_00efd7c4(iVar1);
  }
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar5 = *piVar10;
  uVar7 = (uint)*(ushort *)(iVar5 + 0xb6);
  if (uVar7 != 0) {
    piVar9 = (int *)(*(int *)(iVar5 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar2) {
        puVar4 = (undefined4 *)(iVar5 + *piVar9 * 8 + 0xe0);
        goto LAB_01494a00;
      }
      uVar7 = uVar7 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar10,iVar2,4);
LAB_01494a00:
  uVar7 = (*(code *)*puVar4)(piVar10,param_1,puVar4[1]);
  if (uVar7 == 0) {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar2 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar1) {
          puVar4 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xd0);
          goto LAB_01494a8c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar10,iVar1,2);
LAB_01494a8c:
    (*(code *)*puVar4)(piVar10,param_1,puVar4[1]);
  }
  return uVar7 ^ 1;
}

