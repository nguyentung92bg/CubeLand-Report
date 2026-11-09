/* IL2CPP: Rotatelab.Scripts.LevelManager$$ChangeLevelABTestVariant
void Rotatelab_Scripts_LevelManager__ChangeLevelABTestVariant (Rotatelab_Scripts_LevelManager_o* __this, int32_t levelIndex, int32_t variantIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$ChangeLevelABTestVariant
   void Rotatelab_Scripts_LevelManager__ChangeLevelABTestVariant (Rotatelab_Scripts_LevelManager_o*
   __this, int32_t levelIndex, int32_t variantIndex, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__ChangeLevelABTestVariant_1069d5c
               (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_0107a070 + 0x1079d7c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a074 + 0x1079d90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a078 + 0x1079d9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a07c + 0x1079da8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a080 + 0x1079db4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a084 + 0x1079dc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a088 + 0x1079dcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a08c + 0x1079dd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a090 + 0x1079de4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a094 + 0x1079df0));
    *pcVar5 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = Rotatelab_Scripts_LevelManager__GetLoopedLevelIndex_106986c(param_1,param_2);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar8 = *(undefined4 **)(_UNK_0107a098 + 0x1079e30);
  uVar2 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                    (*(int *)(param_1 + 0x2c),*puVar8);
  if (*(int *)(**(int **)(_UNK_0107a09c + 0x1079e44) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                      (*(int *)(param_1 + 0x2c),*puVar8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = *(int **)(_UNK_0107a0a0 + 0x1079ea4);
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    puVar4 = *(undefined4 **)(iVar3 + 0x5c);
    iVar6 = puVar4[2];
    if (iVar6 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
      }
      uVar7 = *puVar4;
      iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107a0a4 + 0x1079ef0));
      System_Func_object__int__bool____ctor_239e2d8
                (iVar6,uVar7,**(undefined4 **)(_UNK_0107a0a8 + 0x1079f10),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
      *piVar9 = iVar6;
      thunk_FUN_00ec5080(piVar9,iVar6);
    }
    if (*(int *)(**(int **)(_UNK_0107a0ac + 0x1079f3c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = Rotatelab_Extensions__TryFind_object__int__1489b34
                      (uVar2,iVar1 + 1,iVar6,&iStack_28,**(undefined4 **)(_UNK_0107a0b0 + 0x1079f64)
                      );
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x2c);
      if (param_3 == 0) {
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                          (iVar3,*puVar8);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_Dictionary_int__object___Remove_1fd130c
                  (*(int *)(iVar3 + 0x10),iVar1,**(undefined4 **)(_UNK_0107a0b4 + 0x107a060));
      }
      else {
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                          (iVar3,*puVar8);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iStack_28 + 0xc);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar6 + 0xc) <= param_3 - 1U) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Collections_Generic_Dictionary_int__object___set_Item_1fcfa9c
                  (*(int *)(iVar3 + 0x10),iVar1,*(undefined4 *)(iVar6 + (param_3 - 1U) * 4 + 0x10),
                   **(undefined4 **)(_UNK_0107a0b8 + 0x107a00c));
      }
    }
  }
  return;
}

