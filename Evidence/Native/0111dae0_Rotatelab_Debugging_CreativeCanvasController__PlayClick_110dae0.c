/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$PlayClick
void Rotatelab_Debugging_CreativeCanvasController__PlayClick (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$PlayClick
   void Rotatelab_Debugging_CreativeCanvasController__PlayClick
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__PlayClick_110dae0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_r5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  longlong lVar11;
  
  pcVar4 = (char *)(_UNK_0111dda0 + 0x111daf8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111dda4 + 0x111db0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111dda8 + 0x111db18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ddac + 0x111db24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ddb0 + 0x111db30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ddb4 + 0x111db3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ddb8 + 0x111db48));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111ddbc + 0x111db5c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_Currency_HeartManager__get_Hearts_10837c4(iVar1,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  lVar11 = (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
  (**(code **)(*piVar2 + 0xf8))
            (piVar2,(int)((ulonglong)lVar11 >> 0x20),(int)(lVar11 + 1),
             (int)((ulonglong)(lVar11 + 1) >> 0x20),*(undefined4 *)(*piVar2 + 0xfc));
  puVar9 = *(undefined4 **)(_UNK_0111ddc0 + 0x111dbcc);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar1 + 0x14);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x160);
  if (*(int *)(**(int **)(_UNK_0111ddc4 + 0x111dc0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = System_Convert__ToInt32_2b1ddb4(uVar6,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar5 + 0x10);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar10 = *(undefined4 **)(_UNK_0111ddc8 + 0x111dc58);
  iVar7 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar7,*(int *)(iVar7 + 0xc) + -1,*puVar10);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar7 + 8);
  if (iVar3 < *(int *)(iVar7 + 8)) {
    iVar8 = iVar3;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *puVar9;
  *(int *)(iVar1 + 0x44) = iVar8;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_MetaProgressionController__get_LatestMetaProgressLevel_fbbe58(iVar1,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Convert__ToInt32_2b1ddb4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x160),0);
  iVar5 = *(int *)(iVar5 + 0x10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar5,*(int *)(iVar5 + 0xc) + -1,*puVar10);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar5 + 8);
  if (iVar1 < *(int *)(iVar5 + 8)) {
    iVar3 = iVar1;
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(undefined4 *)(*piVar2 + 0xfc);
  (**(code **)(*piVar2 + 0xf8))(piVar2,uVar6,iVar3,iVar3 >> 0x1f,uVar6);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111ddcc + 0x111dd54));
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = System_Convert__ToInt32_2b1ddb4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x160),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Debugging_TestUserManager__OpenLevel_110ddd0(uVar6,uVar6);
  pcVar4 = (char *)(_UNK_0111d61c + 0x111d51c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d620 + 0x111d530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d624 + 0x111d53c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d628 + 0x111d548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d62c + 0x111d554));
    *pcVar4 = '\x01';
  }
  Rotatelab_Debugging_CreativeCanvasController__HideCreativePanel_110d258(param_1);
  uVar6 = **(undefined4 **)(_UNK_0111d634 + 0x111d57c);
  if (*(int *)(*(int *)(*(int *)(_UNK_0111d630 + 0x111d570) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = System_Type__GetTypeFromHandle_2b80928(uVar6,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)System_Type__GetMethod_2b8d9b0
                            (iVar1,**(undefined4 **)(_UNK_0111d638 + 0x111d5bc),0x34,0,unaff_r4,
                             unaff_r5);
  if (*(int *)(**(int **)(_UNK_0111d63c + 0x111d5d4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar6 = UnityEngine_Object__FindAnyObjectByType_object__14d422c
                    (**(undefined4 **)(_UNK_0111d640 + 0x111d5f0));
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar2 + 0x1c8))
            (piVar2,uVar6,0,0,0,0,*(undefined4 *)(*piVar2 + 0x1cc),unaff_r5,unaff_r11,unaff_lr);
  return;
}

