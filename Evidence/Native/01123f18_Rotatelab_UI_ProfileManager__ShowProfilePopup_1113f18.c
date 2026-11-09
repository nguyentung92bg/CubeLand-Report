/* IL2CPP: Rotatelab.UI.ProfileManager$$ShowProfilePopup
void Rotatelab_UI_ProfileManager__ShowProfilePopup (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$ShowProfilePopup
   void Rotatelab_UI_ProfileManager__ShowProfilePopup (Rotatelab_UI_ProfileManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_ProfileManager__ShowProfilePopup_1113f18(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_011242bc + 0x1123f30);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011242c0 + 0x1123f44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011242c4 + 0x1123f50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011242c8 + 0x1123f5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011242cc + 0x1123f68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011242d0 + 0x1123f74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011242d4 + 0x1123f80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011242d8 + 0x1123f8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011242dc + 0x1123f98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011242e0 + 0x1123fa4));
    *pcVar6 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar5 = *(int **)(_UNK_011242e4 + 0x1123fc0);
  uStack_30 = 0;
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar5;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x114);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar3,0,**(undefined4 **)(_UNK_011242e8 + 0x1123ffc));
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x44),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
  piVar5 = *(int **)(_UNK_011242ec + 0x1124054);
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7dbc(&uStack_40,uVar7,0,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  uVar2 = uStack_34;
  uVar1 = uStack_38;
  uVar9 = uStack_3c;
  uVar7 = uStack_40;
  iVar3 = *(int *)(**(int **)(_UNK_011242f0 + 0x11240bc) + 0x74);
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar3 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2c40(&uStack_40,iVar3,uVar7,uVar9,uVar1,uVar2,0)
  ;
  Rotatelab_UI_ProfileManager__Refresh_1114308(param_1);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x48),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_GameObject__get_activeSelf_360212c(iVar3,0);
  if (iVar3 != 0) {
    uVar7 = *(undefined4 *)(param_1 + 0x48);
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Alpha_2ce7b44(&uStack_40,uVar7,0,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    piVar10 = *(int **)(_UNK_011242f4 + 0x11241b8);
    uVar7 = *(undefined4 *)(param_1 + 0x48);
    iVar3 = *piVar10;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar10;
    }
    puVar4 = *(undefined4 **)(iVar3 + 0x5c);
    iVar8 = puVar4[1];
    if (iVar8 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar9 = *puVar4;
      iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011242f8 + 0x112420c));
      System_Action_object____ctor_1f11414
                (iVar8,uVar9,**(undefined4 **)(_UNK_011242fc + 0x112422c),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
      *piVar10 = iVar8;
      thunk_FUN_00ec5080(piVar10,iVar8);
    }
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__OnComplete_object__15d62e8
              (&uStack_40,&uStack_30,uVar7,iVar8,0,**(undefined4 **)(_UNK_01124300 + 0x1124270));
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01124304 + 0x1124290));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_HomePageCoordinator__NotifyClosed_107a584(iVar3,0x11,0);
  }
  return;
}

