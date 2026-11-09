/* IL2CPP: Rotatelab.RemoteConfigManager$$GetSatoriFlag<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_RemoteConfigManager__GetSatoriFlag___Il2CppFullySharedGenericType_ (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, const MethodInfo_1595D14* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$GetSatoriFlag<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_RemoteConfigManager__GetSatoriFlag___Il2CppFullySharedGenericType_
   (Rotatelab_RemoteConfigManager_o* __this, System_String_o* key,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, const MethodInfo_1595D14*
   method); */

void Rotatelab_RemoteConfigManager__GetSatoriFlag___Il2CppFullySharedGenericType__1595d14
               (int param_1,undefined4 param_2,undefined4 *****param_3,undefined4 param_4,
               int param_5)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 *****pppppuVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  int aiStack_58 [2];
  undefined1 auStack_50 [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 ****ppppuStack_38;
  int iStack_34;
  undefined1 *puStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_015a5fd0 + 0x15a5d40);
  piVar2 = *(int **)(param_5 + 0x1c);
  uStack_4c = param_2;
  uStack_48 = param_4;
  ppppuStack_38 = param_3;
  if (piVar2 == (int *)0x0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_015a5fd4 + 0x15a5d64));
    piVar2 = *(int **)(param_5 + 0x1c);
    if (piVar2 == (int *)0x0) {
      FUN_00efd7c4(param_5);
      piVar2 = *(int **)(param_5 + 0x1c);
    }
  }
  iVar8 = *(int *)(*piVar2 + 0x84);
  uVar5 = iVar8 + 7U & 0xfffffff8;
  puVar11 = auStack_50 + -uVar5;
  iVar10 = (int)puVar11 - uVar5;
  iStack_3c = 0;
  FUN_00f88e5c(iVar10,iVar8);
  uStack_40 = 0;
  iVar9 = iVar10 - uVar5;
  FUN_00f88e5c(iVar9,iVar8);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                    (*(int *)(param_1 + 0x14),uStack_4c,&iStack_3c,
                     **(undefined4 **)(_UNK_015a5fd8 + 0x15a5de4));
  if ((bVar1 & iStack_3c != 0) == 0) {
    pppppuVar7 = &ppppuStack_38;
    if (*(int *)(**(int **)(param_5 + 0x1c) + 0x14) < 0) {
      pppppuVar7 = param_3;
    }
    thunk_FUN_00f95db8(puVar11,pppppuVar7,iVar8);
    thunk_FUN_00f95db8(iVar9,pppppuVar7,iVar8);
  }
  else {
    puVar4 = (undefined4 *)(*(int **)(param_5 + 0x1c))[1];
    uVar3 = *puVar4;
    pcVar6 = (code *)puVar4[2];
    iStack_34 = iStack_3c;
    puStack_30 = puVar11;
    *(undefined1 **)(iVar9 + -8) = puVar11;
    (*pcVar6)(uVar3,puVar4,0,&iStack_34);
    thunk_FUN_00f95db8(iVar9,puVar11,iVar8);
  }
  thunk_FUN_00f95db8(iVar10,iVar9,iVar8);
  uVar3 = uStack_48;
  thunk_FUN_00f95db8(puVar11,iVar10,iVar8);
  thunk_FUN_00f95db8(uVar3,iVar10,iVar8);
  if (**(int **)(_UNK_015a5fe4 + 0x15a5ecc) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

