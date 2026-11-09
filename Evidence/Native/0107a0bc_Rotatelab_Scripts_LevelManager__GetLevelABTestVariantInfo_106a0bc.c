/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetLevelABTestVariantInfo
void Rotatelab_Scripts_LevelManager__GetLevelABTestVariantInfo (Rotatelab_Scripts_LevelManager_o* __this, int32_t levelIndex, int32_t* numberOfVariants, int32_t* variantIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$GetLevelABTestVariantInfo
   void Rotatelab_Scripts_LevelManager__GetLevelABTestVariantInfo (Rotatelab_Scripts_LevelManager_o*
   __this, int32_t levelIndex, int32_t* numberOfVariants, int32_t* variantIndex, const MethodInfo*
   method); */

void Rotatelab_Scripts_LevelManager__GetLevelABTestVariantInfo_106a0bc
               (int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_0107a4b8 + 0x107a0dc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4bc + 0x107a0f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4c0 + 0x107a100));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4c4 + 0x107a10c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4c8 + 0x107a118));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4cc + 0x107a124));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4d0 + 0x107a130));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4d4 + 0x107a13c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4d8 + 0x107a148));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4dc + 0x107a154));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4e0 + 0x107a160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107a4e4 + 0x107a16c));
    *pcVar4 = '\x01';
  }
  *param_3 = 1;
  iStack_28 = 0;
  *param_4 = 0;
  uStack_2c = 0;
  iVar1 = Rotatelab_Scripts_LevelManager__GetLoopedLevelIndex_106986c(param_1,param_2);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_0107a4e8 + 0x107a1bc);
  uVar2 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                    (*(int *)(param_1 + 0x2c),*puVar7);
  if (*(int *)(**(int **)(_UNK_0107a4ec + 0x107a1d0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar2,0,0);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                      (*(int *)(param_1 + 0x2c),*puVar7);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar9 = *(int **)(_UNK_0107a4f0 + 0x107a234);
    uVar2 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *piVar9;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar9;
    }
    puVar7 = *(undefined4 **)(iVar3 + 0x5c);
    iVar8 = puVar7[3];
    if (iVar8 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar7 = *(undefined4 **)(*piVar9 + 0x5c);
      }
      uVar5 = *puVar7;
      iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0107a4f4 + 0x107a280));
      System_Func_object__int__bool____ctor_239e2d8
                (iVar8,uVar5,**(undefined4 **)(_UNK_0107a4f8 + 0x107a2a0),0);
      piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 0xc);
      *piVar9 = iVar8;
      thunk_FUN_00ec5080(piVar9,iVar8);
    }
    piVar9 = *(int **)(_UNK_0107a4fc + 0x107a2cc);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = Rotatelab_Extensions__TryFind_object__int__1489b34
                      (uVar2,iVar1 + 1,iVar8,&iStack_28,**(undefined4 **)(_UNK_0107a500 + 0x107a2f4)
                      );
    puVar7 = *(undefined4 **)(_UNK_0107a504 + 0x107a314);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar6 = *(undefined4 **)(_UNK_0107a508 + 0x107a338);
      uVar2 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                        (*(int *)(param_1 + 0x24),*puVar6);
      if (*(int *)(**(int **)(_UNK_0107a50c + 0x107a34c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                          (*(int *)(param_1 + 0x24),*puVar6);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = System_Collections_Generic_Dictionary_int__object___ContainsKey_1fcfd10
                          (*(int *)(iVar3 + 0x10),iVar1,**(undefined4 **)(_UNK_0107a510 + 0x107a3c0)
                          );
        if (iVar3 != 0) {
          return;
        }
      }
      if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iStack_28 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(param_1 + 0x2c);
      *param_3 = *(int *)(*(int *)(iStack_28 + 0xc) + 0xc) + *param_3;
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c(iVar3,*puVar7);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = System_Collections_Generic_Dictionary_int__object___TryGetValue_1fd19dc
                        (*(int *)(iVar3 + 0x10),iVar1,&uStack_2c,
                         **(undefined4 **)(_UNK_0107a514 + 0x107a450));
      uVar2 = uStack_2c;
      iVar3 = 0;
      if (iVar1 != 0) {
        if (iStack_28 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar5 = *(undefined4 *)(iStack_28 + 0xc);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = Rotatelab_Extensions__IndexOf_object__14872dc
                          (uVar5,uVar2,**(undefined4 **)(_UNK_0107a518 + 0x107a4a0));
        iVar3 = iVar3 + 1;
      }
      *param_4 = iVar3;
    }
  }
  return;
}

