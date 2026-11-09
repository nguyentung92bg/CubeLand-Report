/* IL2CPP: Rotatelab.UI.AdBreakController$$OnMainCanvasChangeHalfwayHandler
void Rotatelab_UI_AdBreakController__OnMainCanvasChangeHalfwayHandler (Rotatelab_UI_AdBreakController_o* __this, int32_t __, bool __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.AdBreakController$$OnMainCanvasChangeHalfwayHandler
   void Rotatelab_UI_AdBreakController__OnMainCanvasChangeHalfwayHandler
   (Rotatelab_UI_AdBreakController_o* __this, int32_t __, bool __, const MethodInfo* method); */

void Rotatelab_UI_AdBreakController__OnMainCanvasChangeHalfwayHandler_111740c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
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
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_011278c4 + 0x1127424);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011278c8 + 0x1127438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011278cc + 0x1127444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011278d0 + 0x1127450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011278d4 + 0x112745c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011278d8 + 0x1127468));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011278dc + 0x1127474));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011278e0 + 0x1127480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011278e4 + 0x112748c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011278e8 + 0x1127498));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar6 = *(int **)(_UNK_011278ec + 0x11274b4);
  uStack_38 = 0;
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x118);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011278f0 + 0x11274dc));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar2,param_1,**(undefined4 **)(_UNK_011278f4 + 0x11274fc),0);
  uVar2 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar5,uVar2,**(undefined4 **)(_UNK_011278f8 + 0x1127514));
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x118) = uVar2;
  thunk_FUN_00ec5080();
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011278fc + 0x112753c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UITransitionController__Hold_112dcbc(iVar1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x10),1,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x18),0);
  pcVar4 = (char *)(_UNK_01127900 + 0x11275a8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127904 + 0x11275bc));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01127908 + 0x11275d4);
  puVar3 = *(undefined4 **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar3,puVar3[1],puVar3[2],0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x14),0,0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  if (*(int *)(**(int **)(_UNK_0112790c + 0x1127638) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_48,uVar2,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,1,0);
  *(undefined4 *)(param_1 + 0x48) = uStack_48;
  *(undefined4 *)(param_1 + 0x4c) = uStack_44;
  *(undefined4 *)(param_1 + 0x50) = uStack_40;
  *(undefined4 *)(param_1 + 0x54) = uStack_3c;
  thunk_FUN_00ec5080(param_1 + 0x50,0);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  puVar3 = *(undefined4 **)(_UNK_01127910 + 0x11276c4);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  PrimeTween_Tween__UIFillAmount_2ce8448
            (&uStack_58,uVar2,0,0x3f800000,*(undefined4 *)(*(int *)(iVar1 + 0x50) + 0x10),0,0,0,0,0,
             1,0,0x3e4ccccd,0,1,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01127914 + 0x1127744));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_01127918 + 0x1127764),0);
  PrimeTween_Tween__OnComplete_2ceddf8(&uStack_68,&uStack_38,uVar2,0,0);
  *(undefined4 *)(param_1 + 0x38) = uStack_68;
  *(undefined4 *)(param_1 + 0x3c) = uStack_64;
  *(undefined4 *)(param_1 + 0x40) = uStack_60;
  *(undefined4 *)(param_1 + 0x44) = uStack_5c;
  thunk_FUN_00ec5080(param_1 + 0x40,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  PrimeTween_Tween__Delay_2ce9f2c(&uStack_78,*(undefined4 *)(*(int *)(iVar1 + 0x50) + 0x14),0,0,0,0)
  ;
  uStack_38 = uStack_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x18),0);
  pcVar4 = (char *)(_UNK_0112791c + 0x1127824);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01127920 + 0x1127838));
    *pcVar4 = '\x01';
  }
  iVar1 = *(int *)(*piVar6 + 0x5c);
  PrimeTween_Tween__Scale_2ce6560
            (&uStack_88,uVar2,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
             *(undefined4 *)(iVar1 + 0x14),0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Tween__Chain_2cedeec(&uStack_88,&uStack_38,uStack_88,uStack_84,uStack_80,uStack_7c,0);
  return;
}

