/* IL2CPP: Rotatelab.Scripts.LevelManager$$<InitializeAsync>b__31_0
void Rotatelab_Scripts_LevelManager___InitializeAsync_b__31_0 (Rotatelab_Scripts_LevelManager_o* __this, int32_t __, bool __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$<InitializeAsync>b__31_0
   void Rotatelab_Scripts_LevelManager___InitializeAsync_b__31_0 (Rotatelab_Scripts_LevelManager_o*
   __this, int32_t __, bool __, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager___InitializeAsync_b__31_0_106a89c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uStack_40;
  undefined4 *puStack_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_01079d08 + 0x1079974);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d0c + 0x1079988));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d10 + 0x1079994));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d14 + 0x10799a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d18 + 0x10799ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d1c + 0x10799b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d20 + 0x10799c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d24 + 0x10799d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d28 + 0x10799dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d2c + 0x10799e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01079d30 + 0x10799f4));
    *pcVar5 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  iVar1 = Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c();
  if (*(int *)(**(int **)(_UNK_01079d34 + 0x1079a20) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Pool_HashSetPool_object___Get_240ea4c
            (&uStack_40,&iStack_34,**(undefined4 **)(_UNK_01079d38 + 0x1079a40));
  uStack_30 = uStack_40;
  uStack_2c = puStack_3c;
  uVar6 = iVar1 - 3U & ~((int)(iVar1 - 3U) >> 0x1f);
  uStack_40 = 0;
  puStack_3c = &uStack_30;
  if ((int)uVar6 <= iVar1 + 3) {
    puVar8 = *(undefined4 **)(_UNK_01079d3c + 0x1079a80);
    do {
      iVar3 = iStack_34;
      uVar2 = Rotatelab_Scripts_LevelManager__GetLevelDataAssetReference_10695f0(param_1,uVar6,1);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_object___Add_2420ac8(iVar3,uVar2,*puVar8);
      iVar3 = iStack_34;
      uVar2 = Rotatelab_Scripts_LevelManager__GetLevelDataAssetReference_10695f0(param_1,uVar6,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_HashSet_object___Add_2420ac8(iVar3,uVar2,*puVar8);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 <= iVar1 + 3);
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 0xc);
  if (-1 < iVar1 + -1) {
    puVar8 = *(undefined4 **)(_UNK_01079d40 + 0x1079b18);
    puVar9 = *(undefined4 **)(_UNK_01079d44 + 0x1079b20);
    puVar10 = *(undefined4 **)(_UNK_01079d48 + 0x1079b28);
    piVar11 = *(int **)(_UNK_01079d4c + 0x1079b30);
    do {
      iVar3 = iStack_34;
      if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = iVar1 + -1;
      uVar2 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x20),iVar1,*puVar8);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = System_Collections_Generic_HashSet_object___Remove_2420024(iVar3,uVar2,*puVar9);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x20),iVar1,*puVar8);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = Rotatelab_Networking_AdvancedAssetReference_object___get_Asset_1f1ca8c
                          (iVar3,*puVar10);
        uVar7 = *(undefined4 *)(param_1 + 0x18);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar2,uVar7,0);
        if (iVar3 != 0) {
          if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          piVar4 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                                    (*(int *)(param_1 + 0x20),iVar1,*puVar8);
          if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          (**(code **)(*piVar4 + 0x150))(piVar4,*(undefined4 *)(*piVar4 + 0x154));
          if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_object___RemoveAt_267f3f8
                    (*(int *)(param_1 + 0x20),iVar1,**(undefined4 **)(_UNK_01079d50 + 0x1079c4c));
        }
      }
    } while (0 < iVar1);
  }
  Rotatelab_Pool_PooledObject_object___Dispose_186ffc8
            (&uStack_30,**(undefined4 **)(_UNK_01079d54 + 0x1079c6c));
  return;
}

