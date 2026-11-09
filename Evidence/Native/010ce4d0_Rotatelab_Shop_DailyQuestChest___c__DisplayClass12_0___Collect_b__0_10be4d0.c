/* IL2CPP: Rotatelab.Shop.DailyQuestChest.<>c__DisplayClass12_0$$<Collect>b__0
void Rotatelab_Shop_DailyQuestChest___c__DisplayClass12_0___Collect_b__0 (Rotatelab_Shop_DailyQuestChest___c__DisplayClass12_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestChest.<>c__DisplayClass12_0$$<Collect>b__0
   void Rotatelab_Shop_DailyQuestChest___c__DisplayClass12_0___Collect_b__0
   (Rotatelab_Shop_DailyQuestChest___c__DisplayClass12_0_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestChest___c__DisplayClass12_0___Collect_b__0_10be4d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  uint auStack_24 [4];
  
  pcVar6 = (char *)(_UNK_010ce5d8 + 0x10ce4e4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce5dc + 0x10ce4f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce5e0 + 0x10ce504));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010ce5e4 + 0x10ce518));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,9,0);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 8) == 8) {
    return;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x1c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar1,*(undefined4 *)(param_1 + 0xc),
                     **(undefined4 **)(_UNK_010ce5e8 + 0x10ce59c));
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_010ce92c + 0x10ce608);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce930 + 0x10ce61c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce934 + 0x10ce628));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce938 + 0x10ce634));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce93c + 0x10ce640));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce940 + 0x10ce64c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce944 + 0x10ce658));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce948 + 0x10ce664));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce94c + 0x10ce670));
    *pcVar6 = '\x01';
  }
  auStack_24[0] = 0;
  iVar2 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestSo_10b9214();
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = *(undefined4 *)(iVar2 + 0x20);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar10 = *(int **)(_UNK_010ce950 + 0x10ce6b0);
  uVar8 = *(undefined4 *)(iVar4 + 8);
  iVar2 = *piVar10;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar10;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar7 = puVar3[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar10 + 0x5c);
    }
    uVar5 = *puVar3;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ce954 + 0x10ce6fc));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar7,uVar5,**(undefined4 **)(_UNK_010ce958 + 0x10ce71c),0);
    piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
    *piVar10 = iVar7;
    thunk_FUN_00ec5080(piVar10,iVar7);
  }
  if (*(int *)(**(int **)(_UNK_010ce95c + 0x10ce744) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_Extensions__Find_object__Int32Enum__1486c7c
                    (uVar9,uVar8,iVar7,**(undefined4 **)(_UNK_010ce960 + 0x10ce768));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(iVar1 + 0x10),*(undefined4 *)(iVar2 + 0x14),0);
  piVar10 = *(int **)(iVar1 + 0x14);
  auStack_24[0] = FUN_00f88368(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14));
  auStack_24[0] = auStack_24[0] & 0x7fffffff;
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  uVar9 = System_Single__ToString_2b8501c(auStack_24,0);
  uVar9 = System_String__Concat_2a0b574(uVar8,uVar9,*(undefined4 *)(iVar2 + 0x10),0);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar10 + 0x2b0))(piVar10,uVar9,*(undefined4 *)(*piVar10 + 0x2b4));
  if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(iVar1 + 0x10),0);
  pcVar6 = (char *)(_UNK_010ce964 + 0x10ce830);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ce968 + 0x10ce844));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_010ce96c + 0x10ce85c) + 0x5c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar4,*puVar3,puVar3[1],puVar3[2],0);
  if (*(int *)(iVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(iVar1 + 0x18),0x3f800000,0);
  if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = UnityEngine_Component__get_transform_35fe190(*(int *)(iVar1 + 0x10),0);
  uVar9 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar9,0x3f800000,0x3e800000,0);
  uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ce970 + 0x10ce8e8));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar8,iVar1,**(undefined4 **)(_UNK_010ce974 + 0x10ce904),0);
  DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
            (uVar9,uVar8,**(undefined4 **)(_UNK_010ce978 + 0x10ce91c));
  return;
}

