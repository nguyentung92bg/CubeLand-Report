/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_sprite
void Rotatelab_UI_SlicedFilledImage__set_sprite (Rotatelab_UI_SlicedFilledImage_o* __this, UnityEngine_Sprite_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SlicedFilledImage$$set_sprite
   void Rotatelab_UI_SlicedFilledImage__set_sprite (Rotatelab_UI_SlicedFilledImage_o* __this,
   UnityEngine_Sprite_o* value, const MethodInfo* method); */

void Rotatelab_UI_SlicedFilledImage__set_sprite_1120280(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  pcVar3 = (char *)(_UNK_011302f4 + 0x1130298);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011302f8 + 0x11302ac));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_UI_SlicedFilledImage_SetPropertyUtility__SetClass_object__1685658
                    (param_1 + 0x20,param_2,**(undefined4 **)(_UNK_011302fc + 0x11302c4));
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*param_1 + 400))(param_1,*(undefined4 *)(*param_1 + 0x194));
  pcVar3 = (char *)(_UNK_01130524 + 0x1130314);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130528 + 0x1130328));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113052c + 0x1130334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130530 + 0x1130340));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130534 + 0x113034c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01130538 + 0x1130358));
    *pcVar3 = '\x01';
  }
  uVar2 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
  piVar4 = *(int **)(_UNK_0113053c + 0x1130378);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
  if (iVar1 != 0) {
    iVar1 = Rotatelab_UI_SlicedFilledImage__get_activeSprite_1120860(param_1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Sprite__get_texture_35a2e9c(iVar1,0);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0);
    if (iVar1 != 0) {
      piVar4 = *(int **)(_UNK_01130540 + 0x1130400);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar4;
      }
      if (*(char *)(*(int *)(iVar1 + 0x5c) + 0x14) == '\0') {
        uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01130544 + 0x1130430));
        System_Action_object____ctor_1f11414(uVar2,0,**(undefined4 **)(_UNK_01130548 + 0x113044c),0)
        ;
        UnityEngine_U2D_SpriteAtlasManager__add_atlasRegistered_3646428(uVar2,0);
        iVar1 = *piVar4;
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          iVar1 = *piVar4;
        }
        *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 0x14) = 1;
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar4;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(iVar1 + 8);
      uVar6 = *(uint *)(iVar1 + 0xc);
      piVar4 = *(int **)(_UNK_0113054c + 0x11304cc);
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar6 < *(uint *)(iVar5 + 0xc)) {
        *(uint *)(iVar1 + 0xc) = uVar6 + 1;
        piVar4 = (int *)(iVar5 + uVar6 * 4 + 0x10);
        *piVar4 = (int)param_1;
        thunk_FUN_00ec5080(piVar4,param_1);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_267dae0
                  (iVar1,param_1,*(undefined4 *)(*(int *)(*(int *)(*piVar4 + 0x10) + 0x60) + 0x38));
      }
      *(undefined1 *)(param_1 + 0x27) = 1;
    }
  }
  return;
}

