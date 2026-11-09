/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$GetPlayerAvatarPosition
UnityEngine_Vector2_o Rotatelab_CloudRush_CloudRushCloudController__GetPlayerAvatarPosition (Rotatelab_CloudRush_CloudRushCloudController_o* __this, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$GetPlayerAvatarPosition
   UnityEngine_Vector2_o Rotatelab_CloudRush_CloudRushCloudController__GetPlayerAvatarPosition
   (Rotatelab_CloudRush_CloudRushCloudController_o* __this, int32_t index, const MethodInfo*
   method); */

void Rotatelab_CloudRush_CloudRushCloudController__GetPlayerAvatarPosition_10db6f0
               (undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_1c;
  
  pcVar3 = (char *)(_UNK_010eb84c + 0x10eb710);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb850 + 0x10eb724));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb854 + 0x10eb730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb858 + 0x10eb73c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb85c + 0x10eb748));
    *pcVar3 = '\x01';
  }
  if (-1 < param_3) {
    if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (param_3 < *(int *)(*(int *)(param_2 + 0x10) + 0xc)) {
      if (*(int *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_Vector2___get_Item_26f9bfc
                (&uStack_28,*(int *)(param_2 + 0x10),param_3,
                 **(undefined4 **)(_UNK_010eb878 + 0x10eb798));
      goto LAB_010eb840;
    }
  }
  iStack_1c = param_3;
  uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010eb860 + 0x10eb7b8) + 0x24),&iStack_1c);
  uVar1 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_010eb864 + 0x10eb7d4),uVar1,0);
  if (*(int *)(**(int **)(_UNK_010eb868 + 0x10eb7e8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__LogWarning_35b0090(uVar1,0);
  pcVar3 = (char *)(_UNK_010eb86c + 0x10eb810);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb870 + 0x10eb824));
    *pcVar3 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010eb874 + 0x10eb838) + 0x5c);
  uStack_28 = *puVar2;
  uStack_24 = puVar2[1];
LAB_010eb840:
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

