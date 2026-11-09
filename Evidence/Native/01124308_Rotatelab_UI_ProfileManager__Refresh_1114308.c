/* IL2CPP: Rotatelab.UI.ProfileManager$$Refresh
void Rotatelab_UI_ProfileManager__Refresh (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$Refresh
   void Rotatelab_UI_ProfileManager__Refresh (Rotatelab_UI_ProfileManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_ProfileManager__Refresh_1114308(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar2 = (char *)(_UNK_0112445c + 0x1124320);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01124460 + 0x1124334));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = 0;
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),0);
  iVar4 = *(int *)(param_1 + 0x30);
  uVar1 = Rotatelab_UI_ProfileManager__get_Username_1113454();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_InputField__set_text_34eb818(iVar4,uVar1,0);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x10);
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c));
  iVar4 = *(int *)(param_1 + 0x24);
  piVar7 = *(int **)(_UNK_01124464 + 0x11243d4);
  while( true ) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar3) {
      return;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar3) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar4 + 0x10 + uVar3 * 4);
    if (iVar5 == 0) break;
    if (*(int *)(iVar5 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(*(int *)(iVar5 + 0x1c) + 0x80);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = UnityEngine_Object__op_Equality_36033f4(uVar6,uVar1,0);
    Rotatelab_UI_ProfileAvatarButton__SetSelected_11133ec(iVar5,uVar1);
    uVar3 = uVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

