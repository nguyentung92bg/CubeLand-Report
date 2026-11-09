/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$OnStopped
void Rotatelab_Boosters_VacuumBoosterController__OnStopped (Rotatelab_Boosters_VacuumBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.VacuumBoosterController$$OnStopped
   void Rotatelab_Boosters_VacuumBoosterController__OnStopped
   (Rotatelab_Boosters_VacuumBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_VacuumBoosterController__OnStopped_1138350(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01148618 + 0x1148368);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114861c + 0x114837c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148620 + 0x1148388));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148624 + 0x1148394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148628 + 0x11483a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114862c + 0x11483ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148630 + 0x11483b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148634 + 0x11483c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01148638 + 0x11483d0));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  Rotatelab_FX_IDimEffectTarget__StopActiveDimEffect_10fd124(0);
  if (*(int *)(**(int **)(_UNK_0114863c + 0x1148400) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Stop_2ced694((undefined4 *)(param_1 + 0x78),0);
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  uVar6 = *(undefined4 *)(param_1 + 0x10);
  uVar8 = *(undefined4 *)(param_1 + 0x6c);
  uVar9 = *(undefined4 *)(param_1 + 0x70);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,0x1a,0);
  PrimeTween_Tween__LocalPosition_2ce550c
            (&uStack_50,uVar6,uVar1,uVar8,uVar9,0x3e800000,uStack_50,uStack_4c,uStack_48,uStack_44,
             uStack_40,1,0,0,0,0,0);
  piVar5 = *(int **)(_UNK_01148640 + 0x11484a0);
  iVar2 = *piVar5;
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar7 = puVar3[2];
  if (iVar7 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar1 = *puVar3;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01148644 + 0x11484f0));
    System_Action_object____ctor_1f11414(iVar7,uVar1,**(undefined4 **)(_UNK_01148648 + 0x1148510),0)
    ;
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 8);
    *piVar5 = iVar7;
    thunk_FUN_00ec5080(piVar5,iVar7);
  }
  if (*(int *)(**(int **)(_UNK_0114864c + 0x1148538) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_50,&uStack_38,param_1,iVar7,0,**(undefined4 **)(_UNK_01148650 + 0x114855c));
  *(undefined4 *)(param_1 + 0x78) = uStack_50;
  *(undefined4 *)(param_1 + 0x7c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x80) = uStack_48;
  *(undefined4 *)(param_1 + 0x84) = uStack_44;
  thunk_FUN_00ec5080(param_1 + 0x80,0);
  if (*(int *)(param_1 + 0x88) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*(int *)(param_1 + 0x88),0);
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01148654 + 0x11485ac));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 0x18);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01148658 + 0x11485cc));
  Rotatelab_UI_PointerPressEventListener_PointerEvent___ctor_1110d58
            (uVar1,param_1,**(undefined4 **)(_UNK_0114865c + 0x11485ec),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PointerPressEventListener__remove_OnPointerClick_1110c5c(iVar2,uVar1,0);
  return;
}

