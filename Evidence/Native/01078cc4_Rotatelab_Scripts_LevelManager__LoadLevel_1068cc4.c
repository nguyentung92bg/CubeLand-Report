/* IL2CPP: Rotatelab.Scripts.LevelManager$$LoadLevel
void Rotatelab_Scripts_LevelManager__LoadLevel (Rotatelab_Scripts_LevelManager_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$LoadLevel
   void Rotatelab_Scripts_LevelManager__LoadLevel (Rotatelab_Scripts_LevelManager_o* __this,
   Rotatelab_SoLevelData_o* levelData, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__LoadLevel_1068cc4(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  char *pcVar14;
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
  
  pcVar14 = (char *)(_UNK_010790fc + 0x1078ce4);
  if (*pcVar14 == '\0') {
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
    *pcVar14 = '\x01';
  }
  Rotatelab_Scripts_LevelManager__ClearCurrentLevel_1068b7c(param_1);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x18),param_2);
  Rotatelab_Scripts_LevelManager__GetAttemptInfo_1069364(&uStack_48,param_1,param_2);
  uVar8 = uStack_2c;
  uVar7 = uStack_30;
  uVar6 = uStack_34;
  uVar5 = uStack_38;
  uVar4 = uStack_3c;
  uVar3 = uStack_40;
  uVar2 = uStack_44;
  uVar13 = uStack_48;
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
            (&uStack_48,uVar4,uVar13,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8,
             **(undefined4 **)(_UNK_0107913c + 0x1078e18));
  *(undefined4 *)(param_1 + 0x38) = uStack_48;
  *(undefined4 *)(param_1 + 0x3c) = uStack_44;
  *(undefined4 *)(param_1 + 0x40) = uStack_40;
  *(undefined4 *)(param_1 + 0x44) = uStack_3c;
  *(undefined4 *)(param_1 + 0x48) = uStack_38;
  *(undefined4 *)(param_1 + 0x4c) = uStack_34;
  *(undefined4 *)(param_1 + 0x50) = uStack_30;
  *(undefined4 *)(param_1 + 0x54) = uStack_2c;
  *(undefined4 *)(param_1 + 0x58) = uStack_28;
  *(undefined4 *)(param_1 + 0x5c) = uStack_24;
  thunk_FUN_00ec5080(param_1 + 0x40,0);
  iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01079140 + 0x1078e68));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_CameraManager__Initialize_ffb770(iVar9,0);
  iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01079144 + 0x1078e94));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_EnvironmentManager__Initialize_100d908(iVar9,param_2,0);
  iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01079148 + 0x1078ec4));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_DockManager__Initialize_1005340(iVar9,param_2,0);
  iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0107914c + 0x1078ef4));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_PlaceableManager__Initialize_1041970(iVar9,param_2,0);
  iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01079150 + 0x1078f24));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_ObjectManager__Initialize_102a844(iVar9,param_2,0);
  iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01079154 + 0x1078f54));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__Initialize_10167e4(iVar9,0);
  piVar12 = *(int **)(_UNK_01079158 + 0x1078f80);
  iVar9 = *piVar12;
  if (*(int *)(iVar9 + 0x74) == 0) {
    FUN_00ec3934();
    iVar9 = *piVar12;
  }
  iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x124);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object___Raise_23a2f44
            (iVar9,param_2,**(undefined4 **)(_UNK_0107915c + 0x1078fb8));
  iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01079160 + 0x1078fcc));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_HeartManager__DecreaseHeart_1084088(iVar9,0);
  piVar12 = *(int **)(_UNK_01079164 + 0x1078ff8);
  iVar9 = *piVar12;
  if (*(int *)(iVar9 + 0x74) == 0) {
    FUN_00ec3934();
    iVar9 = *piVar12;
  }
  piVar12 = *(int **)(_UNK_01079168 + 0x107901c);
  cVar1 = *(char *)(*(int *)(iVar9 + 0x5c) + 0x79);
  iVar9 = *piVar12;
  if (*(int *)(iVar9 + 0x74) == 0) {
    FUN_00ec3934();
    iVar9 = *piVar12;
  }
  puVar10 = *(undefined4 **)(iVar9 + 0x5c);
  iVar11 = puVar10[1];
  if (iVar11 == 0) {
    if (*(int *)(iVar9 + 0x74) == 0) {
      FUN_00ec3934();
      puVar10 = *(undefined4 **)(*piVar12 + 0x5c);
    }
    uVar13 = *puVar10;
    iVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107916c + 0x1079068));
    System_Action___ctor_2b10bac(iVar11,uVar13,**(undefined4 **)(_UNK_01079170 + 0x1079088),0);
    piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 4);
    *piVar12 = iVar11;
    thunk_FUN_00ec5080(piVar12,iVar11);
  }
  if (*(int *)(**(int **)(_UNK_01079174 + 0x10790b0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar13 = _UNK_010790f8;
  if (cVar1 == '\0') {
    uVar13 = 0x3f800000;
  }
  PrimeTween_Tween__Delay_2ce9f2c(&uStack_48,uVar13,iVar11,0,0,0);
  return;
}

