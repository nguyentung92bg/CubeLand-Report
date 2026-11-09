/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLevelVariantModified
void Rotatelab_Debugging_CreativeCanvasController__OnLevelVariantModified (Rotatelab_Debugging_CreativeCanvasController_o* __this, int32_t variantIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$OnLevelVariantModified
   void Rotatelab_Debugging_CreativeCanvasController__OnLevelVariantModified
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, int32_t variantIndex, const MethodInfo*
   method); */

void Rotatelab_Debugging_CreativeCanvasController__OnLevelVariantModified_110d9e4
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_0111dacc + 0x111d9fc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111dad0 + 0x111da10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111dad4 + 0x111da1c));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0111dad8 + 0x111da30);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c(iVar2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__ChangeLevelABTestVariant_1069d5c(iVar1,uVar3,param_2,0);
  piVar4 = *(int **)(_UNK_0111dadc + 0x111da8c);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
  pcVar5 = (char *)(_UNK_0111d61c + 0x111d51c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d620 + 0x111d530));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d624 + 0x111d53c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d628 + 0x111d548));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d62c + 0x111d554));
    *pcVar5 = '\x01';
  }
  Rotatelab_Debugging_CreativeCanvasController__HideCreativePanel_110d258(param_1);
  uVar3 = **(undefined4 **)(_UNK_0111d634 + 0x111d57c);
  if (*(int *)(*(int *)(*(int *)(_UNK_0111d630 + 0x111d570) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = System_Type__GetTypeFromHandle_2b80928(uVar3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)System_Type__GetMethod_2b8d9b0
                            (iVar1,**(undefined4 **)(_UNK_0111d638 + 0x111d5bc),0x34,0,unaff_r4,
                             unaff_r5);
  if (*(int *)(**(int **)(_UNK_0111d63c + 0x111d5d4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = UnityEngine_Object__FindAnyObjectByType_object__14d422c
                    (**(undefined4 **)(_UNK_0111d640 + 0x111d5f0));
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar4 + 0x1c8))
            (piVar4,uVar3,0,0,0,0,*(undefined4 *)(*piVar4 + 0x1cc),unaff_r5,unaff_r11,unaff_lr);
  return;
}

