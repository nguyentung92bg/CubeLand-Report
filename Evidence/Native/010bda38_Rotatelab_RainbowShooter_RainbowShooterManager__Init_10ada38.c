/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterManager$$Init
void Rotatelab_RainbowShooter_RainbowShooterManager__Init (Rotatelab_RainbowShooter_RainbowShooterManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterManager$$Init
   void Rotatelab_RainbowShooter_RainbowShooterManager__Init
   (Rotatelab_RainbowShooter_RainbowShooterManager_o* __this, const MethodInfo* method); */

void Rotatelab_RainbowShooter_RainbowShooterManager__Init_10ada38(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  pcVar4 = (char *)(_UNK_010bdbe0 + 0x10bda50);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdbe4 + 0x10bda64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdbe8 + 0x10bda70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdbec + 0x10bda7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdbf0 + 0x10bda88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdbf4 + 0x10bda94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdbf8 + 0x10bdaa0));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 0xb4);
  uVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010bdbfc + 0x10bdac4));
  puVar7 = *(undefined4 **)(_UNK_010bdc00 + 0x10bdadc);
  uVar3 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar3,uVar2,**(undefined4 **)(_UNK_010bdc04 + 0x10bdaf8),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar3,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x44) + 0xb4);
  uVar2 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar2,param_1,**(undefined4 **)(_UNK_010bdc08 + 0x10bdb50),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar2,0);
  piVar6 = *(int **)(_UNK_010bdc0c + 0x10bdb80);
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar6;
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0xd8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar5,*(undefined4 *)(param_1 + 0x14),0,4,**(undefined4 **)(_UNK_010bdc10 + 0x10bdbc4))
  ;
  pcVar4 = (char *)(_UNK_010bdcd4 + 0x10bdc28);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bdcd8 + 0x10bdc3c));
    *pcVar4 = '\x01';
  }
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010bdcdc + 0x10bdc50));
  piVar6 = *(int **)(param_1 + 0x3c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_RainbowShooter_RainbowShooterController__get_RainbowShooterCurrentProgress_10ab8c0
                    (iVar5,0);
  uVar3 = Rotatelab_RainbowShooter_RainbowShooterController__get_MaxProgression_10ab8a0(iVar5,0);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar8 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = fVar9 / fVar8;
  pcVar4 = (char *)(_UNK_03731e0c + 0x3731d88);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03731e10 + 0x3731d9c),fVar9,0);
    *pcVar4 = '\x01';
  }
  bVar1 = fVar9 < 0.0;
  if (1.0 < fVar9) {
    fVar9 = 1.0;
  }
  if (bVar1) {
    fVar9 = _UNK_03731e08;
  }
  iVar5 = UnityEngine_UI_SetPropertyUtility__SetStruct_float__15b58fc
                    (piVar6 + 0x25,fVar9,**(undefined4 **)(_UNK_03731e14 + 0x3731db8));
  if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x03731dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar6 + 0x1a0))(piVar6,*(undefined4 *)(*piVar6 + 0x1a4));
    return;
  }
  return;
}

