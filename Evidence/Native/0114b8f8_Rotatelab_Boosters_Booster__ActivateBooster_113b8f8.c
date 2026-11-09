/* IL2CPP: Rotatelab.Boosters.Booster$$ActivateBooster
void Rotatelab_Boosters_Booster__ActivateBooster (Rotatelab_Boosters_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x011348ac) */
/* WARNING: Removing unreachable block (ram,0x011348b4) */
/* WARNING: Removing unreachable block (ram,0x011348b8) */
/* WARNING: Removing unreachable block (ram,0x011348d8) */
/* WARNING: Removing unreachable block (ram,0x011348e4) */
/* WARNING: Removing unreachable block (ram,0x011348e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$ActivateBooster
   void Rotatelab_Boosters_Booster__ActivateBooster (Rotatelab_Boosters_Booster_o* __this, const
   MethodInfo* method); */

void Rotatelab_Boosters_Booster__ActivateBooster_113b8f8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  uint in_fpscr;
  undefined8 uVar10;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar8 = (char *)(_UNK_0114bccc + 0x114b910);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bcd0 + 0x114b924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bcd4 + 0x114b930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bcd8 + 0x114b93c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bcdc + 0x114b948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bce0 + 0x114b954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bce4 + 0x114b960));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bce8 + 0x114b96c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bcec + 0x114b978));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bcf0 + 0x114b984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bcf4 + 0x114b990));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bcf8 + 0x114b99c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bcfc + 0x114b9a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bd00 + 0x114b9b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114bd04 + 0x114b9c0));
    *pcVar8 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114bd08 + 0x114b9d4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = RemoteVariableSO_bool___op_Implicit_1a81fac
                    (*(undefined4 *)(iVar2 + 0x1c),**(undefined4 **)(_UNK_0114bd0c + 0x114b9f4));
  if (iVar2 == 0) {
    puVar1 = *(undefined4 **)(_UNK_0114bd18 + 0x114ba64);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x3c) != 0) {
      piVar9 = *(int **)(_UNK_0114bd1c + 0x114ba90);
      iVar2 = *piVar9;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar9;
      }
      iVar5 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x24);
      uVar4 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84(0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar2 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = System_String__Concat_29fee38
                        (*(undefined4 *)(*(int *)(iVar2 + 0x3c) + 0x14),
                         **(undefined4 **)(_UNK_0114bd20 + 0x114baf0),0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_int__object___Raise_23a4108
                (iVar5,uVar4,uVar3,**(undefined4 **)(_UNK_0114bd24 + 0x114bb1c));
    }
  }
  else {
    piVar9 = *(int **)(_UNK_0114bd10 + 0x114ba10);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar9;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xcc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool__bool___Raise_23a39b8
              (iVar2,0,0,**(undefined4 **)(_UNK_0114bd14 + 0x114ba4c));
  }
  uVar10 = Rotatelab_Boosters_Booster__get_RemainingUsages_113a0a0(param_1);
  if ((int)(uint)((int)uVar10 == 0) <= (int)((ulonglong)uVar10 >> 0x20)) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114bd28 + 0x114bb44));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar2,10,0);
    piVar9 = *(int **)(_UNK_0114bd2c + 0x114bb74);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar9;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xa4);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_Int32Enum___Raise_23a2cdc
              (iVar2,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc),
               **(undefined4 **)(_UNK_0114bd30 + 0x114bbc0));
    piVar9 = *(int **)(_UNK_0114bd34 + 0x114bbd4);
    iVar2 = *piVar9;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar9;
    }
    iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x28);
    if (*(int *)(param_1 + 0x10) != 0) {
      uStack_1c = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc);
      uStack_24 = **(undefined4 **)(_UNK_0114bd38 + 0x114bc10);
      uStack_20 = 0xffffffff;
      uVar4 = System_Enum__ToString_2bab8c0(&uStack_24,0);
      piVar9 = *(int **)(_UNK_0114bd3c + 0x114bc38);
      iVar5 = *piVar9;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar9;
      }
      if (iVar2 != 0) {
        Rotatelab_GameAction_object__object___Raise_23a4f8c
                  (iVar2,uVar4,*(undefined4 *)(*(int *)(iVar5 + 0x5c) + 4),
                   **(undefined4 **)(_UNK_0114bd40 + 0x114bc74));
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114bd44 + 0x114bc90));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar9 = *(int **)(iVar2 + 0x24);
  iVar2 = *(int *)(param_1 + 0x10);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_01146b0c + 0x1146a78);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146b10 + 0x1146a8c));
    *pcVar8 = '\x01';
  }
  piVar9[0x15] = iVar2;
  thunk_FUN_00ec5080(piVar9 + 0x15,iVar2);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar2 + 0x20);
  piVar9[7] = iVar5;
  if (piVar9[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34(piVar9[0xd],**(undefined4 **)(_UNK_01146b14 + 0x1146ae0),uVar4,0);
  piVar9[0x16] = piVar9[7] * *(int *)(iVar2 + 0x1c);
  pcVar8 = (char *)(_UNK_0113479c + 0x113474c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011347a0 + 0x1134760));
    *pcVar8 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011347a4 + 0x1134774));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_01134908 + 0x11347c4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113490c + 0x11347d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134910 + 0x11347e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134914 + 0x11347f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134918 + 0x11347fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113491c + 0x1134808));
    *pcVar8 = '\x01';
  }
  uVar4 = *(undefined4 *)(iVar2 + 0x10);
  if (*(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = Rotatelab_Extensions__InsertUnique_object__14873f8
                    (uVar4,piVar9,**(undefined4 **)(_UNK_01134924 + 0x1134848));
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (1 < *(int *)(*(int *)(iVar2 + 0x10) + 0xc)) {
    if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar2 + 0x10),1,**(undefined4 **)(_UNK_01134928 + 0x1134894));
    Rotatelab_UI_PopupManager__SetPopupVisible_1124efc(uVar4,uVar4,0);
  }
  pcVar8 = (char *)(_UNK_01134fac + 0x1134f14);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
    *pcVar8 = '\x01';
  }
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar9;
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
        puVar1 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
        goto LAB_01134f94;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar1 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(piVar9,1,puVar1[1]);
  return;
}

