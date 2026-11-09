/* IL2CPP: Rotatelab.UI.AdBreakController$$Continue
void Rotatelab_UI_AdBreakController__Continue (Rotatelab_UI_AdBreakController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AdBreakController$$Continue
   void Rotatelab_UI_AdBreakController__Continue (Rotatelab_UI_AdBreakController_o* __this, const
   MethodInfo* method); */

int Rotatelab_UI_AdBreakController__Continue_1116dc8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01127044 + 0x1126de0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127048 + 0x1126df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112704c + 0x1126e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127050 + 0x1126e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127054 + 0x1126e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127058 + 0x1126e24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112705c + 0x1126e30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127060 + 0x1126e3c));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x34);
  uStack_24 = 0;
  *(int *)(param_1 + 0x34) = 0;
  thunk_FUN_00ec5080();
  if (iVar4 != 0) {
    piVar6 = *(int **)(_UNK_01127064 + 0x1126e70);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x118);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01127068 + 0x1126e94));
    System_Action_Int32Enum__bool____ctor_1f185a4
              (uVar2,param_1,**(undefined4 **)(_UNK_0112706c + 0x1126eb8),0);
    uVar2 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                      (uVar5,uVar2,**(undefined4 **)(_UNK_01127070 + 0x1126ed0));
    *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x118) = uVar2;
    thunk_FUN_00ec5080();
    if (*(int *)(**(int **)(_UNK_01127074 + 0x1126efc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Stop_2ced694(param_1 + 0x38,0);
    Rotatelab_UI_AdBreakController__SubscribeToAdEvents_1117270(param_1);
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01127078 + 0x1126f30));
    System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0112707c + 0x1126f4c),0);
    PrimeTween_Tween__Delay_2ce9f2c(&uStack_38,uVar5,uVar2,1,0,0);
    *(undefined8 *)(param_1 + 0x58) = uStack_38;
    *(undefined8 *)(param_1 + 0x60) = uStack_30;
    thunk_FUN_00ec5080(param_1 + 0x60,0);
    iVar4 = (**(code **)(iVar4 + 0xc))(*(undefined4 *)(iVar4 + 0x20),*(undefined4 *)(iVar4 + 0x14));
    return iVar4;
  }
  pcVar3 = (char *)(_UNK_0112723c + 0x112709c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127240 + 0x11270b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127244 + 0x11270bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127248 + 0x11270c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112724c + 0x11270d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127250 + 0x11270e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127254 + 0x11270ec));
    *pcVar3 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01127258 + 0x1127100);
  iVar4 = *piVar6;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar6;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x118);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112725c + 0x1127124));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar2,param_1,**(undefined4 **)(_UNK_01127260 + 0x1127144),0);
  uVar2 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar5,uVar2,**(undefined4 **)(_UNK_01127264 + 0x112715c));
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x118) = uVar2;
  thunk_FUN_00ec5080();
  if (*(int *)(**(int **)(_UNK_01127268 + 0x1127188) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694(param_1 + 0x38,0);
  PrimeTween_Tween__Stop_2ced694(param_1 + 0x58,0);
  PrimeTween_Tween__Stop_2ced694(param_1 + 0x48,0);
  Rotatelab_UI_AdBreakController__UnsubscribeFromAdEvents_1116a64(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_GameObject__get_activeSelf_360212c(*(int *)(param_1 + 0x10),0);
  if (iVar4 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x10),0,0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112726c + 0x1127214));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_0113dd58 + 0x113dd24);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dd5c + 0x113dd38),0);
    *pcVar3 = '\x01';
  }
  uVar2 = **(undefined4 **)(_UNK_0113dd60 + 0x113dd4c);
  iVar4 = *(int *)(iVar4 + 0x14);
  pcVar3 = (char *)(_UNK_015e72a4 + 0x15e713c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_015e72a8 + 0x15e7150),uVar2);
    *pcVar3 = '\x01';
    uVar2 = extraout_r1;
  }
  if (iVar4 == 0) {
    pcVar3 = (char *)(_UNK_015e72ac + 0x15e71d8);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_015e72b0 + 0x15e71ec),uVar2);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_015e72b4 + 0x15e7200) + 0x5c)) {
      DG_Tweening_Core_Debugger__LogNullTween_117e228(0,0);
    }
  }
  else if (*(char *)(iVar4 + 0x94) == '\0') {
    pcVar3 = (char *)(_UNK_015e72b8 + 0x15e722c);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_015e72bc + 0x15e7240),uVar2);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_015e72c0 + 0x15e7254) + 0x5c)) {
      DG_Tweening_Core_Debugger__LogInvalidTween_117e184(iVar4,0);
    }
  }
  else if (*(char *)(iVar4 + 0x95) == '\0') {
    if (*(int *)(**(int **)(_UNK_015e72d0 + 0x15e7280) + 0x74) == 0) {
      FUN_00ec3934();
    }
    DG_Tweening_Core_TweenManager__Play_11835bc(iVar4,0);
  }
  else {
    pcVar3 = (char *)(_UNK_015e72c4 + 0x15e7184);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_015e72c8 + 0x15e7198),uVar2);
      *pcVar3 = '\x01';
    }
    if (1 < **(int **)(**(int **)(_UNK_015e72cc + 0x15e71ac) + 0x5c)) {
      DG_Tweening_Core_Debugger__LogNestedTween_117e1d4(iVar4,0);
    }
  }
  return iVar4;
}

