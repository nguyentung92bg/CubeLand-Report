/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedImage$$Apply
void Rotatelab_Leaderboard_MidGameThemedImage__Apply (Rotatelab_Leaderboard_MidGameThemedImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedImage$$Apply
   void Rotatelab_Leaderboard_MidGameThemedImage__Apply (Rotatelab_Leaderboard_MidGameThemedImage_o*
   __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameThemedImage__Apply_10b88dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  
  pcVar4 = (char *)(_UNK_010c8ae4 + 0x10c88f4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8ae8 + 0x10c8908));
    *pcVar4 = '\x01';
  }
  puVar8 = *(undefined4 **)(_UNK_010c8aec + 0x10c891c);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Leaderboard_MidGameLeaderboardManager__GetThemeSprite_10b8264
                    (iVar1,*(undefined4 *)(param_1 + 0x14));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar5,uVar2,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Leaderboard_MidGameLeaderboardManager__get_CurrentTheme_10b81a8(iVar1);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 1) {
    fVar9 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x18);
    fVar6 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x1c);
  }
  else {
    fVar9 = *(float *)(param_1 + 0x28);
    fVar6 = *(float *)(param_1 + 0x2c);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar5,fVar9,fVar6,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 1) {
    fVar10 = *(float *)(param_1 + 0x20);
    fVar9 = *(float *)(param_1 + 0x34) * fVar10;
    fVar6 = *(float *)(param_1 + 0x38) * fVar10;
    fVar10 = *(float *)(param_1 + 0x30) * fVar10;
  }
  else {
    fVar10 = *(float *)(param_1 + 0x30);
    fVar9 = *(float *)(param_1 + 0x34);
    fVar6 = *(float *)(param_1 + 0x38);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = 0;
  UnityEngine_Transform__set_localScale_36155dc(iVar5,fVar10,fVar9,fVar6,0);
  iVar5 = *(int *)(param_1 + 0x24);
  while( true ) {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar7) {
      return;
    }
    if (*(uint *)(iVar5 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar5 + 0x10 + uVar7 * 4);
    if (iVar3 == 0) break;
    UnityEngine_GameObject__SetActive_3602038(iVar3,iVar1 != 1,0);
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

