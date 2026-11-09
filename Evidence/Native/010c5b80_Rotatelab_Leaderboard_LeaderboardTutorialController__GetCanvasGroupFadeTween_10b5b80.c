/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$GetCanvasGroupFadeTween
PrimeTween_Tween_o Rotatelab_Leaderboard_LeaderboardTutorialController__GetCanvasGroupFadeTween (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, UnityEngine_CanvasGroup_o* canvasGroup, bool fadeIn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$GetCanvasGroupFadeTween
   PrimeTween_Tween_o Rotatelab_Leaderboard_LeaderboardTutorialController__GetCanvasGroupFadeTween
   (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, UnityEngine_CanvasGroup_o*
   canvasGroup, bool fadeIn, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardTutorialController__GetCanvasGroupFadeTween_10b5b80
               (undefined4 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_010c5e1c + 0x10c5ba0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5e20 + 0x10c5bb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5e24 + 0x10c5bc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5e28 + 0x10c5bcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5e2c + 0x10c5bd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5e30 + 0x10c5be4));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (param_4 == 0) {
    piVar6 = *(int **)(_UNK_010c5e38 + 0x10c5c28);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Alpha_2ce7b44(&uStack_40,param_3,0,0x3dcccccd,0,0,0,0,0,1,0,0,0,0,0);
    piVar7 = *(int **)(_UNK_010c5e3c + 0x10c5c94);
    iVar1 = *piVar7;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar7;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x5c);
    iVar5 = puVar2[2];
    if (iVar5 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
      }
      uVar4 = *puVar2;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c5e40 + 0x10c5ce4));
      System_Action_object____ctor_1f11414
                (iVar5,uVar4,**(undefined4 **)(_UNK_010c5e44 + 0x10c5d04),0);
      piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
      *piVar7 = iVar5;
      thunk_FUN_00ec5080(piVar7,iVar5);
    }
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__OnComplete_object__15d62e8
              (&uStack_40,&uStack_30,param_3,iVar5,0,**(undefined4 **)(_UNK_010c5e48 + 0x10c5d48));
  }
  else {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(param_3,0,0);
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_3,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
    if (*(int *)(**(int **)(_UNK_010c5e34 + 0x10c5db8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Alpha_2ce7b44(&uStack_40,param_3,0x3f800000,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  }
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  param_1[2] = uStack_38;
  param_1[3] = uStack_34;
  return;
}

