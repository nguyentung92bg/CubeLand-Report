/* IL2CPP: Rotatelab.MetaProgressionStageCity$$Collect
void Rotatelab_MetaProgressionStageCity__Collect (Rotatelab_MetaProgressionStageCity_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageCity$$Collect
   void Rotatelab_MetaProgressionStageCity__Collect (Rotatelab_MetaProgressionStageCity_o* __this,
   const MethodInfo* method); */

void Rotatelab_MetaProgressionStageCity__Collect_fc063c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  Rotatelab_MetaProgressionBaseStage__Collect_fbbcfc(param_1,0);
  pcVar5 = (char *)(_UNK_00fd089c + 0xfd0670);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd08a0 + 0xfd0684));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd08a4 + 0xfd0690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd08a8 + 0xfd069c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fd08ac + 0xfd06b0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x58) + 8) <= iVar2) {
    puVar7 = *(undefined4 **)(_UNK_00fd08b0 + 0xfd06fc);
    iVar6 = *(int *)(param_1 + 0x5c);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_MetaProgressionController__get_CurrentCityIndex_fbbe34(iVar2,0);
    iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
    if (iVar6 != iVar2) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x3c);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = UnityEngine_Component__get_transform_35fe190(iVar2,0);
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x18),0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__get_position_36149b0(&uStack_30,iVar3,0);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_position_3614acc(iVar6,uStack_30,uStack_2c,uStack_28,0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(iVar2,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = Rotatelab_MetaProgressionController__get_CurrentCityIndex_fbbe34(iVar2,0);
      piVar4 = (int *)uVar8;
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar4 + 0xf8))
                (piVar4,(int)((ulonglong)uVar8 >> 0x20),*(int *)(param_1 + 0x5c),
                 *(int *)(param_1 + 0x5c) >> 0x1f,*(undefined4 *)(*piVar4 + 0xfc));
      piVar4 = *(int **)(_UNK_00fd08b4 + 0xfd0850);
      iVar2 = *piVar4;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar4;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x174);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 != 0) {
        (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
      }
    }
  }
  return;
}

