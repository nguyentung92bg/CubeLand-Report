/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$GetOffScreenAnchoredY
float Rotatelab_CloudRush_CloudRushPlayerAvatarController__GetOffScreenAnchoredY (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$GetOffScreenAnchoredY
   float Rotatelab_CloudRush_CloudRushPlayerAvatarController__GetOffScreenAnchoredY
   (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method); */

float Rotatelab_CloudRush_CloudRushPlayerAvatarController__GetOffScreenAnchoredY_10e5aec
                (int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  char *pcVar5;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pcVar5 = (char *)(_UNK_010f5d2c + 0x10f5b08);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5d30 + 0x10f5b1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5d34 + 0x10f5b28));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)UnityEngine_Transform__get_parent_36148d8(*(int *)(param_1 + 0x10),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&fStack_58,*(int *)(param_1 + 0x10),0);
  fVar1 = fStack_54;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&fStack_58,*(int *)(param_1 + 0x10),0);
  fVar2 = fStack_54;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,*(int *)(param_1 + 0x10),0);
  if (*(int *)(**(int **)(_UNK_010f5d38 + 0x10f5bc4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&fStack_58,*(int *)(param_1 + 0x10),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,*(int *)(param_1 + 0x10),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&fStack_58,*(int *)(param_1 + 0x10),0);
  fVar3 = fStack_54;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*piVar4 != **(int **)(_UNK_010f5d3c + 0x10f5c5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(piVar4);
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,piVar4,0);
  pcVar5 = (char *)(_UNK_010f5d40 + 0x10f5cc0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5d44 + 0x10f5cd4));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010f5d48 + 0x10f5ce8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  return (fStack_54 +
         SQRT(fStack_4c * fVar3 * fStack_4c * fVar3 + fStack_50 * fStack_58 * fStack_50 * fStack_58)
         * -0.5) - (fVar1 - fVar2);
}

