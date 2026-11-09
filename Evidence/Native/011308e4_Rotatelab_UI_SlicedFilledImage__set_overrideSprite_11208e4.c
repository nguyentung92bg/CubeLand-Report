/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_overrideSprite
void Rotatelab_UI_SlicedFilledImage__set_overrideSprite (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_Sprite_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_overrideSprite
   void Rotatelab_UI_SlicedFilledImage__set_overrideSprite (Rotatelab_UI_SlicedFilledImage_o*
   __this, UnityEngine_Sprite_o* value, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__set_overrideSprite_11208e4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  pcVar5 = (char *)(_UNK_01130958 + 0x11308fc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113095c + 0x1130910));
    *pcVar5 = '\x01';
  }
  iVar2 = Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetClass_object__1685658
                    (param_1 + 0x25,param_2,**(undefined4 **)(_UNK_01130960 + 0x1130928));
  if (iVar2 == 0) {
    return;
  }
  (**(code **)(*param_1 + 400))(param_1,*(undefined4 *)(*param_1 + 0x194));
  pcVar5 = (char *)(_UNK_01130524 + 0x1130314);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130528 + 0x1130328));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113052c + 0x1130334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130530 + 0x1130340));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130534 + 0x113034c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130538 + 0x1130358));
    *pcVar5 = '\x01';
  }
  uVar1 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  piVar3 = *(int **)(_UNK_0113053c + 0x1130378);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar1,0,0);
  if (iVar2 != 0) {
    iVar2 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = UnityEngine_Sprite__get_texture_35a2e9c(iVar2,0);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar1,0,0);
    if (iVar2 != 0) {
      piVar3 = *(int **)(_UNK_01130540 + 0x1130400);
      iVar2 = *piVar3;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar3;
      }
      if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x14) == '\0') {
        uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01130544 + 0x1130430));
        System_Action_object____ctor_1f11414(uVar1,0,**(undefined4 **)(_UNK_01130548 + 0x113044c),0)
        ;
        UnityEngine_U2D_SpriteAtlasManager__add_atlasRegistered_3646428(uVar1,0);
        iVar2 = *piVar3;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar3;
        }
        *(undefined1 *)(*(int *)(iVar2 + 0x5c) + 0x14) = 1;
      }
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar3;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x10);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *(int *)(iVar2 + 8);
      uVar6 = *(uint *)(iVar2 + 0xc);
      piVar3 = *(int **)(_UNK_0113054c + 0x11304cc);
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar6 < *(uint *)(iVar4 + 0xc)) {
        *(uint *)(iVar2 + 0xc) = uVar6 + 1;
        piVar3 = (int *)(iVar4 + uVar6 * 4 + 0x10);
        *piVar3 = (int)param_1;
        thunk_FUN_00ec5080(piVar3,param_1);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar2,param_1,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
      }
      *(undefined1 *)(param_1 + 0x27) = 1;
    }
  }
  return;
}

