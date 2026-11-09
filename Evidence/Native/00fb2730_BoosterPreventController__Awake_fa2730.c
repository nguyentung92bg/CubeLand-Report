/* IL2CPP: BoosterPreventController$$Awake
void BoosterPreventController__Awake (BoosterPreventController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: BoosterPreventController$$Awake
   void BoosterPreventController__Awake (BoosterPreventController_o* __this, const MethodInfo*
   method); */

void BoosterPreventController__Awake_fa2730(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_00fb2aa8 + 0xfb2748);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2aac + 0xfb275c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ab0 + 0xfb2768));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ab4 + 0xfb2774));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ab8 + 0xfb2780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2abc + 0xfb278c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ac0 + 0xfb2798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ac4 + 0xfb27a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ac8 + 0xfb27b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2acc + 0xfb27bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ad0 + 0xfb27c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ad4 + 0xfb27d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ad8 + 0xfb27e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2adc + 0xfb27ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fb2ae0 + 0xfb27f8));
    *pcVar2 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_00fb2ae4 + 0xfb280c));
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_28,*(int *)(param_1 + 0x14),0);
  *(undefined4 *)(param_1 + 0x30) = uStack_28;
  *(undefined4 *)(param_1 + 0x34) = uStack_24;
  BoosterPreventController__Hide_fa2b1c(param_1);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_00fb2ae8 + 0xfb2860);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_00fb2aec + 0xfb2880),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar1,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_00fb2af0 + 0xfb28d8),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar1,0);
  piVar6 = *(int **)(_UNK_00fb2af4 + 0xfb2908);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  puVar5 = *(undefined4 **)(_UNK_00fb2af8 + 0xfb292c);
  uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0xa4);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  System_Action_Int32Enum____ctor_1f10670
            (uVar1,param_1,**(undefined4 **)(_UNK_00fb2afc + 0xfb294c),0);
  puVar7 = *(undefined4 **)(_UNK_00fb2b00 + 0xfb2968);
  uVar1 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar4,uVar1,*puVar7);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xa4) = uVar1;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xa8);
  uVar1 = thunk_FUN_00f00cdc(*puVar5);
  System_Action_Int32Enum____ctor_1f10670
            (uVar1,param_1,**(undefined4 **)(_UNK_00fb2b04 + 0xfb29ac),0);
  uVar1 = Rotatelab_GameAction_Int32Enum___op_Addition_23a2cf8(uVar4,uVar1,*puVar7);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xa8) = uVar1;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x24);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fb2b08 + 0xfb29ec));
  System_Action_object____ctor_1f11414(uVar1,param_1,**(undefined4 **)(_UNK_00fb2b0c + 0xfb2a0c),0);
  uVar1 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar4,uVar1,**(undefined4 **)(_UNK_00fb2b10 + 0xfb2a24));
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x24) = uVar1;
  thunk_FUN_00ec5080();
  uVar4 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x34);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fb2b14 + 0xfb2a54));
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_00fb2b18 + 0xfb2a74),0);
  uVar1 = Rotatelab_GameAction__op_Addition_fbfed8(uVar4,uVar1,0);
  *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x34) = uVar1;
  thunk_FUN_00ec5080();
  return;
}

