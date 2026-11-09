/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$GetOffScreenAnchoredY
float Rotatelab_CloudRush_CloudRushCloudController__GetOffScreenAnchoredY (Rotatelab_CloudRush_CloudRushCloudController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushCloudController$$GetOffScreenAnchoredY
   float Rotatelab_CloudRush_CloudRushCloudController__GetOffScreenAnchoredY
   (Rotatelab_CloudRush_CloudRushCloudController_o* __this, const MethodInfo* method); */

float Rotatelab_CloudRush_CloudRushCloudController__GetOffScreenAnchoredY_10db558(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uStack_58;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  
  pcVar5 = (char *)(_UNK_010eb6e4 + 0x10eb574);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010eb6e8 + 0x10eb588));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x24);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&uStack_58,iVar6,0);
  fVar1 = fStack_54;
  if (*(int *)(**(int **)(_UNK_010eb6ec + 0x10eb5bc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__TransformPoint_3616968(&uStack_58,iVar6,0,fVar1,0,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__InverseTransformPoint_3616aa0
            (&uStack_58,*(int *)(param_1 + 0x20),uStack_58,fStack_54,uStack_50,0);
  fVar1 = fStack_54;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_58,*(int *)(param_1 + 0x1c),0);
  fVar2 = fStack_54;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_58,*(int *)(param_1 + 0x1c),0);
  fVar3 = fStack_54;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&uStack_58,*(int *)(param_1 + 0x1c),0);
  fVar4 = fStack_54;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&uStack_58,*(int *)(param_1 + 0x1c),0);
  return (fVar1 - (fVar4 + fStack_4c) * fStack_54) - (fVar2 - fVar3);
}

