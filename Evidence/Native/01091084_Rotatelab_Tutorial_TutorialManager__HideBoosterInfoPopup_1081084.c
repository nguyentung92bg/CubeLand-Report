/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$HideBoosterInfoPopup
void Rotatelab_Tutorial_TutorialManager__HideBoosterInfoPopup (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$HideBoosterInfoPopup
   void Rotatelab_Tutorial_TutorialManager__HideBoosterInfoPopup
   (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__HideBoosterInfoPopup_1081084(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x28) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Boosters_UI_BoosterInfoPopupController__Hide_113e118(*(int *)(param_1 + 0x14),0);
  pcVar4 = (char *)(_UNK_0109123c + 0x10910ec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091240 + 0x1091100));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091244 + 0x109110c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091248 + 0x1091118));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x3c) + 0x24) != 1) {
    piVar5 = *(int **)(_UNK_0109124c + 0x1091148);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xd4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01091250 + 0x1091188));
    if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0xc);
    if (*(int *)(**(int **)(_UNK_01091254 + 0x10911ac) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = Rotatelab_Extensions__ToParticleImageType_fc1688(uVar3,0);
    pcVar4 = (char *)(_UNK_01091258 + 0x10911dc);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0109125c + 0x10911f0));
      *pcVar4 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(_UNK_01091260 + 0x1091208) + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_FX_ParticleImageManager__Play_1100a94(iVar1,uVar3,*puVar2,puVar2[1],puVar2[2],0);
  }
  return;
}

