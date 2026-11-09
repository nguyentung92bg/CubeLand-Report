/* IL2CPP: Rotatelab.UI.ProfileManager$$OnAvatarSelected
void Rotatelab_UI_ProfileManager__OnAvatarSelected (Rotatelab_UI_ProfileManager_o* __this, UnityEngine_Sprite_o* avatar, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$OnAvatarSelected
   void Rotatelab_UI_ProfileManager__OnAvatarSelected (Rotatelab_UI_ProfileManager_o* __this,
   UnityEngine_Sprite_o* avatar, const MethodInfo* method); */

void Rotatelab_UI_ProfileManager__OnAvatarSelected_1114c18(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  pcVar2 = (char *)(_UNK_01124d48 + 0x1124c30);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124d4c + 0x1124c44));
    *pcVar2 = '\x01';
  }
  piVar6 = *(int **)(_UNK_01124d50 + 0x1124c5c);
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_2,uVar3,0);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),param_2);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = 0;
    UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x18),param_2,0);
    iVar1 = *(int *)(param_1 + 0x24);
    while( true ) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = *(int *)(iVar1 + 0x10 + uVar5 * 4);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar4 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x1c) + 0x80);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar3 = UnityEngine_Object__op_Equality_36033f4(uVar3,param_2,0);
      Rotatelab_UI_ProfileAvatarButton__SetSelected_11133ec(iVar4,uVar3);
      uVar5 = uVar5 + 1;
    }
  }
  return;
}

