/* IL2CPP: Rotatelab.Shop.RewardMiniPanelController.<ShowRewardAnim>d__6$$MoveNext
bool Rotatelab_Shop_RewardMiniPanelController__ShowRewardAnim_d__6__MoveNext (Rotatelab_Shop_RewardMiniPanelController__ShowRewardAnim_d__6_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.RewardMiniPanelController.<ShowRewardAnim>d__6$$MoveNext
   bool Rotatelab_Shop_RewardMiniPanelController__ShowRewardAnim_d__6__MoveNext
   (Rotatelab_Shop_RewardMiniPanelController__ShowRewardAnim_d__6_o* __this, const MethodInfo*
   method); */

void Rotatelab_Shop_RewardMiniPanelController__ShowRewardAnim_d__6__MoveNext_10d37f0(int param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = _UNK_010e39d4;
  iVar6 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    fVar7 = *(float *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (1.0 <= fVar7) {
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 0x1c) = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  fVar1 = (float)UnityEngine_Time__get_deltaTime_36109f8(0);
  fVar7 = fVar7 + fVar1 / 3.0;
  if (1.0 < fVar7) {
    fVar7 = 1.0;
  }
  *(float *)(param_1 + 0x14) = fVar7;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar7 = (float)UnityEngine_AnimationCurve__Evaluate_35a61e8(*(int *)(iVar6 + 0x18),fVar7,0);
  iVar6 = *(int *)(iVar6 + 0x14);
  pcVar4 = (char *)(_UNK_010e39d8 + 0x10e38bc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e39dc + 0x10e38d0));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010e39e0 + 0x10e38e8);
  pfVar2 = *(float **)(*piVar5 + 0x5c);
  pcVar4 = (char *)(_UNK_010e39e4 + 0x10e38f8);
  fVar1 = *pfVar2;
  fVar9 = pfVar2[1];
  fVar10 = pfVar2[2];
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(piVar5);
    iVar3 = *piVar5;
    *pcVar4 = '\x01';
    pfVar2 = *(float **)(iVar3 + 0x5c);
  }
  fVar8 = fVar7;
  if (1.0 < fVar7) {
    fVar8 = 1.0;
  }
  if (fVar7 < 0.0) {
    fVar8 = _UNK_010e39d4;
  }
  if (iVar6 != 0) {
    UnityEngine_Transform__set_localScale_36155dc
              (iVar6,fVar1 + fVar8 * (pfVar2[3] - fVar1),fVar9 + fVar8 * (pfVar2[4] - fVar9),
               fVar10 + fVar8 * (pfVar2[5] - fVar10),0);
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 8) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

