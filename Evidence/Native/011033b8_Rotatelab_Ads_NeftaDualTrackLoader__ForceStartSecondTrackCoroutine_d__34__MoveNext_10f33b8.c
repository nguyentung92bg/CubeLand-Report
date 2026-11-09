/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<ForceStartSecondTrackCoroutine>d__34$$MoveNext
bool Rotatelab_Ads_NeftaDualTrackLoader__ForceStartSecondTrackCoroutine_d__34__MoveNext (Rotatelab_Ads_NeftaDualTrackLoader__ForceStartSecondTrackCoroutine_d__34_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<ForceStartSecondTrackCoroutine>d__34$$MoveNext
   bool Rotatelab_Ads_NeftaDualTrackLoader__ForceStartSecondTrackCoroutine_d__34__MoveNext
   (Rotatelab_Ads_NeftaDualTrackLoader__ForceStartSecondTrackCoroutine_d__34_o* __this, const
   MethodInfo* method); */

bool Rotatelab_Ads_NeftaDualTrackLoader__ForceStartSecondTrackCoroutine_d__34__MoveNext_10f33b8
               (int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  pcVar3 = (char *)(_UNK_0110358c + 0x11033cc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103590 + 0x11033e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103594 + 0x11033ec));
    *pcVar3 = '\x01';
  }
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 0) {
    puVar1 = *(undefined4 **)(_UNK_0110359c + 0x110354c);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    uVar2 = thunk_FUN_00f00cdc(*puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_360c850(uVar2,uVar5,0);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar8 == 1) {
    iVar4 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar4 + 0x1e) == '\0') {
      iVar6 = *(int *)(iVar4 + 8);
      *(undefined1 *)(iVar4 + 0x1e) = 1;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar6 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (*(int *)(iVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(iVar6 + 0x18) + 0x14) == 0) {
        iVar6 = *(int *)(iVar4 + 8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar6 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        Rotatelab_Ads_NeftaDualTrackLoader__LoadTrack_10f26b4(iVar4,*(undefined4 *)(iVar6 + 0x18));
      }
      piVar7 = *(int **)(_UNK_01103598 + 0x11034a8);
      iVar6 = *piVar7;
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        iVar6 = *piVar7;
      }
      if (*(float *)(*(int *)(iVar6 + 0x5c) + 0x24) < 0.0) {
        iVar6 = *(int *)(iVar4 + 8);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar6 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (*(int *)(iVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(iVar6 + 0x10) + 0x14) == 0) {
          iVar6 = *(int *)(iVar4 + 8);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar6 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          Rotatelab_Ads_NeftaDualTrackLoader__LoadTrack_10f26b4(iVar4,*(undefined4 *)(iVar6 + 0x10))
          ;
        }
      }
    }
  }
  return iVar8 == 0;
}

