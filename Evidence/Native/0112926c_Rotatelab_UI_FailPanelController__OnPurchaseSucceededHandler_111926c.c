/* IL2CPP: Rotatelab.UI.FailPanelController$$OnPurchaseSucceededHandler
void Rotatelab_UI_FailPanelController__OnPurchaseSucceededHandler (Rotatelab_UI_FailPanelController_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$OnPurchaseSucceededHandler
   void Rotatelab_UI_FailPanelController__OnPurchaseSucceededHandler
   (Rotatelab_UI_FailPanelController_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const
   MethodInfo* method); */

int Rotatelab_UI_FailPanelController__OnPurchaseSucceededHandler_111926c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  
  pcVar7 = (char *)(_UNK_01129498 + 0x1129284);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112949c + 0x1129298));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011294a0 + 0x11292a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011294a4 + 0x11292b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011294a8 + 0x11292bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011294ac + 0x11292c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011294b0 + 0x11292d4));
    *pcVar7 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011294b4 + 0x11292e8));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  if (*(char *)(param_1 + 0xd9) == '\0') {
    return 0;
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 100) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_String__op_Equality_2a0975c
                    (*(undefined4 *)(param_2 + 8),*(undefined4 *)(*(int *)(param_1 + 100) + 0xc),0);
  if (iVar2 == 0) {
    piVar8 = *(int **)(param_2 + 0x10);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = (**(code **)(*piVar8 + 0xe0))(piVar8,*(undefined4 *)(*piVar8 + 0xe4));
    if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = UnityEngine_Object__get_name_36081bc(*(int *)(param_1 + 0x60),0);
    iVar2 = System_String__op_Equality_2a0975c(uVar6,uVar3,0);
    if (iVar2 == 0) {
      return 0;
    }
    piVar8 = *(int **)(_UNK_011294bc + 0x11293ec);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x10);
  }
  else {
    piVar8 = *(int **)(_UNK_011294b8 + 0x1129364);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
  }
  *(undefined4 *)(iVar1 + 0xc) = uVar6;
  thunk_FUN_00ec5080();
  uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011294c0 + 0x1129420));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar6,iVar1,**(undefined4 **)(_UNK_011294c4 + 0x112943c),0);
  iVar1 = DG_Tweening_DOVirtual__DelayedCall_11685c0(0x3e4ccccd,uVar6,1,0);
  if (*(int *)(**(int **)(_UNK_011294c8 + 0x112946c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = **(int **)(_UNK_011294cc + 0x1129488);
  piVar8 = *(int **)(iVar2 + 0x1c);
  if (piVar8 == (int *)0x0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01494e8c + 0x1494d18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01494e90 + 0x1494d24));
    piVar8 = *(int **)(iVar2 + 0x1c);
    if (piVar8 == (int *)0x0) {
      FUN_00efd7c4(iVar2);
      piVar8 = *(int **)(iVar2 + 0x1c);
    }
  }
  if ((*(ushort *)(*piVar8 + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  iVar4 = thunk_FUN_00f00cdc();
  Rotatelab_Extensions___c__DisplayClass91_0_object____ctor_17839a4
            (iVar4,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 4));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = (int *)(iVar4 + 8);
  *piVar8 = iVar1;
  thunk_FUN_00ec5080(piVar8,iVar1);
  iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_01494e94 + 0x1494d94));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIInputBlocker__TrySetInputAllowed_1124020(iVar1,0,*piVar8,0);
  if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar10 = *(int **)(_UNK_01494e98 + 0x1494ddc);
  piVar9 = (int *)(*piVar8 + 0x50);
  iVar1 = *piVar9;
  uVar6 = thunk_FUN_00f00cdc(*piVar10);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar6,iVar4,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0xc),0);
  piVar5 = (int *)System_Delegate__Combine_2bbca94(iVar1,uVar6,0);
  if (piVar5 == (int *)0x0) {
    *piVar9 = 0;
    piVar5 = (int *)0x0;
  }
  else {
    iVar1 = *piVar10;
    if (*piVar5 != iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar5);
    }
    *piVar9 = (int)piVar5;
    if (*piVar5 != iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(piVar5);
    }
  }
  thunk_FUN_00ec5080(piVar9,piVar5);
  return *piVar8;
}

