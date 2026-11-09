/* IL2CPP: Rotatelab.Scripts.GameManager.<>c__DisplayClass5_0$$<OnLevelCompleted>b__0
void Rotatelab_Scripts_GameManager___c__DisplayClass5_0___OnLevelCompleted_b__0 (Rotatelab_Scripts_GameManager___c__DisplayClass5_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager.<>c__DisplayClass5_0$$<OnLevelCompleted>b__0
   void Rotatelab_Scripts_GameManager___c__DisplayClass5_0___OnLevelCompleted_b__0
   (Rotatelab_Scripts_GameManager___c__DisplayClass5_0_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_GameManager___c__DisplayClass5_0___OnLevelCompleted_b__0_1067178(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar13 = (char *)(_UNK_0107721c + 0x107718c);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077220 + 0x10771a0));
    *pcVar13 = '\x01';
  }
  puVar15 = *(undefined4 **)(_UNK_01077224 + 0x10771b4);
  iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar15);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__OnLevelCompleted_1067228(iVar10,*(char *)(param_1 + 8) != '\0');
  if (*(char *)(param_1 + 9) != '\0') {
    return;
  }
  iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar15);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__RefreshCurrentLevel_1066138(iVar10);
  uVar11 = *(undefined4 *)(iVar10 + 0x18);
  pcVar13 = (char *)(_UNK_010790fc + 0x1078ce4);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079100 + 0x1078cfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079104 + 0x1078d08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079108 + 0x1078d14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107910c + 0x1078d20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079110 + 0x1078d2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079114 + 0x1078d38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079118 + 0x1078d44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107911c + 0x1078d50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079120 + 0x1078d5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079124 + 0x1078d68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079128 + 0x1078d74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107912c + 0x1078d80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079130 + 0x1078d8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079134 + 0x1078d98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079138 + 0x1078da4));
    *pcVar13 = '\x01';
  }
  Rotatelab_Scripts_LevelManager__ClearCurrentLevel_1068b7c(iVar10);
  *(undefined4 *)(iVar10 + 0x18) = uVar11;
  thunk_FUN_00ec5080((undefined4 *)(iVar10 + 0x18),uVar11);
  Rotatelab_Scripts_LevelManager__GetAttemptInfo_1069364(&uStack_48,iVar10,uVar11);
  uVar9 = uStack_2c;
  uVar8 = uStack_30;
  uVar7 = uStack_34;
  uVar6 = uStack_38;
  uVar5 = uStack_3c;
  uVar4 = uStack_40;
  uVar3 = uStack_44;
  uVar2 = uStack_48;
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  System_Nullable_LevelAttemptInfo____ctor_17dbf8c
            (&uStack_48,uVar5,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9,
             **(undefined4 **)(_UNK_0107913c + 0x1078e18));
  *(undefined4 *)(iVar10 + 0x38) = uStack_48;
  *(undefined4 *)(iVar10 + 0x3c) = uStack_44;
  *(undefined4 *)(iVar10 + 0x40) = uStack_40;
  *(undefined4 *)(iVar10 + 0x44) = uStack_3c;
  *(undefined4 *)(iVar10 + 0x48) = uStack_38;
  *(undefined4 *)(iVar10 + 0x4c) = uStack_34;
  *(undefined4 *)(iVar10 + 0x50) = uStack_30;
  *(undefined4 *)(iVar10 + 0x54) = uStack_2c;
  *(undefined4 *)(iVar10 + 0x58) = uStack_28;
  *(undefined4 *)(iVar10 + 0x5c) = uStack_24;
  thunk_FUN_00ec5080(iVar10 + 0x40,0);
  iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                     (**(undefined4 **)(_UNK_01079140 + 0x1078e68));
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_CameraManager__Initialize_ffb770(iVar10,0);
  iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                     (**(undefined4 **)(_UNK_01079144 + 0x1078e94));
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_EnvironmentManager__Initialize_100d908(iVar10,uVar11,0);
  iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                     (**(undefined4 **)(_UNK_01079148 + 0x1078ec4));
  if (iVar10 != 0) {
    Rotatelab_Scripts_DockManager__Initialize_1005340(iVar10,uVar11,0);
    iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_0107914c + 0x1078ef4));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_PlaceableManager__Initialize_1041970(iVar10,uVar11,0);
    iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_01079150 + 0x1078f24));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_ObjectManager__Initialize_102a844(iVar10,uVar11,0);
    iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_01079154 + 0x1078f54));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_LevelStateManager__Initialize_10167e4(iVar10,0);
    piVar14 = *(int **)(_UNK_01079158 + 0x1078f80);
    iVar10 = *piVar14;
    if (*(int *)(iVar10 + 0x74) == 0) {
      FUN_00ec3934();
      iVar10 = *piVar14;
    }
    iVar10 = *(int *)(*(int *)(iVar10 + 0x5c) + 0x124);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_object___Raise_23a2f44
              (iVar10,uVar11,**(undefined4 **)(_UNK_0107915c + 0x1078fb8));
    iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_01079160 + 0x1078fcc));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Currency_HeartManager__DecreaseHeart_1084088(iVar10,0);
    piVar14 = *(int **)(_UNK_01079164 + 0x1078ff8);
    iVar10 = *piVar14;
    if (*(int *)(iVar10 + 0x74) == 0) {
      FUN_00ec3934();
      iVar10 = *piVar14;
    }
    piVar14 = *(int **)(_UNK_01079168 + 0x107901c);
    cVar1 = *(char *)(*(int *)(iVar10 + 0x5c) + 0x79);
    iVar10 = *piVar14;
    if (*(int *)(iVar10 + 0x74) == 0) {
      FUN_00ec3934();
      iVar10 = *piVar14;
    }
    puVar15 = *(undefined4 **)(iVar10 + 0x5c);
    iVar12 = puVar15[1];
    if (iVar12 == 0) {
      if (*(int *)(iVar10 + 0x74) == 0) {
        FUN_00ec3934();
        puVar15 = *(undefined4 **)(*piVar14 + 0x5c);
      }
      uVar11 = *puVar15;
      iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107916c + 0x1079068));
      System_Action___ctor_2b10bac(iVar12,uVar11,**(undefined4 **)(_UNK_01079170 + 0x1079088),0);
      piVar14 = (int *)(*(int *)(*piVar14 + 0x5c) + 4);
      *piVar14 = iVar12;
      thunk_FUN_00ec5080(piVar14,iVar12);
    }
    if (*(int *)(**(int **)(_UNK_01079174 + 0x10790b0) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar11 = _UNK_010790f8;
    if (cVar1 == '\0') {
      uVar11 = 0x3f800000;
    }
    PrimeTween_Tween__Delay_2ce9f2c(&uStack_48,uVar11,iVar12,0,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

