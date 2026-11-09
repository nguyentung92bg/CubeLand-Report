/* IL2CPP: Rotatelab.UI.ProfileAvatarButton$$Initialize
void Rotatelab_UI_ProfileAvatarButton__Initialize (Rotatelab_UI_ProfileAvatarButton_o* __this, UnityEngine_Sprite_o* avatar, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileAvatarButton$$Initialize
   void Rotatelab_UI_ProfileAvatarButton__Initialize (Rotatelab_UI_ProfileAvatarButton_o* __this,
   UnityEngine_Sprite_o* avatar, UnityEngine_Events_UnityAction_o* onClick, const MethodInfo*
   method); */

void Rotatelab_UI_ProfileAvatarButton__Initialize_1113388
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar4;
  undefined4 extraout_r3_01;
  undefined4 unaff_r4;
  char *pcVar5;
  undefined4 unaff_r5;
  int iVar6;
  uint uVar7;
  undefined4 unaff_r6;
  int iVar8;
  undefined4 unaff_r7;
  int iVar9;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x1c),param_2,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x24) + 0xb4);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc
                    (param_3,param_3,0,extraout_r3,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0362a14c + 0x362a0a8);
  uVar4 = extraout_r3_01;
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
    *pcVar5 = '\x01';
    uVar4 = extraout_r3_00;
  }
  iVar8 = *(int *)(iVar6 + 0xc);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(iVar8 + 8);
  uVar7 = *(uint *)(iVar8 + 0xc);
  piVar3 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar9 + 0xc)) {
    *(uint *)(iVar8 + 0xc) = uVar7 + 1;
    puVar1 = (undefined4 *)(iVar9 + uVar7 * 4 + 0x10);
    *puVar1 = uVar2;
    thunk_FUN_00ec5080(puVar1,uVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar8,uVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38),uVar4,
               unaff_r4,unaff_r5,unaff_r6,unaff_r7);
  }
  *(undefined1 *)(iVar6 + 0x14) = 1;
  return;
}

