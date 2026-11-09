/* IL2CPP: Rotatelab.UI.PreGame$$OnArtworkSetHandler
void Rotatelab_UI_PreGame__OnArtworkSetHandler (Rotatelab_UI_PreGame_o* __this, UnityEngine_AddressableAssets_AssetReferenceSprite_o* reference, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreGame$$OnArtworkSetHandler
   void Rotatelab_UI_PreGame__OnArtworkSetHandler (Rotatelab_UI_PreGame_o* __this,
   UnityEngine_AddressableAssets_AssetReferenceSprite_o* reference, const MethodInfo* method); */

void Rotatelab_UI_PreGame__OnArtworkSetHandler_112cb38(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_0113cdd4 + 0x113cb54);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cdd8 + 0x113cb68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cddc + 0x113cb74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cde0 + 0x113cb80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cde4 + 0x113cb8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cde8 + 0x113cb98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cdec + 0x113cba4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cdf0 + 0x113cbb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cdf4 + 0x113cbbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113cdf8 + 0x113cbc8));
    *pcVar5 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113cdfc + 0x113cbdc));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*param_2 + 0xf0))(param_2,*(undefined4 *)(*param_2 + 0xf4));
  puVar4 = (undefined8 *)(param_1 + 0x1c);
  iVar3 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___IsValid_17b6c30
                    (puVar4,**(undefined4 **)(_UNK_0113ce00 + 0x113cc3c));
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x80);
    if (*(int *)(**(int **)(_UNK_0113ce04 + 0x113cc68) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar6,0,0);
    if ((iVar3 != 0) &&
       (iVar3 = System_Object__Equals_2bc9400(*(undefined4 *)(param_1 + 0x28),uVar2,0), iVar3 != 0))
    {
      return;
    }
  }
  uVar7 = *puVar4;
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(iVar1 + 0xc) = uVar7;
  thunk_FUN_00ec5080(iVar1 + 0xc,0);
  if (*(int *)(**(int **)(_UNK_0113ce08 + 0x113ccd4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_AddressableAssets_Addressables__LoadAssetAsync_object__13a0144
            (&uStack_30,uVar2,**(undefined4 **)(_UNK_0113ce0c + 0x113ccf4));
  *(undefined4 *)(param_1 + 0x24) = uStack_28;
  *puVar4 = uStack_30;
  thunk_FUN_00ec5080(puVar4,0);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113ce10 + 0x113cd34));
  System_Action_AsyncOperationHandle_object_____ctor_17a9630
            (uVar2,iVar1,**(undefined4 **)(_UNK_0113ce14 + 0x113cd50),0);
  UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___add_Completed_17b62f0
            (puVar4,uVar2,**(undefined4 **)(_UNK_0113ce18 + 0x113cd68));
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x80);
    if (*(int *)(**(int **)(_UNK_0113ce1c + 0x113cd8c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0);
    if (iVar1 != 0) {
      UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___WaitForCompletion_17b6994
                (puVar4,**(undefined4 **)(_UNK_0113ce20 + 0x113cdc4));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

